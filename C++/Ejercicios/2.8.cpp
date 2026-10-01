#include<iostream.h>
#include<conio.h>
int main()
{
    char num1,num2;
    double D,D2;
    cout<<"¿Cual es el numero 1?:";
    cin>>num1;
    cout<<"¿Cual es el numero 2?:";
    cin>>num2;
    D=num1%num2;
    D2=num2%num1;
              if ((D = 0) && (D2 = 0) )
              {
              cout<<"EL NUMERO 1 ES DIVISOR DEL NUMERO 2"<<endl;
              }
                else{
                     cout<<"LOS NUMEROS NO SON DIVISORES UNO DEL OTRO"<<endl;
                     }  
              getch ();
              return 0;
              }
              

