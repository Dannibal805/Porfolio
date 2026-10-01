
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
          digitalWrite(ledPin,LOW);
            takeLowTime = false;
                             }
                             return takeLowTime;
                         
    }
   
void setup() {
 bool taken;
Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(pirPin, LOW);
  ejecuto= true;

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
    delay(1000);
    if(take==true)
     ejecuto= false;
       Serial.println("Ejecuto");
     delay(500);
     if(take== false)
     Serial.println("Detectando");
  }
// si detecta algo o en el caso de la contraseña  dara paso al loop  si no es asi se quedara enlatado en el setup
}


void loop() {


}


  


