
int valorcds;    //pin digital conectado a la salida del sensor PIR
int brilloLED;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    valorcds= analogRead (0);
   Serial.println(valorcds);  //Falta  hacer un case para que decida tipos de intensidad
   valorcds= 1023- valorcds;
   brilloLED= map(valorcds,0,1023,0,255);
   analogWrite(5,brilloLED);
   delay(110);
}
