oper =str (input("Indique operación con s,r,m,d: ")).lower()


if oper =='s' or oper == 'r' or oper=='m' or oper == 'd':
   n2 = int(input("Digite un numero : "))
   n3 = int(input("Digite otro numero: "))
   n =0
   if oper == 's':
       n = n2+n3
   elif oper == 'r':
       n = n2 - n3
   elif oper == 'm':
       n = n2 * n3
   elif oper == 'd':
       n = n2 / n3
   print(f"El resultado es {n}")

else:
    print("Se equivoco de operación")


