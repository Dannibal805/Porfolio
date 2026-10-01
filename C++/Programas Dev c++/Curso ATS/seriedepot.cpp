


/*  Escriba un programa que calcule la suma de la sigeuiente serie 2^1 +2^2 +2^n...
*/


#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int n,suma=0,m=0;
	
	cout<<"Hasta que  potencia quieres la suma: ";
	cin>>n;
//	cout<<"Se sumaran solo los numeros nones: \n";
	
	
	
	for(int i=1;i<=n;i++){
	    m=pow(2,i);
		suma = suma + m ;
	}
	
	cout<<"La suma  de la serie es   \t:"<<suma<<endl;
	
	getch();
	return 0;
	
}
