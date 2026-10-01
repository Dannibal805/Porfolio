Cadena = "Hola Mundo"

for c in Cadena:   # c nombre de la variable que tome cada caracter
      print (c)

print(Cadena.startswith("Sol"))

#.isdigit si todos son numeros
#isalpha  si todos son letras

print(Cadena.strip() )

frutas = "Durazno, Manzana, Melon"
lista= (frutas.split(","))

#split es como poner el identificador

Cadena1= "-".join(lista)
print(Cadena1)


