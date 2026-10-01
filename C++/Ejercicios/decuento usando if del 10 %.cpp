#include<iostream.h>
#include<conio.h>
int main()
{
    int cantidad;
    float precio, importe;
    cout<<"dame la cantida de articulos:";
    cin>>cantidad;
    cout<<"dame el precio del articulo:";
    cin>>precio;
    importe= cantidad*precio;
    if (cantidad>=5)
         importe=importe*0.9;
    cout<<"el importe de la venta es :"<<importe;
    getch();
    return 0;
}     
