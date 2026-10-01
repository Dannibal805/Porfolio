#include<iostream> 
#include<conio.h.>
using namespace std;
int main()
{
    int n,num,i,par,impar,mod;
    par=0;
    impar=0;
    cout<<"Dame el valor  de n:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        mod=num%2;
        }
        if (mod=0)
        {
                  par=par+1;
                  cout<<"Entonces:"<<par<<"es: PAR";
                  }
                  else
                  {
                      impar=impar+1;
                      cout<<"Entonces:"<<par<<"es: IMPAR";
                      }
        getch();
        return 0;
}
