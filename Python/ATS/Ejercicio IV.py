# Ejercicio IV  ingresar radio y reportar su área y la longitud de la circunferencia

import math
r =   float(input("  Radio es   ->    "))


area = math.pi  *(r**2)
l =   math.pi*2*r

print(f" El área es de {area: .3f}")
print(f"  La longitud  es de la circunferencia es de {l:.3f}")

