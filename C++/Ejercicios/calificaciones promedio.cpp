#include<iostream.h>
#include<conio.h>
int main ()
{
    int cal1,cal2,cal3;
    float Prom;
    cout<<"Dame la calificacion 1:";
    cin>>cal1;
    cout<<"Dame la calificacion 2:";
    cin>>cal2;
    cout<<"Dame la calificacion 3:";
    cin>>cal3;
    Prom=(cal1+cal2+cal3)/3;
    cout<<"El promedio del alumno es:"<<Prom;
    getch();
    return 0;
}
