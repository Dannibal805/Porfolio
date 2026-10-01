
/*  Escribir un programa donde calcule la suma de 1+3+5...+2n-1  formula para 
convertirlo en non
y el usuario determine cuantos elementos son esa suma  es una seríe

*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"Eliga un numero non: ";
	cin>>n;
//	cout<<"Se sumaran solo los numeros nones: \n";
	
	
	
	for(int i=1;i<=2*n-1;i+=2){
		suma = suma+i;
	}
	
	cout<<"La sumatoria de la serie es  \t:"<<suma<<endl;
	
	getch();
	return 0;
	
}
