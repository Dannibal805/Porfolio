#Tuplas  estas no se pueden modificar  o agregar más valores menos memoria que
# las listas, y son más rapidas que las listas

tupla = (4,3,8,"H",6.98,["a","m","L"],5)
print(tupla)  # mostrar las posiciones como vectores claro que se puede hacer
# todo tipo de busqueda también se puede
print(tupla.index("H"))

# se puede convertir tupla a lista
lista =  list(tupla)
print(lista)
# o viceversa


variable = [1,5,9]
tupla = tuple(variable)
print(type(tupla))