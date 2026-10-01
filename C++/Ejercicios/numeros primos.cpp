#include<iostream.h>
#include<conio.h>
int main()
{
    int n,i,primo=1;
    cout<<"Dame el numero entero:";
    cin>>n;
    for(i=2;i<n;i++)
    {
                    if(n%i==0)
                    {
                            primo=0;
                            break;
                            }
                            }
                            if(primo==1)
                                 cout<<"El numero"<<n<<"es primo"<<endl;
                                 else
                                 cout<<"El numero"<<n<<"no es primo"<<endl;
                                 getch ();  
                                 return 0;
                                 }
                                 
