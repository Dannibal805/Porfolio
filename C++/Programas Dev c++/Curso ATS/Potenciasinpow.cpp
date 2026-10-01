/*  Escribir un programa conde calcule x^y donde tanto x como y son enteros +
sin utilizar la función pow


*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, y, ele= 1;
	
	cout<<"Digite el valor de x: ";
	cin>>x;
	cout<<"Digite el valor de y: ";
	cin>>y;
	
	
	for(int i=1;i<=y;i++){
		ele= ele*x;
	}
	
	cout<<"El resultado de x^y es :"<<ele<<endl;
	
	getch();
	return 0;
	
}

// faltaría agregarle sentencias para delimitar las entradas
