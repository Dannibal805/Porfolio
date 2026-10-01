

// Programa para lectura  de plataforma experimental del proyecto de grado de maestría por parte del estudiante Álvaro Daniel Soto Guerrero
/*17/12/19  modifficafción de conj2 este programa permite controlar los mmotores en lazo abierto 
// control en lazo abierto de los motores y lectura de sensores

 */

//la celda de carga se quito debido  a su retardo tan grande atrasando todos lo demás su periodo de
// frecuencia es de 80000 HZ  es muy poco comparado con los otros.

// ya quedo esta parte de la programación  lectura de Joysticks y movimiento de motores
// Este programa abarca todos lo sensores  (Joysticks, Encoders), exepto la recepción de datos 
// ya podría manipular al papalote 
// ya quedaron encoders


int motoi = A7; // Variable entera para led de la parte de arriba.   /motores
int motod = A8; // Variable entera para led de la parte de abajo. 
int val=0;
int val1=0;
int vi,vd;
unsigned long timep,ttime,etime,timepp;
boolean A,B;
boolean C,D;
boolean E,F;
long count1=0;// para encoder uno
byte state1,statep1,indexx1;
int QEM1[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};
// enco dos
long count2=0;// par a encoder dos
byte state2,statep2,indexx2;
int QEM2[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};
// enco tres
long count3=0;// para encoder 3
byte state3,statep3,indexx3;
int QEM3[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};
// Count To grades
int gri=0, grd=0, grb=0;


int   INA, INB;                             // giro derecha giro izquierda
int pwmi=5,pwmd=6;                            //declaración de pin 
static int pinA = 2; // enco 1 ose izq    ya esta en su sentido
static int pinB = 3; // 
static int pinC = 20;    // enco base 20  y 21
static int pinD = 21;
static int pinE = 19; //  enc 2 osea der
static int pinF = 18;
void Achange();                        //subrutinas lectura de encoder
void Bchange();
void Cchange();                        //subrutinas lectura de encoder
void Dchange();
void Echange();                        //subrutinas lectura de encoder
void Fchange();


int ea=0,cin=0,de=0,error=0,ee;                 //errores  
int u;                                         // u de control 


/*int pt1 = A4; // Variable entera para led de la parte de arriba.  es var uno y es th1 osea thI
int pt2 = A5; // Variable entera para led de la parte de abajo.   es var dos y es ph1 osea phiI
int pt3 = A2; // Variable entera para led de la parte de arriba.  es var tres y es th2 osea thD
int pt4 = A3; // Variable entera para led de la parte de abajo.   es var cuatro y phi2 osea phiD
int var1=0,var2=0,var3=0,var4=0;
int th1=0;
int ph1=0;
int th2=0;
int ph2=0;
*/


void setup() {
 Serial.begin(9600);
 pinMode(7, OUTPUT); //INI giro +
 pinMode(8, OUTPUT); //INI  giro -
 pinMode(5, OUTPUT); //PWMI   
 pinMode(6, OUTPUT); //PWMD   
 pinMode(4, OUTPUT); //IND giro +
 pinMode(9, OUTPUT); //IND  giro -
 
  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinMode(pinC, INPUT_PULLUP);
  pinMode(pinD, INPUT_PULLUP);
  pinMode(pinE,INPUT_PULLUP);  // checar entradas de interrupciones
  pinMode(pinF,INPUT_PULLUP);//
  
attachInterrupt(0,Achange,CHANGE);  //                   2
attachInterrupt(1,Bchange,CHANGE);                   //  3
attachInterrupt(2,Cchange,CHANGE);                   //  21
attachInterrupt(3,Dchange,CHANGE);                   //  20
attachInterrupt(4,Echange,CHANGE);                   //  19
attachInterrupt(5,Fchange,CHANGE);                   //  18

 
}
 
