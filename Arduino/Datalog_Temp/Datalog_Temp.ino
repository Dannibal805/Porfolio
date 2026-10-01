/*Programa realizado para el control y adquisición de datos de una huevera con un foco de 50 watts, se realizo el data logger físico usando una memoria SD con el modulo de arduino 
 * para poder plotear los resultados y almacenarlos para su respectivo analísis. El sensor de temperatura fué el LM35
 * este PID fué empiríco con base a la expertise del usuario se realizo un control PI  
 * La diferencía de usar la función millis y la función es delay es que está última  abarca más procesos debido a la complejidad de la memoria y en cada ciclo de máquina se repite 
 * pero con la función millis desde que inicializa el programa en el micro esta empieza a contar haciendo una diferencia en rendimiento en cuanto milis y delay 
 * 
 * 
 * 
 */
//Fue usado para la adquisicion de datos
// Declaracion de variables
#include <SPI.h>

#include <SD.h>
File myFile;
float tempC=0;;
float tprom=0;
int tempPin = 0; // Definimos la entrada en pin A0
unsigned long time=0,timep=0,ttime,etime,timepp;
int setu=30;  //setu  valor en cuentas de encoder
float kp=0.45383649075, ki=0.023690064750086;                       // kp=9.8702650406545, ki=0.264937464595288, kd=0;;//kp=2.803955008664,ki=0.025777397238068,kd=0.02;   
float ea=0,cin=0,de=0,error=0,ee;                 //errores  
int pwm=0;                            //declaración de pin 
float u=0,ua=0,temp=0;
int win=5;  //wi 25
const long Interval=35;   //interval  era de 300 originalmente
void PID_HIPPIE();
void DAtalogger();
void setup()
{
   pinMode(pwm, OUTPUT);
    // Abre puerto serial y lo configura a 9600 bps
    Serial.begin(9600);
     Serial.print("Iniciando SD ...");
  if (!SD.begin(4)) {
    Serial.println("No se pudo inicializar");
    return;
  }
   
      Serial.println("inicializacion exitosa");
        
  if(!SD.exists("datalog.cvs"))
  {
      myFile = SD.open("datalog.cvs", FILE_WRITE);
      if (myFile) {
        Serial.println("Archivo nuevo, Escribiendo encabezado(fila 1)");
        myFile.println("Tiempo(ms),Sensor1,Sensor2,Sensor3");
        myFile.close();
      } else {

        Serial.println("Error creando el archivo datalog.cvs");
      }
  }
  
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
cin=0;    // saturación de la ley de control
if (u>255)
u=255;
if (u<-255) //
u=0;//255-abs(u) el error disminuyo;  // asi estaba antes de LEYJ-255;               //limitación de PWM
analogWrite(pwm,abs(u));
  }
  
 
void loop()
{ myFile = SD.open("datalog.txt", FILE_WRITE);//abrimos  el archivo
  unsigned long CurMili=millis();
  if(CurMili-timep>=Interval){
    timep=CurMili;
     //delay(300);   //cambiar salida de control   a 700 m
      // Lee el valor desde el sensor
     timep=millis(); 
    tempC = analogRead(tempPin); 
    // Convierte el valor a temperatura
    tempC = ( 5*tempC*100)/1024;//(5 * tempC * 00.0)/024.0;
    tprom=tprom+tempC;
     temp=++temp;
        
     if(temp>=20){
       tprom=tprom/20;
  if (myFile) { 
        Serial.print("Escribiendo SD: ");
       // int sensor = analogRead(0);
        myFile.print("Tiempo(ms)=");
        myFile.print(timep);
        myFile.print(", sensor=");
        myFile.print(tempC);
        myFile.print("\54") ;
        myFile.println(u);
        
        myFile.close(); //cerramos el archivo
        
        Serial.print("Tiempo(ms)=");
        Serial.print(timep);
        Serial.print(", sensor=");
        Serial.print(tempC);
        Serial.print("\54") ;
        Serial.println(u);
      
  
  } else {
    Serial.println("Error al abrir el archivo");
  }
    PID_HIPPIE(setu);
  
  
  //  DAtalogger(tprom);
   
    tprom=0;
     temp=0; 
      }
  }
}
