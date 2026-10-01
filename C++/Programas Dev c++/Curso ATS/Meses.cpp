// Mostrar los meses del año el usuario tecleara un numero entre 1 y 12 y aparecera el mes correspondiente


#include<iostream>

using namespace std;

int main(){
	
     int numero;  // tipo caracter 
	 
	 cout<<"Digite un mes entre el uno y el doce: "	;
	 cin>> numero;
	 
	 // con todo esto ahorraria el uso de un if else if else ....
	 switch(numero){
	 	case 1: cout<<"Enero"<<endl; break;
	 	case 2: cout<<"Febrero \n"; break;
		case 3: cout<<"Marzo \n"; break;
		case 4: cout<<"Abril"<<endl; break;
		case 5: cout<<"Mayo"<<endl; break;
	 	case 6: cout<<"Junio"<<endl; break;
	 	case 7: cout<<"Julio"<<endl; break;
		case 8: cout<<"Agosto"<<endl; break;
		case 9: cout<<"Septiembre"<<endl; break;
		case 10: cout<<"Octubre"<<endl; break;
		case 11: cout<<"Noviembre"<<endl; break;
		case 12: cout<<"Diciembre"<<endl; break;
		default: cout<<"\n Mes fuera de rango";
		break;
		
	 }
	 
	 return 0;
}
	 
