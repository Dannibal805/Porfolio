/*  Suma de factoriales
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, f=1,suma=0;
	
	cout<<"Que suma de factoriales quieres: ";
	cin>>n;
//	cout<<"Se sumaran solo los numeros nones: \n";
	
	
	
	for(int i=1;i<=n;i++){
		f = f*i;
		suma = suma + f;
	}
	
	cout<<"La suma de factoriales  es de   \t:"<<suma<<endl;
	
	getch();
	return 0;
	
}
