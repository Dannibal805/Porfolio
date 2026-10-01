#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,k;
    float div,h;
    cout<<"Dame a:";
    cin>>a;
     cout<<"Dame b:";
    cin>>b;
     cout<<"Dame c:";
    cin>>c;
     cout<<"Dame d:";
    cin>>d; 
    
                    x=a-c;
                    k=a-b;
              if (d != 0) 
              {
                    div = pow(x,2)/d;
                    h= pow(k,3)/d;
                          cout<<"La divicion de x es:"<<div<<endl;
                          cout<<"La divicion de k es :"<<h<<endl;
                          }           
              else
              {
              cout<<"ERROR";
              }              
              getch ();
              return 0;
}
              
