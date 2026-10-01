#simular un cajero automatico que simule 4 opciones  y tenga un saldo inicial de 1000

saldo = 1000

print("\t. :MENU:.")
print("1. Ingresar dinero en la cuenta")
print("2. Retirar el dinero de la cuenta")
print("3. Mostrar dinero disponible")
print("4. Salir ")


opcion = int(input("Digite una opcion de menu"))
print()

if opcion==1:
    extra = float(input("Cuanto dinero desea ingresar -> "))
    saldo += extra
    print(f"Su saldo actual es de {saldo}")
elif opcion == 2:
    retirar =float(input("Cuanto dinero desea retirar -> "))
    if retirar > saldo:
        print("No cuenta con el saldo suficiente para retirar esa cantidad")
    else:
        saldo -= retirar
        print(f"Su saldo actual es:  {saldo}")

elif opcion == 3:
    mostrar = saldo
    print(f" Su saldo disponible es de: {saldo}")
elif opcion == 4:
    print("Espere mientras su tarjeta es retirada...")
else:
    print("Error en teclear opciónes, favor de volver a intentar")


