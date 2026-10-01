

v1 = int(input("Digita un numero: "))
v2 = 0

if v1 < 1:
    print("Introduce números mayores a 0")
else:
    for i in range(1, v1 + 1):
        v2 = v2 + i

    print("La suma es:", v2)