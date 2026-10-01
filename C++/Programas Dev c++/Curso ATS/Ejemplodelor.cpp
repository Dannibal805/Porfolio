//coincidencia de números
// Escribe un programa que lea la entrada estándar de tres números. déspues debe leer
// un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad


#include<iostream>

using namespace std;

int main(){
	 int n1,n2,n3,n4;
	 
	  cout<<"Digite tres numeros:  "	;
	 cin>>n1>>n2>>n3;
	 
	 cout<<"\n Digite un cuarto numero: ";
	 cin>>n4;
	  
	 if((n1==n4) || (n2==n4) || (n3==n4)){
	 	
	 	cout<<"\n El cuarto numero es igual a alguno de los ya digitados"<<endl;
	 }
	 else {
	 	cout<<"El cuarto numero no coincide con los anteriores"<<endl;
	 }
	 
	 
	 
	 return 0;
           }
