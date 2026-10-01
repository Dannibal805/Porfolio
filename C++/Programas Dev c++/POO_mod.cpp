//metodos constructores y modificadorres (getters y setters)
// estos nos permiten manipular y modificar la clase padre desde otras clases por ejemplo la clase hija

#include <iostream>
#include<stdlib.h>
using namespace std;

class Punto{
	private: //atributos
	int x,y;   // coordenadas
	public:
		Punto();
	void setPunto(int,int);
	int getPuntoX();
	int  getPuntoY();
};


Punto::Punto(){
}


// estblecemos valores a los atributos
void Punto::setPunto(int _x,int _y){     //setters  para acceder a los atributos privados de una clase
	x = _x;
	y = _y;
	
}

//getters
int Punto::getPuntoX(){    //getter
	
	return x;        
}


int Punto::getPuntoY(){     //getter estos pueden ser independientes o juntos
	
	return y;
}










int main(){
	Punto punto1;
	
	punto1.setPunto(10,25);
	cout<<punto1.getPuntoX()<<endl;   // se manda a imprimir
	cout<<punto1.getPuntoY()<<endl;
	
	system("pause");
	return 0;
}
