#include<iostream.h>
#include<conio.h>
int main()
{
    int temp;
    cout<<"Cual es el valor de la temperatura:";
    cin>>temp;
              if (temp>85)
              {
              cout<<"NATACION";
              }
              else
              if (temp>70)
              {
              cout<<"TENNIS";
              }
              else 
              if (temp>32)
              {
                          cout<<"GOLF";
                          }
              else 
              if (temp>10)
              {
                          cout<<"ESQUI";
                          }
                          else 
                          cout<<"MARCHA";
              getch ();
              return 0;
}
