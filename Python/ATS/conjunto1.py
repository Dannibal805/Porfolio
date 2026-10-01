# más operaciones de conjuntos como estadistica

# ya no hay necesidad de arrelgar esto con set al inicializarlo
a = frozenset({1,2,5})   #  conjunto inmutable
b = {2,8,6}
h= {1,2,5,8,6}

c = a | b  # es como si fuera una suma de conjuntos  U de union
d = a & b  # intersección de los conjuntos   por valores juntos de 2
e = a -b     # la diferencia elementos de a que no estan en b
f = a ^ b    # la diferencia simetrica  obtiene los elemntos que no estan en a y b en intersección

print(d)
print(b.issubset(h))  # subconjunto
print(h.issuperset(a)) # es un superconjunto d?
print(a.isdisjoint(b))    # no comparten ningun elemento ?

# entonces si se es posible tener operaciones de esta indole como estadisticos por así decir
# se puede realizar machine learning
