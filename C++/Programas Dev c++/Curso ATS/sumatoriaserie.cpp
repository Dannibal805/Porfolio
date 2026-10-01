
/*  Escribir un programa donde calcule la suma de 1+2+3...n 
y el usuario determine cuantos elementos son esa suma  es una seríe

*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"De cuantos elementos será la sumatoria: ";
	cin>>n;
	cout<<"El numero de elementos de n es la cantidad de elementos a sumar: \n";
	
	
	
	for(int i=1;i<=n;i++){
		suma = suma+i;
	}
	
	cout<<"La sumatoria de la serie es  \t:"<<suma<<endl;
	
	getch();
	return 0;
	
}
