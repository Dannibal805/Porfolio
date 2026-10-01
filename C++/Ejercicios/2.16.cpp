#include<iostream.h>
#include<conio.h>
int main()
{
    double precio,vf1,vf2,vf3,vf4;
    int modelo;
    cout<<"modelos"<<endl;
    cout<<"1._cutlas"<<endl;
    cout<<"2._cavalier"<<endl;
    cout<<"3._chevy"<<endl;
    cout<<"4._century"<<endl;
    cout<<"elige una opcion:";
    cin>>modelo;
    cout<<"cual es el precio del auto";
    cin>>precio;
    vf1=precio*0.92;
    vf2=precio*0.95;
    vf3=precio*0.94;
    vf4=precio*0.91;
              switch (modelo)
              {
              case 1:
                   cout<<"el precio del modelo cutlas es:"<<vf1;
                   break;
                   case 2:
                   cout<<"el precio del modelo cavalier es :"<<vf2;
                   break;
                   case 3:
                   cout<<"el precio  del modelo chevy es:"<<vf3;
                   break;
                   case 4:
                   cout<<"el precio del modelo century es :"<<vf4;
                   break;
              }
              getch ();
              return 0;
}
              
