from multiprocessing import Process, Queue, Event
from pypdf import PdfReader
import time
import os

ARCHIVO = r"E:\Python\ATS\protegido.pdf"

NUM_PROCESOS = 4


def buscar(rango_inicio, rango_fin, digitos, proceso_id, resultados, detener):
    """Busca contraseñas numéricas dentro de un rango."""

    try:
        reader = PdfReader(ARCHIVO)

        for numero in range(rango_inicio, rango_fin):

            if detener.is_set():
                return

            # Mantener ceros a la izquierda
            password = f"{numero:0{digitos}d}"

            try:
                resultado = reader.decrypt(password)

                if resultado.name != "NOT_DECRYPTED":

                    resultados.put({
                        "tipo": "encontrada",
                        "password": password,
                        "proceso": proceso_id,
                        "numero": numero,
                    })

                    detener.set()
                    return

            except Exception:
                pass

            # Reportar cada 10,000 intentos
            if (numero - rango_inicio + 1) % 10_000 == 0:

                resultados.put({
                    "tipo": "progreso",
                    "proceso": proceso_id,
                    "cantidad": 10_000,
                    "ultimo": numero,
                })

        resultados.put({
            "tipo": "terminado",
            "proceso": proceso_id,
        })

    except Exception as e:

        resultados.put({
            "tipo": "error",
            "proceso": proceso_id,
            "error": str(e),
        })


