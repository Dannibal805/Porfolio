/* programa para realizar un control PI controlando una huevera   con un foco incandescente de 50 Watts
El sensor de temperatura usado es el LM35 los valores de las ganancias fueron calculados con base a su modelo matematico realizado por aproximación por medio de la herramienta de  simulink donde se adquirieron 
aproximadamente  10 mil muestras  para encontrar una planta de confiabilidad de 97% 
se simulo la planta y se ajusto el PID con base a la planta
*/




float tempC=0;;
float tprom=0;
int tempPin = 0; // Definimos la entrada en pin A0
unsigned long timep,ttime,etime,timepp;
int setu=30;  //setu  valor en cuentas de encoder
float kp=9.87026504016545, ki=0.264937464595288, kd=0;;//kp=2.81039550086614,ki=0.025777397238068,kd=0.02;   
float ea=0,cin=0,de=0,error=0,ee;                 //errores  
int pwm=10,time=0;;                            //declaración de pin 
float u=0,ua=0,temp=0;
int win=15;  //wi 25
void PID_HIPPIE();
void setup()
{
    // Abre puerto serial y lo configura a 9600 bps
    Serial.begin(9600);
    Serial.println("DHTxx test! and LM35");
    pinMode(pwm, OUTPUT);
     
}


void PID_HIPPIE(int set)   
{ //error=set-tempC;
error=set-tprom;
de=ea-error; // corregir con respecto al tiempo error actual 
//u=kp*error+ki*cin sistema termico sale bien  ; //kp*error+ki*cin+kd*de  con brazo;
u=(kp+ki)*error-kp*ea+ua;// LEYJ
ea=error;
ua=u;
if (abs(error)<win)      //solo entra con el PID
{cin+=error;}
else 
cin=0;
if (u>255)
u=255;
if (u<-255) //
u=0;//255-abs(u)            //limitación de PWM
analogWrite(pwm,abs(u));
  }
  
void loop()
{
     delay(300);   //cambiar salida de control 1  a 700 m
      // Lee el valor desde el sensor
     time=millis(); 
    tempC = analogRead(tempPin); 
    // Convierte el valor a temperatura
    tempC = ( 5*tempC*100)/1024;//(5 * tempC * 100.0)/1024.0;
    tprom=tprom+tempC;
     temp=++temp;
        
     if(temp>=20){      // se obtiene una temperatura promedio en un periodo d emuestreo de 300 ms                                 
       tprom=tprom/20;
    Serial.print(tprom); // me gusto más este  tiene menos precision pero su valor incremental se aprecia mejor
    // que el DT11
    Serial.print("\54") ;
    Serial.print(u);
    Serial.print("\54") ; 
    Serial.print("pwm");
    Serial.print("\54") ;
    Serial.print(error); 
    Serial.print("\54") ;
    Serial.print("Error");
    Serial.print(time); 
    Serial.print("\54") ;
    Serial.println("tiempo");
    PID_HIPPIE(setu);
   
    tprom=0;
     temp=0; 
      }
    
   
}
