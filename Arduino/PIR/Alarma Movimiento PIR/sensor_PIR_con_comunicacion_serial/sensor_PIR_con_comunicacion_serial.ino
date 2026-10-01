/* 
 * //////////////////////////////////////////////////
 * //Dar sentido a la salida del sensor PIR de Parallax
 * //////////////////////////////////////////////////
 *
 * Switches a un LED de acuerdo con el estado del pin de salida sensor.
 * Determina el comienzo y el final de las secuencias de movimiento continuo.
 *
 * @ Autor: Kristian Gohlke / krigoo (_) gmail (_) com / http://krx.at
 * @ Fecha: 3. De septiembre de 2006
 *
 * @ Traducido y compartido por GUILLENXT / www.guillenxt.com
 *
 * kr1 (cleft) 2006 
 * Publicado bajo Creative Commons "Reconocimiento-No comercial-Compartir bajo la misma de 2,0" de licencia
 * http://creativecommons.org/licenses/by-nc-sa/2.0/de/
 *
 *
 * El sensor PIR de Parallax es un fácil de utilizar como módulo digital de sensor de movimiento por infrarrojos.
 * (http://www.parallax.com/detail.asp?product_id=555-28027)
 *
 * El eje de salida del sensor va a ALTO si el movimiento está presente.
 * Sin embargo, incluso si hay movimiento va a LOW de vez en cuando, 
 * Lo que podría dar la impresión de no hay movimiento. 
 * Este programa se ocupa de este problema haciendo caso omiso de LOW-fases más corto que un momento dado,
 * Suponiendo que el movimiento continuo está presente durante estas fases.
 *  
 */
/////////////////////////////
//VARS
//El tiempo que nos da el sensor a calibrar (10-60 segundos de acuerdo con la hoja de datos)
int calibrationTime = 10;        

//El tiempo cuando el sensor emite un impulso de baja
long unsigned int lowIn;         

//La cantidad de milisegundos el sensor tiene que ser bajo
//Antes de que asuma todo el movimiento se ha detenido
long unsigned int pause = 5000;  

boolean lockLow = true;
boolean takeLowTime;  

int pirPin = 7;    //pin digital conectado a la salida del sensor PIR
int ledPin = 8;


/////////////////////////////
//SETUP
void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(pirPin, LOW);

  //Dar el sensor de un cierto tiempo para calibrar
  Serial.print(" calibrando sensor ");
    for(int i = 0; i < calibrationTime; i++){
      Serial.print(".");
      delay(1000);
      }
    Serial.println(" hecho");
    Serial.println("SENSOR ACTIVADO");
    delay(50);
  }

////////////////////////////
//LOOP
void loop(){

     if(digitalRead(pirPin) == HIGH){
       digitalWrite(ledPin, HIGH);   //LED visualiza el estado de la salida del sensor
       if(lockLow){  
         //Se asegura de que esperar a que la transición a la baja antes de cualquier salida se hace otra:
         lockLow = false;            
         Serial.println("---");
         Serial.print("movimiento encontrado a los ");
         Serial.print(millis()/1000);
         Serial.println(" segundos "); 
         delay(50);
         }         
         takeLowTime = true;
       }

     if(digitalRead(pirPin) == LOW){       
       digitalWrite(ledPin, LOW);  //LED visualiza el estado de la salida del sensor

       if(takeLowTime){
        lowIn = millis();          // guardar el momento de la transición de alta a baja
        takeLowTime = false;       //  asegurarse de que esto sólo se hace al comienzo de una fase de baja
       }
       //Si el sensor es baja para más de la pausa dada, 
       //Asumimos que el movimiento no más que va a pasar
       
       if(!lockLow && millis() - lowIn > pause){  
           //Se asegura de este bloque de código sólo se ejecuta de nuevo después de 
           //Una secuencia de movimiento se ha detectado nuevo
           lockLow = true;                        
           Serial.print("movimiento detenido a los ");      
           Serial.print((millis() - pause)/1000);
           Serial.println(" segundos ");
           delay(50);
           }
       }
    }
