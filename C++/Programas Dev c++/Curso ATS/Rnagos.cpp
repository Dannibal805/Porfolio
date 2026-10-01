// Escriba un programa que solicite una edad int, e indique una salida estandar si la edad introducida esta en el rango de 18 a 25 años





#include<iostream>

using namespace std;

int main(){
	 int edad=0;
	 
	  cout<<"Digite la edad que desea ingresar:  "	;
	 cin>>edad;
	 
	 if ((edad>=18) && (edad<=25)){  // el doble amperson 
	 	cout<<"Esta dentro del rango";
	}
	else {
		cout<<"No esta dentro del rango";
	}
	
	return 0;
}
