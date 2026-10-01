#include<iostream.h>
#include<conio.h>
int main()
{
    int n1,n2,operacion,m1,m2,m3,m4;
    cout<<"operaciones"<<endl;
    cout<<"1._opcion1+"<<endl;
    cout<<"2._opcion2-"<<endl;
    cout<<"3._opcion3*"<<endl;
    cout<<"4._opcion4/"<<endl;
   cout<<"elige una opcion:";
    cin>>operacion;
    cout<<"cual es el valor de n1:";
    cin>>n1;
    cout<<"cual es valor de n2:";
    cin>>n2;
    m1=n1+n2;
    m2=n1-n2;
    m3=n1*n2;
    m4=n1/n2;
             switch (operacion)
             {
              case 1: 
                   cout<<"SUMAR"<<endl;
                   cout<<"El valor de la suma es:"<<m1;
                   break;
                   case 2:
                        cout<<"RESTAR"<<endl;
                        cout<<"El valor de la resta es:"<<m2;
                        break;
                        case 3:
                             cout<<"MULTIPLICAR"<<endl;
                             cout<<"El valor de la multiplicacion es:"<<m3;
                             break;
                             case 4:
                                  cout<<"DIVIDIR"<<endl;
                                  cout<<"El valor de la divicion es:"<<m4;
                                  break;
                                  }             
              getch ();
              return 0;
}
