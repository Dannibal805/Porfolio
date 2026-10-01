#include<iostream.h>
#include<conio.h>
int main()
{
    int senn,cosn,tann;
    cout<<"sen de n:";
    cin>>senn;
    cout<<"cos de n:";
    cin>>cosn;
              if (cosn != 0)
              {
              tann=senn/cosn;
              cout<<"La Tangente de n es:"<<tann;
              }
              else
              cout<<"ERROR";
              getch ();
              return 0;
}
