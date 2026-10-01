#include<iostream.h>
#include<conio.h>
int main()
{
    int dist,tiem;
    float cost,cost1;
    cout<<"¿Cual es la distancia?:";
    cin>>dist;
    cout<<"¿Cual es el tiempo?:";
    cin>>tiem;
              cost=(dist*2)*0.17;
              if (dist > 800 && tiem >7)
              {
                       cost1=cost*0.7;
                       cout<<"El costo es:"<<cost1;
              }
               else {
              cout<<"costo "<<cost;
              }
              getch ();
              return 0;
}
