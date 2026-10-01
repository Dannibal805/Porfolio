# ejercicio 5 una tienda ofrece un descuento del 15% sobre el total de la compra y el cliente desea saber
#cuanto pagara finalmente por su compra


import math
p =   float(input("  Precio del producto   ->    "))

desc =  p* 0.15

Pt   = p - desc

print(f"El preico final del producto es de ${Pt:.2f}")
