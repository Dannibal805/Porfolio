from datetime import datetime
import time

mem = datetime.now()
verde = "\33[1;32m"
amarillo = "\33[1;33m"
azul = "\33[1;36m"
magenta = "\33[1;35m"
gris = "\33[0;37m"
blanco = "\33[1;37m"
rojo = "\33[1;31m"


def mostrar_hora(color):
    for n in range(100):
        hora = datetime.now().strftime("%H:%M%S.%f")
        print(f'{color}#{n}: {hora}{gris}')
        time.sleep(0.01)

    if __name__ == '__main__':
        mem = datetime.now()
        mostrar_hora(verde)
        mostrar_hora(amarillo)
        mostrar_hora(azul)
        mostrar_hora(magenta)
        mostrar_hora(gris)
        mostrar_hora(blanco)
        mostrar_hora(rojo)


print(f'\n')

print(f'Finalizado en {(datetime.now() - mem).total_seconds()}segundos')


# codigo incompleto