void loop()                     {

  val=0;
  val1=0;
 val = analogRead(motoi); // Durante todo el proceso interrogaremos
  val1 = analogRead(motod); // Durante todo el proceso interrogaremos
  vi= map(val, 0, 1023, -254, 254);  // probar con -254 y + 254    // val new Joystick 
  vd= map(val1, 0, 1023, -254, 254);  // probar con -254 y + 254
  ttime=micros();  // tiempo desde que corre en el micro 
  etime=ttime-timep;
  etime=ttime-timepp;
  // parte de los pots 
/*  var1 = analogRead(pt1); // Durante todo el proceso interrogaremos
 var2 = analogRead(pt2); // Durante todo el proceso interrogaremos
 var3 = analogRead(pt3); // Durante todo el proceso interrogaremos
 var4 = analogRead(pt4); // Durante todo el proceso interrogaremos
  th1= map(var1, 0, 1023, 300, 0); // ya esta en grados  ahora  a acoplar th1, ph1, th2, ph2;
  ph1= map(var2, 0, 1023, 300, 0); // faltaria acoplar con las varilla y definir su 0 
  th2= map(var3, 0, 1023, 300, 0); // checar funcion map 
  ph2= map(var4, 0, 1023, 300, 0); // */
  // transformación de cuentas a grados
  gri=(count1*360)/2382;
  grd=(count3*360)/2382;
  grb=(count2*360)/7900;

 Serial.print("\t");
Serial.print(gri);
Serial.print("\t");
Serial.print(grb);
Serial.print("\t");
Serial.print(grd);
Serial.print("\t");
Serial.print(vi);
Serial.print("\t");
Serial.println(vd);

    if(etime>500) { //Scheduler   //"tiempo de muestreo"  
 if (Serial.available() > 0) {
  // falta checar como mostrare los datos 
// Serial.print(count);
 //Serial.print(th1);
 //Serial.print("\t");
 //Serial.print(ph1);
 //Serial.print("\t");
 //Serial.print(th2);
 //Serial.print("\t");
 //Serial.println(ph2);
 //Serial.print("\t");
// Serial.print("\n");
  // Serial.print(vi);     //  valor de en medio 497  en y 
  //Serial.print(" ");
//  Serial.println(vd);
              // posiblemente agregar programa de IMU  para leer el compass     
        }
    }

   if (vi>255)
           vi=255;
   if (vi<-255)
           vi=-255;   
    if (vd>255)
           vd=255;
   if (vd<-255)
           vd=-255; 
  analogWrite(pwmi,abs(vi));
  analogWrite(pwmd,abs(vd));
  if ((vi < 70) && (vi >-70)){ // el valor en el que se encuentra posicionado


  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
                         }
                         
  
 else { if ((vi > 70)) // el valor en el que se encuentra posicionado
 { // así asignaremos una acción para una posicion deseada.

  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
 }
else { // así asignaremos una acción para una posicion deseada.

  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
 }
                      
 }
  if ((vd < 70) && (vd >-70)){ // el valor en el que se encuentra posicionado


  digitalWrite(4,LOW);
  digitalWrite(9,LOW);
                         }
 else {if (vd > 70) // el valor en el que se encuentra posicionado
 { // así asignaremos una acción para una posicion deseada.

  digitalWrite(4,HIGH);
  digitalWrite(9,LOW);
 }
else { // así asignaremos una acción para una posicion deseada.

  digitalWrite(4,LOW);
  digitalWrite(9,HIGH);
    }
      }
                                 }



  void Achange()
{   //lectura del encoder  abarcamos todos los casos posibles en la cuadratura del encoer
  A=digitalRead(2);
  B=digitalRead(3);
  if ((A == HIGH)&&(B == HIGH)) state1=0;
  if ((A == HIGH)&&(B == LOW)) state1=1;
  if ((A == LOW)&&(B == LOW)) state1=2;
  if ((A == LOW)&&(B == HIGH)) state1=3;
  indexx1=4*state1+statep1;
 count1=count1+QEM1[indexx1];
  statep1=state1;
  }

  void Bchange()
{
  A=digitalRead(2);
  B=digitalRead(3);
  if ((A == HIGH)&&(B == HIGH)) state1=0;
  if ((A == HIGH)&&(B == LOW)) state1=1;
  if ((A == LOW)&&(B == LOW)) state1=2;
  if ((A == LOW)&&(B == HIGH)) state1=3;
  indexx1=4*state1+statep1;
  count1=count1+QEM1[indexx1];
  statep1=state1;
  }

  void Cchange()
{   //lectura del encoder  abarcamos todos los casos posibles en la cuadratura del encoer
  C=digitalRead(21);  // cambiar pines  hay que checarlos
  D=digitalRead(20);
  if ((C == HIGH)&&(D == HIGH)) state2=0;
  if ((C == HIGH)&&(D == LOW)) state2=1;
  if ((C == LOW)&&(D == LOW)) state2=2;
  if ((C == LOW)&&(D == HIGH)) state2=3;
  indexx2=4*state2+statep2;
 count2=count2+QEM2[indexx2];
  statep2=state2;
  }

  void Dchange()
{
  C=digitalRead(21);  // cambiar pines  hay que checarlos
  D=digitalRead(20);
  if ((C == HIGH)&&(D == HIGH)) state2=0;
  if ((C == HIGH)&&(D == LOW)) state2=1;
  if ((C == LOW)&&(D == LOW)) state2=2;
  if ((C == LOW)&&(D == HIGH)) state2=3;
  indexx2=4*state2+statep2;
 count2=count2+QEM2[indexx2];
  statep2=state2;  
  }
  void Echange()
{   //lectura del encoder  abarcamos todos los casos posibles en la cuadratura del encoer
  E=digitalRead(19);  // 
  F=digitalRead(18);
  if ((E == HIGH)&&(F == HIGH)) state3=0;
  if ((E == HIGH)&&(F == LOW)) state3=1;
  if ((E == LOW)&&(F == LOW)) state3=2;
  if ((E == LOW)&&(F == HIGH)) state3=3;
  indexx3=4*state3+statep3;
 count3=count3+QEM3[indexx3];
  statep3=state3;
  }

 void Fchange()
{
  E=digitalRead(19);  // 
  F=digitalRead(18);
  if ((E == HIGH)&&(F == HIGH)) state3=0;
  if ((E == HIGH)&&(F == LOW)) state3=1;
  if ((E == LOW)&&(F == LOW)) state3=2;
  if ((E == LOW)&&(F == HIGH)) state3=3;
  indexx3=4*state3+statep3;
 count3=count3+QEM3[indexx3];
  statep3=state3; 
  }
