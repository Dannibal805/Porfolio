#haga un programa que  indique si es vocal o no

v1 = input("Digite un caracter: ")
v2 = v1.lower()


if v2 == 'a'  or v2 =='e' or v2 =='i' or v2 =='u' or v2 == 'o':  # sustituiría a la estructura switch
               print("Es una vocal ")
else:
    print("No es una vocal ")