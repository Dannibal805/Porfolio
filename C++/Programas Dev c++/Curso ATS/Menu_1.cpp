
// Hacer un programa con 4 opciones en un menu que identifique 

// el cubo de un numero
// numero par o impar
//Numero mayor que
// salir

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
     int n1,n2,opc;  // tipo caracter 
	 
	 cout<<"\t Bienveido a menu de opciones "<<endl	;
	 cout<<"\n1. Calculando el cubo del numero: ";
	 cout<<"\t2. Numero par o impar";
	 cout<<"\t3. El numero mayor es";
	 cout<<"\t4. Salir"<<endl;
	 
	 
	 cin>> opc;
	 
	 // con todo esto ahorraria el uso de un if else if else ....
	 switch(opc){
	 	case 1: cout<<"Digite un numero: "<<endl; 
		        cin>> n1;
		        n1= pow(n1,3);
		        cout<<"El cubo del numero es: "<<n1;
			   break;
	 	case 2: cout<<"Digita un numero real: ";
	 	        cin>> n1;
		        if(n1%2==0){   // la operación es el modulo osea el residuo
		       cout<<"El numero es par";
	                           }
	           else { 
	           cout<<"El numero es impar";
	                }
		       
		 break;
		case 3: cout<<" Digita dos numeros: "<<endl;
		        cin>> n1;
		        cin>>n2;
		if(n1>n2){
    	cout << " El numero mayor es: "<<n1<<endl;
                 }
        else if(n2>n1){
        cout << " El numero mayor es : "<<n2<<endl;	
	                  }
        else          {
    	cout << " Los numeros son iguales "<<endl;	
	                  }
		
		 break;
		case 4:  break;
		default: cout<<"\n Opcion no valida intente de nuevo porfavor";
		break;
		
	 }
	 
	 return 0;
}
	 
