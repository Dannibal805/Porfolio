import numpy as np
lista = [25,12,15,66,12.5]
vector = np.array(lista)
print(vector)

print("- sumarle 1 a cada elemeto del vector: ")
print(vector+1)

print("- multiplicar por un escalar a cada elemeto del vector: ")
print(vector*3)


print("- suma de elementos: ")
print(np.sum(vector))


print("- promedio (media): ")
print(np.mean(vector))


print("- El vetor sumado a si mismo: ")
print(vector+vector)

print("- suma de vectores vector1 y vector2 (mismo tamaño):")
vector2=np.array([11,55,1.2,7.4,-8])
print(vector+vector2)

print("- crea un array desde 0 hasta 20 en incrementos de 2):")
array_par= np.arange(0,20,2)
print(array_par)