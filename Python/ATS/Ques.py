#Ques  o colas     son de tipo FIFO

cola = ["Fer","Alex","Mario"]

# otra manera es de from collections import deque se agregan elementos de  append  y se sacan con el pop
#Agregamos elementos al final de la cola

cola.append("Karla")
cola.append("Flor")

print(cola)

#Sacando elemntoos por el principio de la cola

n = cola.pop(0)
print(f"Atendiendo a {n}")
print(f"En espera  {cola}")

# se puede meter un while hasta