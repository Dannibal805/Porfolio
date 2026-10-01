#include<iostream.h>
#include<conio.h>
int main()
{
    int compra;
    float compra1;
    cout<<"¿Cual es la compra?:";
    cin>>compra;
              if (compra>2600)
              {
              compra1=compra*.92;
              cout<<"La compra es:"<<compra1;
              }
              else
              cout<<"ERROR";
              getch ();
              return 0;
}
