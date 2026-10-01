#include<iostream> 
#include<conio.h.>
using namespace std;
int main()
{
    float n,y,i,x;
    x=0;
    cout<<"Dame el valor  de n:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        y=1/i;
        x=x+y;
        }
        cout<<"El valor de x es:"<<x<<endl;
        getch();
        return 0;
}
