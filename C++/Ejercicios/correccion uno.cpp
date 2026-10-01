#include<iostream.h>
#include<conio.h>
int main()
{
    float monto,descuento,monto1,monto2,monto3,monto4;
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
    monto1=monto*0.65;
    monto2=monto*0.78;
    monto3=monto*0.85;
    monto4=monto*0.95;
              switch (categoria)
              {
              case 1:
                   cout<<"el descuento es :"<<monto1;
                   break;
              case 2:
                   cout<<"el descuento es :"<<monto2;
                   break;
              case 3:
                    cout<<"el descuento es :"<<monto3;
                    break;
              case 4:
                   cout<<"el descuento es :"<<monto4;
                   break;           
              }
              getch ();
              return 0;
}
              
