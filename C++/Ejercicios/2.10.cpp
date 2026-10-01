#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,n,b;
    float r1,r2;
    cout<<"Dame el valor de n";
    cin>>n;
    cout<<"Dame el valor de a ";
    cin>>a;
        cout<<"Dame el valor de b ";
    cin>>b;
    r1=pow((a/b),n);
    r2= pow(a,n)/pow((1/b),n);
    if (b=0)
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
                                }
                                
                                             getch ();
              return 0;
}

                 
