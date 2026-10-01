#include<iostream.h>
#include<conio.h>
int main()
{
    int A,B,C,D,S,A2;
    cout<<"Cual es el valor de A:";
    cin>>A;
    cout<<"Cual es el valor de B:";
    cin>>B;
    cout<<"Cual es el valor de C:";
    cin>>C;
    D= A+B;
    S=A+B+C;
    cout<<"Esto vale S:"<<S<<endl;
    A2= S-A*S-B*S-C;
    cout<<"Esto vale A2:"<<A2<<endl;
           if (D > C)
           {
                 if (A = B = C)
                 {
                       cout<<"EQ";
                       }
                       else 
                       if (A=B<C)
                       {
                                 cout<<"EG";
                                 }
                                 else
                                 if (A != B != C)
                                 {
                                       cout<<"EQ";
                                       }
                                       else 
                                       cout<<"ERROR";
                                       }
         else
         if (A=B<C)
         {
                   cout<<"EQ";
                   }
                   else
                   cout<<"EQ";
              getch ();
              return 0;
}
              
