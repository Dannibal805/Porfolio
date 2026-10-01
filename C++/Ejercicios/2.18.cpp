#include<iostream.h>
#include<conio.h>
int main()
{
    int clave,min;
    double cost;
    cout<<"CLAVES"<<endl;
    cout<<"12"<<endl;
    cout<<"15"<<endl;
    cout<<"18"<<endl;
    cout<<"14"<<endl;
    cout<<"25"<<endl;
    cout<<"24"<<endl;
    cout<<"elige una opcion:";
    cin>>clave;
    cout<<"Cuales son los minutos:";
    cin>>min;
              switch (clave)
              {
              case 1:
                   if (min<=3)
                   {
                             cost=min*2;
                             cout<<"El costo es:"<<cost;
                             }
                             else{
                             cost=min*1.5;
                             cout<<"El costo es:"<<cost;
                             }
                   break;
                   case 2:
                        if (min<3)
                   {
                             cost=min*1.8;
                             cout<<"El costo es:"<<cost<<endl;
                             }
                             else
                             cost=min*2.2;
                             cout<<"El costo es:"<<cost<<endl;
                   break;
                   case 3:
                        if (min<3)
                   {
                             cost=min*3.5;
                             cout<<"El costo es:"<<cost<<endl;
                             }
                             else
                             cost=min*4.5;
                             cout<<"El costo es:"<<cost<<endl;
                   break;
                   case 4:
                        if (min<3)
                   {
                             cost=min*2.7;
                             cout<<"El costo es:"<<cost<<endl;
                             }
                             else
                             cost=min*3.5;
                             cout<<"El costo es:"<<cost<<endl;
                   break;
                   case 5:
                        if (min<3)
                   {
                             cost=min*4.5;
                             cout<<"El costo es:"<<cost<<endl;
                             }
                             else
                             cost=min*6;
                             cout<<"El costo es:"<<cost<<endl;
                   break;
                   case 6:
                        if (min<3)
                   {
                             cost=min*4;
                             cout<<"El costo es:"<<cost<<endl;
                             }
                             else
                             cost=min*5;
                             cout<<"El costo es:"<<cost<<endl;
                   break;
                   }
              getch ();
              return 0;
}
              
