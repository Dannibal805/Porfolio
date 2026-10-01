// Es un programa muy util ya que lee las temperaturas de un sensor cada 6 horas obtener la temperatura promedio, min y max



#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	float temp,mayor=0,menor=35;
	float sumT=0,prom=0;
	
	
	for(int i=0;i<24;i+=4){
		cout<<"La temperatura es..."<<i<<": ";
		cin>>temp;
		
		sumT += temp;
		
		if(temp > mayor){
			mayor = temp;
		}
		else if(temp < menor){
			menor = temp;
		}
		
		
	}
	
	
	prom = sumT/6;
	 cout<<"\n Temperatura promedio: "<<prom<<endl;
	 cout<<"\n Temperatura menos: "<<menor<<endl;
	 cout<<"\n Temperatura max: "<<mayor<<endl;
     getch();
    
	
	
}
