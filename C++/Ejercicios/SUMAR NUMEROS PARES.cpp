#include <iostream.h>
#include <conio.h>
using namespace std;
int main() 
{
    int n, i, suma;
    cout<<"Dame el limite de numeros:";
    cin>>n;
    i=2;
    suma=0;
    while (i<=n)
    {
          suma+=i; // suma=suma+i
          i+=2; // i=i+2
    }
    cout<<"La suma de pares de 2 a: "<<n<<" es:"<<suma<<endl;
    getch();
    return 0;
}
