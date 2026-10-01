#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,n;
    float r1,r2;
    cout<<"Dame el valor de n";
    cin>>n;
    cout<<"Dame el valor de a ";
    cin>>a;
    r1=pow(a,-n);
    r2= 1/pow(a,n);
    if (a != 0)
    {
            cout<<"Numero invalido a 0"<<endl;
            }
            else{
                 if (r1=r2)
                 {
                           cout<<"la ecuacion es valida"<<endl;
                           }
                           else {
                                cout<<"la ecuacion es invalida"<<endl;
                                }
                                
                                             getch ();
              return 0;
}
              }
                 
