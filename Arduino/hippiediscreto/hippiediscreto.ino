/* Control de un motor con encoder  lo primero es visualizar cuantas pulsos por vuelta tiene un encoder ya que esta caracterizado se realiza la lectura y por medio de las funciones 
 * A change y B change se abarcan todos los casos del encoder se prueban con diverssas ganancías ya sea con un controlador PID o un PI se controlaran los grados con los que se quiere llegar
 * Es un programa base para realización de proyectos de mecatrónica con aplicación física  
 * 
 * 
 * 
 * Este fue realizado por el Ing. Alvaro Daniel Soto   año 2019
 */
long count=0;// cuentas del encoder
unsigned long timep,ttime,etime,timepp;
boolean A,B;
byte state,statep,indexx;
int setu=560, grados;  // valor de referencia en cuentas por vuelta del encoeder
int gd=15, rpm=0, conv=0 ;

// inicialización de todos los casos del encoder 
int QEM[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};

// controlador 
float kp=1.2,ki=0,kd=.02, rad=0;   //kp=.62,ki=.12,kd=.2;  ganancias que se sintoniza adecuadamente solo pidio un pd 
int   INA, INB;                             // giro derecha giro izquierda
int ea=0,cin=0,de=0,error=0,ee;                 //errores  
int pwm=10;                            //declaración de pin 
int u;
int win=25;  //win up                ventana  de espacio estacionario
// declaración de funciones del encoder
void Achange();                        //subrutinas lectura de encoder
void Bchange();

void setup ()
{
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
attachInterrupt(0,Achange,CHANGE);
attachInterrupt(1,Bchange,CHANGE);

}


// rutina de la función del controlador 
void PID_HIPPIE(int set)   
{error=set-count;
de=ea-error; // corregir con respecto al tiempo error actual 
u=kp*error+ki*cin+kd*de;
ea=error;
if (abs(error)<win)      //solo entra con el PID
{cin+=error;}
else 
cin=0;
if (u>255)
u=255;
if (u<-255)
u=-255;               //limitación de PWM
//analogWrite(pwm,abs(u));
//analogWrite(pwm,abs(250));
if (u<0){                   //giro derecha giro izquierda  dependiente de la u 
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  }else{
    digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  }
  }
  
  
void loop() {
  ttime=micros();  // tiempo desde que corre en el micro 
  etime=ttime-timep;
  etime=ttime-timepp;
  if(etime>20000)  //Scheduler   //"tiempo de muestreo"  
  { if (Serial.available() > 0) {
              /*  setu = Serial.read();
                setu=setu*200;
                setu=(setu*360)/2280 ; */
   
        }
        //rpm= 
        
conv=(649)/360;
for(int i=0; 1000<=i; i++){
  
                         }
 //Serial.print("RPM:   ");
 Serial.print("\t");
 Serial.print(250);
 // del grande grados=(count*360)/2280;  //transformación de  cuentas a grados   
 grados=(count*360)/516;
 rad= (0.0174*grados);
  Serial.print("\t");
    //Serial.print("Pulsos:   ");
     Serial.println(  rad);
      Serial.print("\t"); 
// Serial.print("grados:  ");
 //Serial.print(grados); 
 //Serial.print("\t"); 
// Serial.print("error:  ");
// Serial.println(error);  
    /*Serial.print("Torque:  "); 
    Serial.println(u);  
    Serial.print("Error:  "); 
    Serial.println(error);  */
   // setu=(sg*2280)/360;
    timep=ttime;
    analogWrite(pwm,250);
    PID_HIPPIE(setu); // Referencia o SET con labview o desde aqui  
    
  }
}

void Achange()
{   //lectura del encoder  abarcamos todos los casos posibles en la cuadratura del encoer
  A=digitalRead(2);
  B=digitalRead(3);
  if ((A == HIGH)&&(B == HIGH)) state=0;
  if ((A == HIGH)&&(B == LOW)) state=1;
  if ((A == LOW)&&(B == LOW)) state=2;
  if ((A == LOW)&&(B == HIGH)) state=3;
  indexx=4*state+statep;
 count=count+QEM[indexx];
  statep=state;
  }

  void Bchange()
{
  A=digitalRead(2);
  B=digitalRead(3);
  if ((A == HIGH)&&(B == HIGH)) state=0;
  if ((A == HIGH)&&(B == LOW)) state=1;
  if ((A == LOW)&&(B == LOW)) state=2;
  if ((A == LOW)&&(B == HIGH)) state=3;
  indexx=4*state+statep;
  count=count+QEM[indexx];
  statep=state;
  }
