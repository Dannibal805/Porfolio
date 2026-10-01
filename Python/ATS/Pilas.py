# Pilas las  el ultimo elemento que entra es el que sale

pila = [1, 2, 4]

#Agregando elementos por el final

pila.append(4)
pila.append(5)

# sacando elemntos por el final

n= pila.pop()   # "saca" el ultimo elemento de la pila  para poderlo usar en otra acción
print(f"Sacando el elemnto {n}")

print(pila)