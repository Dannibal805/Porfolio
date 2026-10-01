//ejercicio herencia  de persona a empleado y de persona a estudiante y de estudiante a universitario
// herencia o jerarquia anidada


#include<iostream>
#include<stdlib.h>

using namespace std;



class Persona{  // clase padre
	private:  // atributos
		string nombre;
		int     edad;
		public:
			Persona(string,int);
			void mostrarPersona(); 
};

class Empleado : public Persona{
	private:
		float sueldo;
		public:
			Empleado(string,int,float);
			void mostrarEmpleado();
};


class estudiante:public Persona{
	private: // artibuto del estudiante Promedio
	float  promedio;
	public:
		estudiante(string,int,float);
		void mostrarestudiante();
};


class Universitario:public estudiante{
	private:
		string carrera;
		public:
			Universitario(string,int,float,string);
			void mostrarUniversitario();
};



//constructores
Persona::Persona(string _nombre,int _edad){   // constructor de la clase
	nombre = _nombre;
	edad   =  _edad;
}

Empleado::Empleado(string _nombre,int _edad,float _sueldo) : Persona(_nombre, _edad){   // constructor de la clase empleado (hija)
     sueldo = _sueldo;    
}

estudiante::estudiante(string _nombre,int _edad,float _promedio) : Persona(_nombre,_edad){
	promedio = _promedio;
}


Universitario::Universitario(string _nombre,int _edad,float _promedio,string _carrera): estudiante(_nombre,_edad,_promedio){
	carrera = _carrera;
}



void Persona::mostrarPersona(){
	cout<<"Nombre "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}


void Empleado::mostrarEmpleado(){
//	mostarPersona();
    	mostrarPersona();
	cout<<" Sueldo: "<<sueldo<<endl;
}


void estudiante::mostrarestudiante(){
	mostrarPersona();
	cout<<" Promedio: "<<promedio<<endl;
}

void Universitario::mostrarUniversitario(){
	mostrarestudiante();
	cout<<" Carrera: "<<carrera<<endl;
}


//void Universitario::m

int main(){
	Empleado empleado1("Serafin",35,10500);
	cout<<"-Empleado-"<<endl;
	empleado1.mostrarEmpleado();
	
	cout<<"\n"<<endl;
	
	
	Universitario U1("JK",28,8.5,"Psicologia");
	cout<<"-Estudiante-"<<endl;
	U1.mostrarUniversitario();
	
	system("pause");
	return 0;
}





