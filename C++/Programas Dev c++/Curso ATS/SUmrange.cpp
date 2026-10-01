//Hacer un programa que tenga lec de int hasta que introduzca el rango de 20-30
// o se introduzca un valor de 0 el programa debe entregar la suma de los valores
// mayores que 0
#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	int n,sum=0;
	
	
	do{
		
		cout<<"Introduzca un numero...:";
		cin>>n;		
		sum += n;
		
		
	}while((n<=20) || (n>=30) && (n!=0));
	
		
	                              
	
	
	/*prom = sumT/6;
	 cout<<"\n Temperatura promedio: "<<prom<<endl;
	 cout<<"\n Temperatura menos: "<<menor<<endl;
	 cout<<"\n Temperatura max: "<<mayor<<endl;
     getch();*/
    cout<<"\n La suma d elos valores es : "<<sum<<endl;
	
	
}
