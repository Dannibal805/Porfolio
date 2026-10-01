#include<iostream.h>
#include<conio.h>
int main()
{
    int sueldo;
    float sueldo1,sueldo2,sueldo3;
    cout<<"Cual es el sueldo:";
    cin>>sueldo;
              if (sueldo < 10000 )
              {
              sueldo1=sueldo*1.15;
              cout<<"El sueldo es:"<<sueldo1<<endl;
              }
              else{
              if (10000 >= sueldo ||  sueldo<= 15000)
              {
              sueldo2=sueldo*1.11;
              cout<<"El sueldo es:"<<sueldo2;
              }
              else{
              sueldo3=sueldo*1.08;
              cout<<"El sueldo es:"<<sueldo3;
              }
              }
              getch ();
              return 0;
}
