#include<iostream> 
#include<conio.h.>
using namespace std;
int main()
{
    int n,xsuef,i;
    float SUE,y;       
         for (i=0;i<=n;i++)
         {
         cout<<"Introduce el numero del empleado:";
         cin>>n;
         cout<<"Introduce el sueldo:";
         cin>>SUE;
                 if (SUE<800)
                 {
                             y=SUE*1.5;
                             }
                             else
                             {
                                 cout<<"El sueldo es:"<<SUE<<endl;
                                 }
                                 cout<<"El sueldo final es:"<<y<<endl;                             
                                 }
                                 getch();
                                 return 0;
}
                                 
