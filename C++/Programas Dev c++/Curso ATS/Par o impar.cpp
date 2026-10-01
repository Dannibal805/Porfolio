// determinar si un numero es impar o impar

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digina un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){   // la operación es el modulo osea el residuo
		cout<<"El numero es par";
	}
	else { 
	    cout<<"El numero es impar";
	}
	
}
