
/*  Escribir un programa donde obtenga el factorial de x numero
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, f=1;
	
	cout<<"Que factorial quieres: ";
	cin>>n;
//	cout<<"Se sumaran solo los numeros nones: \n";
	
	
	
	for(int i=1;i<=n;i++){
		f = f*i;
	}
	
	cout<<"El factorial es   \t:"<<f<<endl;
	
	getch();
	return 0;
	
}
