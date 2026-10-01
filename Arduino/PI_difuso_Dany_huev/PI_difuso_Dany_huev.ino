/* Control de temperatura difusa usando un PI  para una huevera de un foco de 50watts  con un sensor LM35 
 * El  control difuso se establecio en tres tipos de casos bajo, medio y alto y dependiendo de sus funciones de membrésia donde este entre el controlador actuara
 * las ganancías se calculan por medio de pesos ponderados una técnica de control difuso aplicado a plantas físicas
 * A diferencía del controlador clasíco PI   el difuso actua más rapído y converge más rapidamente el error a 0
 * 
 */




//#include <SD.h>
#include<math.h>

//File myFile;
float temp=0, valor;
int tempPin = A0;
int foco=9;
unsigned long tiempoAnterior=0, tiempo=0;
int periodo=1000;
float ref=35;
int u=0;
float cin=0, error=0;
float ea=0, ua=0;
float de=0;
int estado=0;
int i;
int j;
float numkp=0, numki=0, den=0;
float aa=0, bb=0;
//FUSIFICACIÓN
// funciones de membresía  que representan la temperatura 
int A[3]={20, 36, 40};
int B[3]={36, 40, 44};
int C[3]={40, 44, 65};

// ganancías del controlador
float Kp[3]={1.088, 1.477, 0.6992}; 
float Ki[3]={0.003, 0.005, 0.0033};

float MINi=0, MAXi[3]={0, 0, 0};
float Kpg=0, Kig=0;



void setup() {
   Serial.begin(9600);
   Serial.print("Iniciando SD... ");
  
  Serial.println("inicializacion exitosa");
   pinMode(tempPin,INPUT);
  pinMode(foco,OUTPUT);
}
  // put your setup code here, to run once:



void loop() {
    tiempo=millis();
  if(tiempo-tiempoAnterior>=periodo){
   // myFile = SD.open("prueba.txt", FILE_WRITE);//abrimos  el archivo
for ( int i = 0 ; i < 1000; i++ ) {
  temp += analogRead(tempPin);
  }
temp/=1000;
  valor=analogRead(tempPin);
   temp = (temp*5*100)/1024; 

//   //Fusificación
//

   for(i=0;i<=2;i++){
    aa=(ref-A[i])/(B[i]-A[i]);
    bb=(C[i]-ref)/(C[i]-B[i]);
    MINi=min(aa,bb);
    MAXi[i]=max(MINi,0);
    } 
     
     den=0;
     numkp=0;
     numki=0;
     for(i=0;i<=2;i++){
     den= MAXi[i]+den;
     numkp= numkp+(MAXi[i]*Kp[i]);
     numki= numki+(MAXi[i]*Ki[i]);
     } 
//
     Kpg=numkp/den; 
     Kig=numki/den;

//
//     //PI
       error=ref-temp;      
      
       u=(Kpg+Kig)*error-Kig*ea+ua;
       ea=error;
       ua=u;
   
       //limitación de PWM
       if (u>255){
       u=255;}
       if (u<0){  
       u=0;}


         analogWrite(foco,u);

//

     //Datalogger

 
      
      Serial.print(temp,4);
      Serial.print("   ");
      Serial.print(u);
      Serial.print("   ");
      Serial.print(error);
      Serial.print("   ");
      Serial.print(numkp);
      Serial.print("   ");
      Serial.print(numki);
      Serial.print("   ");
      Serial.print(den,4);
      Serial.print("   ");
      Serial.print(Kpg,4);
      Serial.print("   ");
      Serial.print(Kig,4);
      Serial.print("   ");
      Serial.print(MAXi[0],4);
      Serial.print("   ");
      Serial.print(MAXi[1],4);
      Serial.print("   ");
      Serial.print(MAXi[2],4);
      Serial.println("   ");

      tiempoAnterior=millis();
  }
  }



