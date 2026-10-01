#include<iostream.h>
#include<conio.h>
int main()
{
    int opcion, minutos;
    float costo;
     cout<<"Dame el numero de minutos:";
     cin>>minutos;
     cout<<"Dame la region en base ala sig tabla:"<<endl;
     cout<<"1._Region centro"<<endl;
     cout<<"2._Region norte"<<endl;
     cout<<"3._Region sur"<<endl;
     cout<<"4._Region orinte"<<endl;
     cout<<"Cualquier numero._Resto del pais"<<endl;
     cin>>opcion;
     switch(opcion)
     {
                   case 1:
                         costo=minutos*1.5;
                         break;
                   case 2:
                         costo=minutos*2.5;
                         break;
                   case 3:
                        costo=minutos*2;
                        break;
                   case 4:
                        costo=minutos*2.5;
                        break;
                   default:
                           costo=minutos*3;
                           break;
      }
     cout<<"El costo de la llamada es:" <<costo;
     getch();
     return 0;
 }
                         
