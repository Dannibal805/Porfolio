// Definición de poliformismo  es hacer una acción o metodo con un solo metodo sin necesidad de crear este para cada clase u onjeto
// por ejemplo tengo el metodo comer para tres clases como lo es León, humano y perro todos comen  pero no todos comen igual ;


#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
		public:
		Persona(string,int)	;
		virtual void mostrar();   // con esto se sabe que es polimorfismo
};


class Alumno : public Persona{
	private:
		float Promedio;
		public: 
		Alumno(string,int,float);
		void mostrar();       //
};



class Profesor : public Persona{
	private:
	string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};

Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad=    _edad;
}








Alumno::Alumno(string _nombre,int _edad,float _Promedio) : Persona(_nombre,_edad){
	Promedio = _Promedio ;
}





void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad :"<<edad<<endl;
}


void Alumno::mostrar(){
	Persona::mostrar();    // le decimos que ya existe en Persona  y se hace la aclaración para no confundirse
	cout<<"Promedio: "<<Promedio<<endl;
}



Profesor::Profesor(string _nombre,int _edad,string _materia): Persona(_nombre,_edad){
	materia= _materia;
	
}


void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}



int main(){
	Persona *vector[3];  // se usa bastante con punteros
	
	vector[0] = new Alumno("Daniel",27,9);
	
	vector[1] = new Profesor("Alvaro",28,"IA");
	
	vector[0] ->mostrar();  // es para aceder a los metodos desde punteros
	cout<<"\n";
	vector[1] ->mostrar();
	
	
	system("Pause");
	return 0;
}



