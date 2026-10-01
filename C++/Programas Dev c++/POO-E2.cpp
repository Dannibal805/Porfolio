



#include<iostream>
#include<stdlib.h>

using namespace std;

class Tiempo{
	private:   //encapsulando atributos
	int horas, minutos, segundos;
	public: //metodos
	Tiempo(int,int,int); //constructor uno
	Tiempo(int);     //constructor2
	void mostrarhora(); 
};



Tiempo::Tiempo(int _horas,int _minutos,int _segundos)   //constructor uno
{
	horas = _horas;
	minutos= _minutos;
	segundos= _segundos;	
}


Tiempo::Tiempo(int tseg)  //constructor dos
{   

	int horas =  tseg/3600;
	int minutos =  tseg/60-horas/3600;
	int segundos = tseg % 60;	
}


void Tiempo::mostrarhora(){
	cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
}



int main(){
	Tiempo m(16,19,15);
	Tiempo k(0);                //no lo detecto no se porque 
	
	
	m.mostrarhora();
	k.mostrarhora();
	
	
	system("pause");
	return 0;
}

