class productos:
    pre: object
    nom: object
    des: object

    def __init__(self, nombre, descripcion, precio): # constructor
        self. nom= nombre
        self.des= descripcion
        self.pre = precio
        pass



     #def __str__(self):
     #return self.nom


    def calcular_descuento(self):
           if int (self.pre) > 200 and self.pre < 800:
               desc = 20
           elif int(self.pre) >= 801 and self.pre <= 1500:
                desc = 25 
           else :
             desc= 15
           return desc


Lista_prov = ['Hiraoka', 'OPPO','Samsumg']
p1= productos("Microfono","Condensado marca LG",700)
p2= productos("Estereo ","OPPO",200)
p3 = micro= productos("Guitarra","Samsumg",1550)


print(p1.__dict__)
print(p2.calcular_descuento())