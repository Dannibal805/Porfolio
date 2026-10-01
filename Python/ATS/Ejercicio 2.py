
num1 = int(input("Digite un numero: "))
num2 = int(input(" Digite otro numero: "))
num3 = int(input("Digite un numero: "))


if num1 > num2  and num1 > num3:
               print(f"El numero {num1} es mayor que {num2} y el {num3}")
elif num2 > num1 and num2 > num3:
      print(f" El numero {num2} es mayor que {num1} y el {num3}")
elif num3 >num2  and num3> num1:
    print(f"El numero {num3} es mayor que {num1} y el {num2}  ")
elif num1==num2 and num2==num3:
    print("Son iguales los números")
