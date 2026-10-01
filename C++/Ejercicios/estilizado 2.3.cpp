#include<conio.h>
#include<iostream.h>
int main()
{
    float compra,compracondeskuento;
    cout<<"cual es el monto de la compra";
    cin>>compra;
    if (compra>2500)
    {
    compracondeskuento=compra*.92;
    cout<<"la compra con descuento es:"<<compracondeskuento;
    }
    else
    cout<<"no hay descuento";
    getch ();
    return 0;
}
    
