// cajero automatico que simule un saldo inicial de mil dolares



#include<iostream>

using namespace std;

int main(){
	
     int numero,saldo_i= 1000;  // tipo caracter 
	 float extra,saldo=0;
	 cout<<"\t Bienveido a su cajero Virtual "<<endl	;
	 cout<<"\n1. Depositar dinero a la cuenta";
	 cout<<"\t2. Retirar dinero a la cuenta";
	 cout<<"\t3. Checar estado de la cuenta";
	 cout<<"\t4. Salir";
	 cout<<"\n Teclie opcion: \n";
	 
	 
	 cin>> numero;
	 
	 // con todo esto ahorraria el uso de un if else if else ....
	 switch(numero){
	 	case 1: cout<<"Depositar: "<<endl; 
		        cin>> extra;
		        saldo= saldo_i+extra;
		        cout<<"Tu saldo actual es de: "<<saldo;
			   break;
	 	case 2: cout<<"Retirar: ";
		        cin>> extra; 
		        if(extra<=1000){
				
				saldo = saldo_i-extra;
				cout<<"Tu saldo actual es de: "<<saldo; }
				else {
					cout<<"No puede retirar esa cantidad intente de nuevo";
				}
		 break;
		case 3: cout<<" Tu saldo actual es de: "<<saldo_i; break;
		case 4: cout<<" Retire su tarjeta : \n"; break;
		default: cout<<"\n Opcion no validad intente de nuevo porfavor";
		break;
		
	 }
	 
	 return 0;
}
	 
