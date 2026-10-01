#include<iostream> 
#include<conio.h.>
using namespace std;
int main()
{
    float num,i,neg,pos;
    pos=0;
    neg=0;
    cout<<"Dame el valor  del numero : ";
    cin>>num;
    for (i=1;i<=10;i++)
    {
        if (num>=0)
        {
                   pos=pos+1;
                   }
                   else{
                   neg=neg+1;
                   
                   }
                   }
                   cout<<"los numeros positivos  y los numeros negativos son : ";
                   getch ();
                   return 0;
                   }
        
