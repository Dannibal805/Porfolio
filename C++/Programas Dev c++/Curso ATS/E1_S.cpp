

#include<iostream>
 using namespace std;
 
 int  main(){
 	float precio= 0;
 	float IVA=  0.15;
 	cout << "Escanie codigo del producto: \n  ";
 	cin>> precio;
    
    precio = precio*IVA+precio;
    cout << " El precio + el IVA es: "<<precio<<endl;
 	
 }
         
