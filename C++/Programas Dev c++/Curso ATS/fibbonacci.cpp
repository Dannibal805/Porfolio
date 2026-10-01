/*  Escriba un programa que calcule la suma de la sigeuiente serie  1-2+3-4+5-6...
*/


#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int n,i=0,m=0,x=0,y=1,z=0,sum,st;
	
	cout<<"hasta que numero sera la serie:";
	cin>>n;
//	cout<<"Se sumaran solo los numeros nones: \n";
	

	cout<<"1 ";
	while(sum<=n){
               z= x+y;
			   cout<<z<<" ";
			   x=y;
			   y=z;
			 i++;
			sum = sum +i;     
	          }
//	cout<<"La suma  de la serie de fibbonacci es   \t:"<<st<<endl;
	
	getch();
	return 0;
	
}
