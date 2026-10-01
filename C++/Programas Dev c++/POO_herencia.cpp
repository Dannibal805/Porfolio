// Herencia POO 

// esta ocurrer cuando una clase hereda sus atributos y/o metodos para  una clase hija
// ademas la hija de tener los mismos atributos o metodos puede tener acciones extra 


#include<iostream>
#include<stdlib.h>
using namespace std;


class Persona{
	private: //Atributos    // con protected podrían ser manipulados por padre e hijo
	string nombre;
	int edad;
	public: // metodos
	Persona(string,int); // constructor definimos los datos de entrada del super constructor o constructor padre
	void mostrarPersona();
	
};



class Alumno : public Persona{   // así se hereda  clase hija
	private:   // atributos
		string Nocta;
		float  nota;
		public:   //metodos
			Alumno(string,int,string,float); //constructor de la c
			void mostrarAlu();

};



//constructor de la clase persona (clase padre)
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}


Alumno::Alumno(string _nombre,int _edad,string _Nocta,float _nota) :Persona(_nombre,_edad){  
	Nocta = _Nocta;
	nota =   _nota;
}



void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}



void Alumno::mostrarAlu(){   // de la clase persona ya lo heredamos entonces con mostrar persona ya acaparamos edad y nombre
mostrarPersona();             // se tiene que agregar el metodo del padre para que herede si no d elo contario no mostrara la herencia
cout<<"codigo de Alumno: "<<Nocta<<endl;
cout<<"Nota final : "<<nota<<endl;
}






int main(){
	Alumno 	alumno1("Daniel",27,"215476",9.75);
	//Persona  P1("Alvaro",25);
	
	alumno1.mostrarAlu();
	//P1.mostrarPersona();

	
	
	system("pause");
	return   0;
}


//Brandon Martínez Santiago  codigo ejemplo
//hace 8 meses
//Herencia en POO

/*#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
	string nombre;
	int edad;
	public: //Metodos
	Persona(string,int); //constructor
	void mostrarPersona();
};

class Alumno : public Persona{
	private: //Atributos
	string codigoAlumno;
	float notaFinal;
	public: //Metodos
	Alumno(string,int,string,float); //constructor de la clase alumno
	void mostrarAlumno();
};

//constructor de la clase persona (clase padre)
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal) : Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre:"<<nombre<<endl;
	cout<<"Edad:"<<edad<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno:"<<codigoAlumno<<endl;
	cout<<"Nota Final:"<<notaFinal<<endl;
}

int main(){
	Alumno alumno1("Alejandro",20,"12312312",15.6);
	
	alumno1.mostrarAlumno();
	
	system("pause");
}*/
