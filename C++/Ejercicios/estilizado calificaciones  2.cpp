#include<iostream.h>
#include<conio.h>
int main()
{
    int cal;
    cout<<"Teclea  tu calificacion: ";
    cin>>cal;
    if (cal>10 || cal<0)
    {
               cout<<"calificacion fuera de rango";
               }
               else
               if (cal<6)
               {
                         cout<<"suficiente";
                         }
               else 
               if (cal==7)
               {
                          cout<<"Regular";
                          }
               else if (cal==8)
                {
                    cout<<"Bien";
                    }
                else if (cal==9)
                {
                     cout<<"muy bien";
                     }
                 else  
                 {
                      cout<<"exelente";
                      }
                      getch();
                      return 0;
                      }
                                                    
