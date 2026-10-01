/* Ejercicio 1: construya una clase llamada rectangulo que tenga los siguientes 
atributo: largo y ancho, y los siguientes metodos: perimetro() y area()*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class rectangulo {
    private:
    float largo, ancho;
    ;
		// metodos son las acciones de las clases  y por lo gral son publicos
	public: //metodos
	rectangulo(float,float);      //Constructor  por lo general lleva el mismo nombre que la clase
	void perimetro();
	void area();
};

//Constructor, nos sirve para inicializar los atributos 
     rectangulo::rectangulo(float _largo,float _ancho){
	largo= _largo;
	ancho= _ancho;
}

void rectangulo::perimetro(){
	float peri;
	peri = (2*largo)+(2*ancho);
	cout<<"El perimetro es: "<<peri<<endl;
}

void rectangulo::area(){
	float A;
	A = (largo*ancho);
	cout<<"El area es:  " <<A<<endl;
}



int main(){
	
	//rectangulo.perimetro();   // intanciar una clase o crear un objeto 
	//rectangulo.area();
	rectangulo r1(10,5);
	r1.perimetro();
	r1.area();
	
	
system("pause");
return 0;
}
