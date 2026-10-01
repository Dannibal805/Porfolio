from multiprocessing import Process, Queue, Event
from pypdf import PdfReader
import time
import os

ARCHIVO = r"E:\Python\ATS\protegido.pdf"

INICIO = 1_000_000
FIN = 10_000_000
NUM_PROCESOS = 4

TOTAL = FIN - INICIO


def buscar(rango_inicio, rango_fin, proceso_id, resultados, detener):
    """Busca contraseñas dentro de un rango asignado."""

    try:
        reader = PdfReader(ARCHIVO)

        for numero in range(rango_inicio, rango_fin):

            if detener.is_set():
                return

            password = str(numero)

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

            # Enviar progreso cada 10,000 intentos
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


def main():

    print("=" * 70)
    print("           BUSCADOR DE CONTRASEÑA PDF")
    print("=" * 70)

    print(f"Archivo: {ARCHIVO}")
    print(f"Rango: {INICIO} - {FIN - 1}")
    print(f"Total de candidatos: {TOTAL:,}")
    print(f"Procesos: {NUM_PROCESOS}")
    print(f"CPU lógica disponible: {os.cpu_count()}")
    print("=" * 70)

    print("\n[1/4] Cargando configuración...")

    # Comprobación inicial
    reader = PdfReader(ARCHIVO)

    if not reader.is_encrypted:
        print("[ERROR] El PDF no está cifrado.")
        return

    print("[OK] PDF cifrado detectado.")

    # Dividir el rango entre procesos
    tamaño = TOTAL // NUM_PROCESOS

    rangos = []

    for i in range(NUM_PROCESOS):

        inicio_proceso = INICIO + (i * tamaño)

        if i == NUM_PROCESOS - 1:
            fin_proceso = FIN
        else:
            fin_proceso = inicio_proceso + tamaño

        rangos.append((inicio_proceso, fin_proceso))

    print("\n[2/4] Rangos asignados:")

    for i, (inicio, fin) in enumerate(rangos, start=1):
        cantidad = fin - inicio
        print(
            f"  Proceso {i}: "
            f"{inicio:,} - {fin - 1:,} "
            f"({cantidad:,} candidatos)"
        )

    resultados = Queue()
    detener = Event()

    procesos = []

    print("\n[3/4] Iniciando procesos...\n")

    tiempo_inicio = time.perf_counter()

    for i, (inicio, fin) in enumerate(rangos, start=1):

        proceso = Process(
            target=buscar,
            args=(
                inicio,
                fin,
                i,
                resultados,
                detener,
            ),
        )

        proceso.start()
        procesos.append(proceso)

    # Variables de progreso
    intentos = 0
    procesos_terminados = 0
    contraseña_encontrada = None

    ultimo_tiempo = tiempo_inicio

    print("[4/4] Búsqueda en progreso...\n")

    try:

        while procesos_terminados < NUM_PROCESOS:

            mensaje = resultados.get()

            tipo = mensaje["tipo"]

            # -----------------------------------------
            # PROGRESO
            # -----------------------------------------

            if tipo == "progreso":

                intentos += mensaje["cantidad"]

                ahora = time.perf_counter()
                transcurrido = ahora - tiempo_inicio

                velocidad = intentos / transcurrido if transcurrido > 0 else 0

                restantes = TOTAL - intentos

                if velocidad > 0:
                    segundos_restantes = restantes / velocidad
                else:
                    segundos_restantes = 0

                horas = int(segundos_restantes // 3600)
                minutos = int((segundos_restantes % 3600) // 60)
                segundos = int(segundos_restantes % 60)

                porcentaje = (intentos / TOTAL) * 100

                print(
                    f"[PROGRESO] "
                    f"{intentos:,}/{TOTAL:,} "
                    f"({porcentaje:.2f}%) | "
                    f"Proceso {mensaje['proceso']} | "
                    f"Último: {mensaje['ultimo']} | "
                    f"{velocidad:,.0f} intentos/s | "
                    f"Restante aprox.: "
                    f"{horas}h {minutos}m {segundos}s",
                    flush=True
                )

            # -----------------------------------------
            # CONTRASEÑA ENCONTRADA
            # -----------------------------------------

            elif tipo == "encontrada":

                contraseña_encontrada = mensaje["password"]

                detener.set()

                transcurrido = time.perf_counter() - tiempo_inicio

                print("\n")
                print("=" * 70)
                print("          *** CONTRASEÑA ENCONTRADA ***")
                print("=" * 70)
                print(f"Contraseña : {contraseña_encontrada}")
                print(f"Proceso    : {mensaje['proceso']}")
                print(f"Número     : {mensaje['numero']}")
                print(f"Tiempo     : {transcurrido:.2f} segundos")

                if transcurrido > 0:
                    print(
                        f"Velocidad  : "
                        f"{intentos / transcurrido:,.0f} intentos/s"
                    )

                print("=" * 70)

                break

            # -----------------------------------------
            # PROCESO TERMINADO
            # -----------------------------------------

            elif tipo == "terminado":

                procesos_terminados += 1

                print(
                    f"[PROCESO {mensaje['proceso']}] "
                    f"Rango terminado.",
                    flush=True
                )

            # -----------------------------------------
            # ERROR
            # -----------------------------------------

            elif tipo == "error":

                print(
                    f"[ERROR] "
                    f"Proceso {mensaje['proceso']}: "
                    f"{mensaje['error']}",
                    flush=True
                )

    except KeyboardInterrupt:

        print("\n\n[!] Búsqueda cancelada por el usuario.")

        detener.set()

    finally:

        detener.set()

        print("\n[INFO] Esperando cierre de procesos...")

        for proceso in procesos:
            proceso.join()

    # -----------------------------------------
    # RESULTADO FINAL
    # -----------------------------------------

    tiempo_total = time.perf_counter() - tiempo_inicio

    print("\n" + "=" * 70)

    if contraseña_encontrada:

        print("BÚSQUEDA FINALIZADA")
        print(f"Contraseña encontrada: {contraseña_encontrada}")

    else:

        print("NO SE ENCONTRÓ LA CONTRASEÑA")
        print(f"Rango completado: {INICIO} - {FIN - 1}")

    print(f"Tiempo total: {tiempo_total:.2f} segundos")

    if tiempo_total > 0:
        print(
            f"Velocidad media aproximada: "
            f"{intentos / tiempo_total:,.0f} intentos/s"
        )

    print("=" * 70)


if __name__ == "__main__":
    main()