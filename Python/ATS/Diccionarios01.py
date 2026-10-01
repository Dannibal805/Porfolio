# Diccionarios


equipo = {10:"Dybala",11:"Douglas costa",7:"Cristiano Ronaldo",17:"Mario Mandzukic"}

print(equipo.get(6,"No existe un jugador con ese número"))    # muestrame la clave 7 = a clave o tambien llamadas keys
# con get  se hace la opción de default y aunque no exista se aclara

print(12 in equipo)
equipo.keys()
print(equipo.values())  # pueden ser values  o keys o items  (Tuplas)
print(len(equipo))
equipo.clear()
print(equipo)