int valorcds;    //pin digital conectado a la salida del sensor PIR
int brilloLED;

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
int Ledhalo= 9;
boolean  take;
boolean  ejecuto;
boolean PIR( ){
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
         // digitalWrite(ledPin,LOW);
            takeLowTime = false;
                             }
                             return takeLowTime;
                         
    }
   

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 bool taken;
 pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(pirPin, LOW);
  pinMode(Ledhalo,INPUT);


  //Dar el sensor de un cierto tiempo para calibrar
  Serial.print(" calibrando sensor ");
    for(int i = 0; i < calibrationTime; i++){
      Serial.print(".");
      delay(1000);
      }
    Serial.println(" hecho");
    Serial.println("SENSOR ACTIVADO");
    delay(50);

  while (ejecuto==true) { // es el mismo principio  de lo que pienso hacer con la contraseña solo que aqui leiria
    take= PIR();
    Serial.println(take);
    digitalWrite(ledPin, LOW);   //falta valor en la variable ejecuto
    delay(1000);
    if(take==true)
       Serial.println("Ejecuto");
      digitalWrite(ledPin, HIGH);
     delay(500);    
     if(take== false)
     Serial.println("Detectando");
  }
}

void loop() { //Reto es que no este 
  // put your main code here, to run repeatedly:
  take=PIR();
  if(take==true){  //Podria agregar el sensor ultrasonico 
    valorcds= analogRead (0);
   Serial.println(valorcds);  //Falta  hacer un case para que decida tipos de intensidad
   valorcds= 1023- valorcds;
   brilloLED= map(valorcds,0,1023,0,255);
   analogWrite(5,brilloLED);
  // delay(110);
  }
}
