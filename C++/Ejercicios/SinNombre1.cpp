#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int precio,senn,cosn,tann;
    cout<<"sen de n:";
    cin>>senn;
    cout<<"cos de n:";
    cin>>cosn;
             
              if (cosn != 0)
              {
              tann=senn/cosn;
              cout<<"La tangente de n es:"<<tann;
              }
              else{
              cout<<"ERROR";
              }
              getch ();
              return 0;
}
              
