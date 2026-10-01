#include<iostream.h>
#include<conio.h>
int main()
{
    int a,b,c,d,x1,x2;
    cout<<"Dame el valor de a";
    cin>>a;
    cout<<"Dame el valor de b";
    cin>>b;
    cout<<"Dame el valor de c";
    cin>>c;
    cout<<"Dame el valor de d";
    cin>>d; 
    if (d !=0)
    {
           x1=(a-c)*(a-c)/d;
           x2=(a-b)*(a-b)*(a-b)/d;
             cout<<"El valor uno es : "<<x1<<endl;
             cout<<"E valor 2 es : "<<x2<<endl;
             }
             else 
             cout<<"no se puede dividir";
             getch ();
             return 0;
             }
             
