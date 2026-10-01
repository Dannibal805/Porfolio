#Bucle for

colect = {"Dani":28,"Alex":32,"Mari":25}

for i in [1,2,3,4,"MEMO"]:      # este funciona con interacciones  y estas se pueden  usar con diferentes datos   puede ser con tuplas, diccionarios colecciones
    print(f"Elemento : {i}")

for i in colect:
    print(f"{i} -> {colect[i]}")

for clave,valor in colect.items():
    print(f"{clave}  -> {valor}")