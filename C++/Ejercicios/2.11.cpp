#include<iostream.h>
#include<conio.h>
int main()
{
    int y,x;
    cout<<"Cual es el valor de y:";
    cin>>y;
              if (y<=0)
              {
              cout<<"ERROR";
              }
              else{
              if (y<=11)
              {
              x=3*y+36;
              cout<<"El valor de x es :"<<x;
              }
              else{
              if (y>11 && y<=33)
              {
              x=y*y-10;
              cout<<"El valor de x es :"<<x;
              }
              else{
              if (y>=34 && y<=64)
              {
                       x=(y*y*y)+(y*y)-(1);
                       cout<<"El valor de x es:"<<x;
                       }
              else{
              if (y>64)
                       {
                                x=y*0;
                               cout<<"El valor de x es :"<<x;
                               }
                               }
                               }
                               }
                               }
              getch ();
              return 0;
}
