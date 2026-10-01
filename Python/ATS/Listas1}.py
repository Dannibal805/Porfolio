#Listas  o tambien conocido vectores

lista = ["Lunes","Martes", "Miercoles","Jueves",40,5.67,[1,2,3],True]

# estas listas son modulares  y puden incluir diferentes tipos de datos
lista1=[1,2,3,4,5]

print(lista[0])   # este puede ser orden progresivo hacia adelante o hacia atras
print(lista[0:4])  #  o :4 desde el inicio  o desde el inicio  0:     hasta el final
print(lista[3:])
#len para determinar numero de lementos
print(len(lista))

lista.append(6)   # agregar elementos al final
lista1.insert(2,35)   # agregar cualquier elemento
print(lista1)
lista1.extend([6,3,6,9])
print(lista1)
print(3 in lista1)   # regresa un valor boleano
print(lista1.index(5))   #regresa la posicion del valor
print(lista1.count(3))   # cuantas veces aparece el 3
print(lista.pop(3))   # quita elementos  de acuerdo a un indice
print(lista)
lista1.remove((5))
print(lista1)
# para limpiar una lista se usa clear
lista2= [5,4,-3,-2,-7,0,1,3]
lista2.sort()  # ordena las listas  de manera ascendente  y desente dentro de sort(reverse=True)
print(lista2)
 #lista3= lista2.sort(reverse=True)   # ver como ordenar
#print(lista3)


