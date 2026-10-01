'''
Escriba un programa donde tenga una lista  y que a continuación, elimine los elementos
repetidos, por último mostrar la lista

'''


l = [1,2,3,"Daniel",2,2,1,"Daniel",4,3,1]

# que coleccion no podemos repetir los elemntos ?  conjunto

conj  =   set(l)
l = list(conj)   # ahora se pasa como si fuera un conjunto  recordar que los conjuntos son desordenados
print(l)  # modo simplificado l = list(set(l))

# los conjuntos no pueden tener datos repetidos
