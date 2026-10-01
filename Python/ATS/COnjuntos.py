#conjuntos la caracteristica unica es que no puede tener conjuntos
# a diferencia de otras colecciones o programas  los conjuntos  y diccionarios tienen las llaves
# si no se indica set este sería un diccionario
# estos se ordenan de menos a mayor y en orden alfabetico   y no puede haber conjuntos duplicados

conjunto = set()

conjunto= {4,3,2.23,"J","A"}   # pero si desde un inicio es directamente 
conjunto.add(8)   # se agrega a donde el lo quiera
conjunto.add("Manuel")
conjunto.discard(2.23)  # elimina como tal el valor
print(conjunto)
print(5 not in conjunto)  # se puede buscar si