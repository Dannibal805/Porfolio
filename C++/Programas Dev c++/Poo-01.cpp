//clases c++
#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona {
	private: // encapsulado   atributos    
	int  edad;                            
	string nombre;
		// metodos son las acciones de las clases  y por lo gral son publicos
	public: //metodos
	Persona(int,string);      //Constructor  por lo general lleva el mismo nombre que la clase
	void leer();
	void correr();
};

//Constructor, nos sirve para inicializar los atributos 
Persona::Persona(int _edad,string _nombre){
	edad= _edad;
	nombre= _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}


// tarea hacer una clase de mascotas  y/o mamiferos mamifero(años,especie)


void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una carrera y tengo "<<edad<<" anios"<<endl;
}


int main(){
	Persona p1 = Persona(28,"Daniel");
	Persona p2(14,"David");
	Persona p3(65,"Yaya");
	p1.leer();
	
	p2.correr();
	
	p3.leer();
	p3.correr();
	
	
	system("pause");
	return 0;
}
