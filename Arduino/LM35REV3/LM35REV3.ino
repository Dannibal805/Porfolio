     /* Control de una huevera  con control PI   ganancias con base al modelo, se realizo una etapa de potencia previa para la realización de este proyecto  
      *  con una aproximación a un modelo de segundo orden con más de 10 mil lecturas de temperatura´para aproximar el modelo por medio de  
      *  la herramienta simulink.
      *  Este programa además de contar con el PID  cuenta con comunicación bluetooth con una APP diseñada en APP Inventor 
      *  
      *  Autor (Alvaro Daniel Soto Guerrero)
      *  
      */
float val = 0;
float val1 = 0;
float temp1 = 0;
float temp2 = 0;
float temp3 = 0;
float temp4 = 0;
float temp = 0;
int i1=0;
int analogPin = 23;



char cadena[30];
byte posicion=0;
int valor=0;
int ledPin = 38; // pin PWM para el LED
int pwm = 0;
int p1=0;



float e=0;
float e_anterior=0;
float u=0;
float u_anterior=0;

float kp=0;
float ki=0;



#include <Wire.h> 

void setup() 
  {  
  Serial.begin(9600);
 
 
  }
  
void loop() {

//          valor =35;
        
        
        
     if(Serial.available()>0){
    
           memset(cadena,0,sizeof(cadena));
           while(Serial.available()>0)
              {
              cadena[posicion]=Serial.read(); 
              posicion++;
              }
           valor=atoi(cadena);        
           posicion=0; 
     }
 if (valor==1&&Serial.available()==0){
           
            pwm=0;
            u_anterior=0;
            e_anterior=0;
            kp=215.7525;
            ki=0.068908;
            analogWrite(ledPin, pwm); 
                                     }
                  
  if (valor==2&&Serial.available()==0){
           
            pwm=0;
            analogWrite(ledPin, pwm); 
            u=0;
            u_anterior=0;
            kp=0;
            ki=0;
            delay(1000);
            valor=0;
                  }
  if (valor>2&&Serial.available()==0){
            e=valor-temp4; 
            u=(kp+ki)*e-kp*e_anterior + u_anterior;
            u_anterior=u;
            e_anterior=e;
            if(u>254){u=255;}
            if(u<0){u=0;}
            pwm=u;
            analogWrite(ledPin, pwm); // se escribe el valor de I en el PIN de salida del LED
           
                  }          
                  
         Serial.println(valor); //escribe serialmente
       
        
        
         }



/*
 * 
 */


