#include<iostream> 
#include<conio.h.>
using namespace std;
int main()
{
    int n,a,b,c,d,i;
    a=0;
    b=0;
    c=0;
    d=0;
    for (i=1;n/=-1;i++)
    {
            cout<<"Calificacion:";
            cin>>n;
        if (n>0 and n<4)
        {
                    a=a+1;
                     cout<<"Las calificaciones en el rango a:"<<a<<endl;
                    }
                    else
                        if (n>4 and n<6)
                        {                                  
                                  b=b+1;
                                   cout<<"Las calificaciones en el rango b:"<<b<<endl;
                                  }
                                  else
                                      if (n>6 and n<8)
                                      {
                                                c=c+1;
                                                 cout<<"Las calificaciones en el rango c:"<<c<<endl;
                                                }
                                                else
                                                if (n>8 and n<10)
                                                {
                                                    d=d+1;
                                                    cout<<"Las calificaciones en el rango d:"<<d<<endl; 
         }                                
         }
        getch();
        return 0;
}
