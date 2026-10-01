'''
Ejercicio 2

Escriba un programa que tenga dos listas y que, a continuación, cree las siguientes listas
(En las que no debe haber repeticiones)

- Lista de elementos que aparecen en las dos listas
- Lista de elementos que aparecen en la lista uno, pero no en la segunda
- Lista de elementos que aparecen en la segunda lista, pero no en la primera
- Lista de elementos que aparecen en ambas listas


'''

lista1 = [1,2,3,4,5,4,3,8,9,15,5]
lista2 = [3,6,9,8,7,6,10,5,15,3,3]

# Eliminar elementos repetidos de ambas listas

a = set(lista2)
b = set(lista1)

union =  list(a | b)    # ambas listas
sa    = list(a - b)       #  No aparece en la lista uno pero en la dos si
sb   =  list(b- a)       # No aparece enn la lista   B  pero si en la A
Us  =  list(a & b)      #  Aparece en ambas listas

print(union)
print(sa)
print(sb)
print(Us)


