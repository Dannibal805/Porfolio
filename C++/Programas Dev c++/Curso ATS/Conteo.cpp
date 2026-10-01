
#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	 int numero,conteo=0;
	 
	 
	 do{
	 	cout<<"Digite un numero: ";
	 	cin>>numero;
	 	 if(numero>0){
          conteo ++;
			}
			
	 }while(numero != 0);   // esta acción se hizo para hacer para forzar a preguntar en caso que pase del rango regresará a preguntar
	 

			
			
	cout<<"\n\n";
	cout<<"El numero de veces que los numeros fueron mayor a 0 es de: "<<conteo<<endl;
	system("pause");
	
	return 0;
	
	
	
	
	
	
}
