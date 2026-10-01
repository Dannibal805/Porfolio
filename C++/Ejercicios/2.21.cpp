#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    double monto,descuento,dinero1,dinero2,dinero3,dinero4;
    int categoria;
    cout<<"categorias"<<endl;
    cout<<"1._categoria1"<<endl;
    cout<<"2._categoria2"<<endl;
    cout<<"3._categoria3"<<endl;
    cout<<"4._categoria4"<<endl;
cout<<"Elige una opcion:";
    cin>>categoria;
    cout<<"cual es el monto:";
    cin>>monto;
    dinero1=monto*0.65;
    dinero2=monto*0.78;
    dinero3=monto*0.85;
    dinero4=monto*0.95;
              
              switch (categoria)
              {
              case 1:
                   cout<<"el descuento es :"<<dinero1;
                   break;
              case 2:
                   cout<<"el descuento es :"<<dinero2;
                   break;
              case 3:
                    cout<<"el descuento es :"<<dinero3;
                    break;
              case 4:
                   cout<<"el descuento es :"<<dinero4;
                   break;           
              }
              getch ();
              return 0;
}
              
              
    
 
