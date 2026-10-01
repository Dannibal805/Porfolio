// Transformación de numero enteros a romanos

// M =1000 D= 500 C= 100 L=50 X=10 v=5 I=1 



#include<iostream>

using namespace std;



int main(){
	
     int numero,unidades,decenas,centenas,millares;  // tipo caracter 
	 
	 cout<<"Digite el numero que desea transformar en numero romano: "	;
	 cin>>numero;
	 
	 // 2152 / 1000 100 50 y 2
	 
	 unidades = numero%10;  // el residio seria dos
	 numero /= 10;     //215
	 
	 decenas= numero%10;   //el residuo seria 5 
	 numero /= 10;       // qudaría 21
	 
	 centenas= numero%10; // el residuo sería uno
	 numero /=10 ;  // quedaría el 2 solo
	 
	 millares = numero;

	 
	 switch(millares){
	 	case 1: cout<< "M"; break;
	 	case 2: cout<< "MM"; break;
		case 3: cout<< "MMM"; break;		
	                 } 
	  
	  switch(centenas){
	 	case 1: cout<< "C"; break;
	 	case 2: cout<< "CC"; break;
		case 3: cout<< "CCC"; break;		
		case 4: cout<< "CD"; break;		
	    case 5: cout<< "D"; break;		
	    case 6: cout<< "DC"; break;		
	    case 7: cout<< "DCC"; break;		
	    case 8: cout<< "DCCC"; break;		
	    case 9: cout<< "CM"; break;		
	    
	                 }
		
	 switch(decenas){
	 	case 1: cout<< "X"; break;
	 	case 2: cout<< "XX"; break;
		case 3: cout<< "XXX"; break;		
		case 4: cout<< "XL"; break;		
	    case 5: cout<< "L"; break;		
	    case 6: cout<< "LX"; break;		
	    case 7: cout<< "LXX"; break;		
	    case 8: cout<< "LXXX"; break;		
	    case 9: cout<< "XC"; break;		
	                  }
	  switch(unidades){
	 	case 1: cout<< "I"; break;
	 	case 2: cout<< "II"; break;
		case 3: cout<< "III"; break;		
		case 4: cout<< "IV"; break;		
	    case 5: cout<< "V"; break;		
	    case 6: cout<< "VI"; break;		
	    case 7: cout<< "VII"; break;		
	    case 8: cout<< "VIII"; break;		
	    case 9: cout<< "IX"; break;		
	    			 
					  
	                 
	                 
	 
                    }                        
}
