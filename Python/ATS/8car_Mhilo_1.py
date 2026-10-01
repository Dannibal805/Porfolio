import multiprocessing
import time

from pypdf import PdfReader


PDF_PATH = r"E:\Python\ATS\protegido.pdf"

START = 10_000_000
END = 39_999_999
NUM_PROCESSES = 4


def buscar_rango(inicio, fin, resultado_compartido):

    reader = PdfReader(PDF_PATH)

    nombre = multiprocessing.current_process().name

    print(
        f"{nombre}: {inicio:,} -> {fin:,}",
        flush=True
    )

    for numero in range(inicio, fin + 1):

        password = str(numero)

        try:
            estado = reader.decrypt(password)

            if estado:

                print(
                    f"\n*** CONTRASEÑA ENCONTRADA: {password} ***",
                    flush=True
                )

                resultado_compartido.value = password
                return

        except Exception:
            pass

    print(
        f"{nombre}: rango terminado.",
        flush=True
    )


if __name__ == "__main__":

    inicio_tiempo = time.time()

    total = END - START + 1
    bloque = total // NUM_PROCESSES

    manager = multiprocessing.Manager()

    resultado = manager.Namespace()
    resultado.value = None

    procesos = []

    for i in range(NUM_PROCESSES):

        inicio = START + i * bloque

        if i == NUM_PROCESSES - 1:
            fin = END
        else:
            fin = inicio + bloque - 1

        proceso = multiprocessing.Process(
            target=buscar_rango,
            args=(inicio, fin, resultado),
            name=f"P{i + 1}"
        )

        procesos.append(proceso)
        proceso.start()

    while True:

        if resultado.value is not None:

            print(
                f"\n*** CONTRASEÑA ENCONTRADA: "
                f"{resultado.value} ***"
            )

            for proceso in procesos:
                if proceso.is_alive():
                    proceso.terminate()

            break

        if not any(proceso.is_alive() for proceso in procesos):

            print(
                "\nNo se encontró ninguna contraseña "
                "en el rango 10,000,000 - 39,999,999."
            )

            break

        time.sleep(0.5)

    for proceso in procesos:
        proceso.join()

    tiempo_total = time.time() - inicio_tiempo

    print(f"\nTiempo total: {tiempo_total:.2f} segundos")
    print(f"Tiempo total: {tiempo_total / 3600:.2f} horas")