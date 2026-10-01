

class Coche:
    def __init__(self, *args):
        print(args)
        self.modelo = args[0]
        self.velocidad = args[1]
        self.aceleracion = args[2]

audi_R8 = Coche("Audi R8", 250, 15)
bmw_m2 = Coche("BMW M2", 300, 12)
ferrari = Coche("Ferrari F150", 380, 22)

Coches = (audi_R8, bmw_m2,ferrari)
for Coche in Coches:
    print(f"El coche {Coche.modelo} tiene una velocidad max de {Coche.velocidad} y aceleracion  max de {Coche.aceleracion}")