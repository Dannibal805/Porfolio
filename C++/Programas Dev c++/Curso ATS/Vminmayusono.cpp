// Escriba un progtama que lea la entrada estándar un carácter e indique en la salida estandar si el carácter es una vocal minúscula, es una
// vocal mayúscula o no es una vocal



#include<iostream>

using namespace std;

int main(){
	
     char letra;  // tipo caracter 
	 
	 cout<<"Digite un caracter: "	;
	 cin>>letra;
	 
	 // con todo esto ahorraria el uso de un if else if else ....
	 switch(letra){
	 	case 'a':
	 	case 'e':
		case 'i':
		case 'o':
		case 'u': 	
		cout<<"\n Es una vocal minuscula"<<endl; break;
	 	case 'A':
	 	case 'E':
		case 'I':
		case 'O':
		case 'U': 	
		cout<<"\n Es una vocal mayuscula"<<endl; break;
		default: cout<<"\n No es una vocal";
		break;
		
	 }
	 
}
	
