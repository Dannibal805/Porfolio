// Definición de poliformismo  es hacer una acción o metodo con un solo metodo sin necesidad de crear este para cada clase u onjeto
// por ejemplo tengo el metodo comer para tres clases como lo es León, humano y perro todos comen  pero no todos comen igual ;


#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal{
	private:
		int edad;
		public:
		Animal(int)	;
		virtual void comer();   // con esto se sabe que es polimorfismo
};


class Humano : public Animal{
	private:
		 string nombre;
		public: 
		Humano(int,string);
		void comer();       //
};



class Perro : public Animal{
	private:
	string nombre, raza;
	public:
		Perro(int,string,string);
		void comer();
};

Animal::Animal(int _edad){
	edad=    _edad;
}



Humano::Humano(int _edad,string _nombre) : Animal(_edad){
	nombre = _nombre ;
}





void Animal::comer(){
	cout<<"Yo como ";
}


void Humano::comer(){
	Animal::comer();    // le decimos que ya existe en Persona  y se hace la aclaración para no confundirse
	cout<<"En una mesa sentado en su silla: "<<endl;
}



Perro::Perro(int _edad,string _nombre,string _raza): Animal(_edad){
	nombre= _nombre;
	raza= _raza;
	
}


void Perro::comer(){
	Animal::comer();
	cout<<"En el suelo con su plato "<<endl;
}



int main(){
	Animal *vector[2];  // se usa bastante con punteros
	
	vector[0] = new Perro(7,"Milton","Rodwiller");
	
	vector[1] = new  Humano(30,"Alexander");
	
	vector[0] ->comer();  // es para aceder a los metodos desde punteros
	cout<<"\n";
	vector[1] ->comer();
	
	
	system("Pause");
	return 0;
}

