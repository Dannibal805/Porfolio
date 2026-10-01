#include<iostream.h>
#include<conio.h>
int main()
{
    int s,s1,s2;
    cout<<"¿Cual es el sueldo?:";
    cin>>s;
              if (s>1000)
              {
              s1=s*1.12;
              cout<<"El sueldo es:"<<s1;
              }
              else
              s2=s*1.15;
              cout<<"El sueldo es:"<<s2;
              getch ();
              return 0;
}
              
