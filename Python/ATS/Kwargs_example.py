
def presentar_persona(**kwargs):
                     #print(kwargs)
        nombre = kwargs['nombre']
        edad = kwargs['edad']
        ciudad = kwargs['ciudad']
        print(f"Hola me llamo  {nombre}, tengo {edad} años y vivo en la {ciudad}.")

presentar_persona(nombre= "Daniel",edad= "32", ciudad = "Pachuca" )


