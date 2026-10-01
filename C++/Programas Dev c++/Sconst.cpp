//sobre constructor




#include <iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
	private:   //Atributos
	int   dia,mes,anio;
	public:   //metodos
	    Fecha(int,int,int); //constructor1
	    Fecha(long); //constructor2
	    void mostrarFecha();
	
};

//constructor1

Fecha::Fecha(int _dia, int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}


Fecha::Fecha(long  fecha){
	anio = int(fecha/10000); //extrae los primeros 4 números
	mes =  int((fecha-anio*10000)/100); //extrae el mes
	dia =  int(fecha-anio*10000-mes*100);  // extrae el día
}



void Fecha::mostrarFecha(){
                      cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}



int main(){
	
	Fecha hoy(16,11,2021);
	Fecha ayer(20211115);
	
	
	hoy.mostrarFecha();
    ayer.mostrarFecha();
    
	
	system("pause");
	return 0;
}
