/*  Escriba un programa que calcule la suma de la sigeuiente serie  1-2+3-4+5-6...
*/


#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int n,sp=0,si=0,suma,p=0;
	
	cout<<"Especifique hasta que numero quiere la suma :";
	cin>>n;
//	cout<<"Se sumaran solo los numeros nones: \n";
	
	
	
	for(int k=1;k<=n;k++){
	    
		if(k%2==0){
			   p = k*-1;
		       sp = sp+p;
		}
		else {
				si = si+k;
	         }
				
	                    }
	suma	= sp+si;
	
	cout<<"La suma  de la serie es   \t:"<<suma<<endl;
	
	getch();
	return 0;
	
}
