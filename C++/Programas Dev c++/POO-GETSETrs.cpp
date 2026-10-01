//metodos constructores y modificadorres (getters y setters)

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
void Punto::setPunto(int _x,int _y){
	x = _x;
	y = _y;
	
}

//getters
int Punto::getPuntoX(){
	
	return x;
}


int Punto::getPuntoY(){
	
	return y;
}










int main(){
	Punto punto1;
	
	punto1.setPunto(10,25);
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	system("pause");
	return 0;
}