def ejecutar_busqueda(inicio, fin, digitos):
    """Ejecuta una búsqueda usando varios procesos."""

    total = fin - inicio

    print("\n" + "=" * 70)
    print(f"BÚSQUEDA DE {digitos} DÍGITOS")
    print("=" * 70)

    print(f"Rango: {inicio:0{digitos}d} - {fin - 1:0{digitos}d}")
    print(f"Candidatos: {total:,}")
    print(f"Procesos: {NUM_PROCESOS}")
    print(f"CPU lógica disponible: {os.cpu_count()}")
    print("=" * 70)

    tamaño = total // NUM_PROCESOS

    rangos = []

    for i in range(NUM_PROCESOS):

        rango_inicio = inicio + i * tamaño

        if i == NUM_PROCESOS - 1:
            rango_fin = fin
        else:
            rango_fin = rango_inicio + tamaño

        rangos.append((rango_inicio, rango_fin))

    print("\nRangos asignados:")

    for i, (rango_inicio, rango_fin) in enumerate(rangos, start=1):

        print(
            f"  Proceso {i}: "
            f"{rango_inicio:0{digitos}d} - "
            f"{rango_fin - 1:0{digitos}d} "
            f"({rango_fin - rango_inicio:,} candidatos)"
        )

    resultados = Queue()
    detener = Event()

    procesos = []

    tiempo_inicio = time.perf_counter()

    print("\nIniciando procesos...\n")

    for i, (rango_inicio, rango_fin) in enumerate(rangos, start=1):

        proceso = Process(
            target=buscar,
            args=(
                rango_inicio,
                rango_fin,
                digitos,
                i,
                resultados,
                detener,
            ),
        )

        proceso.start()
        procesos.append(proceso)

    intentos = 0
    procesos_terminados = 0
    contraseña_encontrada = None

    try:

        while procesos_terminados < NUM_PROCESOS:

            mensaje = resultados.get()

            tipo = mensaje["tipo"]

            if tipo == "progreso":

                intentos += mensaje["cantidad"]

                transcurrido = time.perf_counter() - tiempo_inicio

                velocidad = (
                    intentos / transcurrido
                    if transcurrido > 0
                    else 0
                )

                restantes = total - intentos

                if velocidad > 0:
                    segundos_restantes = restantes / velocidad
                else:
                    segundos_restantes = 0

                horas = int(segundos_restantes // 3600)
                minutos = int(
                    (segundos_restantes % 3600) // 60
                )
                segundos = int(
                    segundos_restantes % 60
                )

                porcentaje = (
                    intentos / total
                ) * 100

                print(
                    f"[PROGRESO] "
                    f"{intentos:,}/{total:,} "
                    f"({porcentaje:.2f}%) | "
                    f"Proceso {mensaje['proceso']} | "
                    f"Último: "
                    f"{mensaje['ultimo']:0{digitos}d} | "
                    f"{velocidad:,.0f} intentos/s | "
                    f"Restante aprox.: "
                    f"{horas}h {minutos}m {segundos}s",
                    flush=True
                )

            elif tipo == "encontrada":

                contraseña_encontrada = mensaje["password"]

                detener.set()

                transcurrido = (
                    time.perf_counter() - tiempo_inicio
                )

                print("\n")
                print("=" * 70)
                print("       *** CONTRASEÑA ENCONTRADA ***")
                print("=" * 70)
                print(
                    f"Contraseña : "
                    f"{contraseña_encontrada}"
                )
                print(
                    f"Proceso    : "
                    f"{mensaje['proceso']}"
                )
                print(
                    f"Número     : "
                    f"{mensaje['numero']}"
                )
                print(
                    f"Tiempo     : "
                    f"{transcurrido:.2f} segundos"
                )
                print("=" * 70)

                break

            elif tipo == "terminado":

                procesos_terminados += 1

                print(
                    f"[PROCESO {mensaje['proceso']}] "
                    f"Rango terminado.",
                    flush=True
                )

            elif tipo == "error":

                print(
                    f"[ERROR] "
                    f"Proceso {mensaje['proceso']}: "
                    f"{mensaje['error']}",
                    flush=True
                )

    except KeyboardInterrupt:

        print("\n[!] Búsqueda cancelada.")

        detener.set()

    finally:

        detener.set()

        print("\n[INFO] Cerrando procesos...")

        for proceso in procesos:

            proceso.join(timeout=2)

        for proceso in procesos:

            if proceso.is_alive():
                proceso.terminate()
                proceso.join()

    tiempo_total = time.perf_counter() - tiempo_inicio

    print("\n" + "=" * 70)

    if contraseña_encontrada:

        print("CONTRASEÑA ENCONTRADA")
        print(
            f"Contraseña: "
            f"{contraseña_encontrada}"
        )

    else:

        print("RANGO COMPLETADO SIN ÉXITO")

    print(
        f"Tiempo: "
        f"{tiempo_total:.2f} segundos"
    )

    if tiempo_total > 0:

        print(
            f"Velocidad media: "
            f"{intentos / tiempo_total:,.0f} intentos/s"
        )

    print("=" * 70)

    return contraseña_encontrada


def main():

    print("=" * 70)
    print("     BÚSQUEDA NUMÉRICA DE CONTRASEÑA PDF")
    print("=" * 70)

    # Comprobar PDF
    reader = PdfReader(ARCHIVO)

    if not reader.is_encrypted:

        print("[ERROR] El PDF no está cifrado.")
        return

    print("[OK] PDF cifrado detectado.")

    # ---------------------------------------------------------
    # 1. Siete dígitos comenzando desde 0000000
    # ---------------------------------------------------------

    print("\n>>> BLOQUE 1: 7 DÍGITOS")

    contraseña = ejecutar_busqueda(
        inicio=0,
        fin=1_000_000,
        digitos=7,
    )

    if contraseña:
        return

    # ---------------------------------------------------------
    # 2. Seis dígitos
    # ---------------------------------------------------------

    print("\n>>> BLOQUE 2: 6 DÍGITOS")

    contraseña = ejecutar_busqueda(
        inicio=0,
        fin=1_000_000,
        digitos=6,
    )

    if contraseña:
        return

    # ---------------------------------------------------------
    # 3. Cinco dígitos
    # ---------------------------------------------------------

    print("\n>>> BLOQUE 3: 5 DÍGITOS")

    contraseña = ejecutar_busqueda(
        inicio=0,
        fin=100_000,
        digitos=5,
    )

    if contraseña:
        return

    print("\n" + "=" * 70)
    print("NO SE ENCONTRÓ LA CONTRASEÑA")
    print("=" * 70)


if __name__ == "__main__":
    main()