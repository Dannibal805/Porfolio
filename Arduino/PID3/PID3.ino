
long count=0, count1=0, count2=0;// cuentas del encoder
unsigned long timep,ttime,etime,timepp;
const float pi = 3.141516;
boolean A,B,C, D, E, F;
byte state,statep,indexx,state1,statep1,indexx1,state2,statep2,indexx2;
float grados[3]={0,0,0};
int setu[3]= {10,15,20};   // setu = gd  referencias
int gd=15, rpm=0, conv=0;
int QEM[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};
int QEM1[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};
int QEM2[16]={0,-1,0,1,1,0,-1,0,0,1,0,-1,-1,0,1,0};

//// Ganancias de los controladores////
float kp[3]={1.3123,2.56,3};
float ki[3]={0.25,0.36,0.1230};
float kd[3]={0.2,0.356,0.4312};//kp= 1.31904,ki=0,kd= 0.000241, rad=0;   //kp=.62,ki=.12,kd=.2;  ganancias que se sintoniza adecuadamente solo pidio un pd  kp= 0.0092
int   INA, INB;                             // giro derecha giro izquierda
int ea[3]={0,0,0},cin[3]={0,0,0},de[3]={0,0,0},error[3]={0,0,0};                 //errores  
int pwm=9, pwm1=10, pwm2= 11;                            //declaración de pin   para la salida del PWM
float u[3]={0,0,0}, r=0, ca=0,co=0,Q1=0, hi=0, C3=0,Q3=0, Q2= 0;
float QD[3]={0.9828,1.441,-2.69};
float l1=0.190, l2=0.04, l3=0.110, l4=0.210, l5=0.05; // longitudes de eslabònes
//float Q[3]={0.06, 0.078, 0.08};  // puntos
int win[3]={25,15,20};  //win up                ventana  de espacio estacionario   

// inicialización de funciones//
void Achange();                        //subrutinas lectura de encoder
void Bchange();
void Cchange();                        //subrutinas lectura de encoder
void Dchange();
void Echange();                        //subrutinas lectura de encoder
void Fchange();
 float radtograde();
void setup ()
{
Serial.begin(9600);
pinMode(2,INPUT);   // entradas son interrupciones para los encoders
pinMode(3,INPUT);
pinMode(18,INPUT);
pinMode(19,INPUT);
pinMode(20,INPUT);
pinMode(21,INPUT);                // final de lec enco
pinMode(7,OUTPUT);            // gder
pinMode(8,OUTPUT);            // gizq 
pinMode(9,OUTPUT);       // pwm 
pinMode(10,OUTPUT);      //pwm1
pinMode(11,OUTPUT);   // pwm2

pinMode(13,OUTPUT);  // gder1
pinMode(14,OUTPUT);  //gizq1
pinMode(15,OUTPUT);  //gder2
pinMode(16,OUTPUT);  //gizq2
attachInterrupt(0,Achange,CHANGE);
attachInterrupt(1,Bchange,CHANGE);
attachInterrupt(4,Cchange,CHANGE);
attachInterrupt(5,Dchange,CHANGE);
attachInterrupt(3,Echange,CHANGE);
attachInterrupt(2,Fchange,CHANGE);

}

// cinematica inversa
//void invrs( int x, int y){
//  
////codo Arriba
//r=sqrt(x^2+y^2);  //x^2+y^2
//ca=r-l2; 
////co=z-l1; 
////Q1 = atan2(Q(2),Q(1)); // y/x
////hi=sqrt(ca^2+co^2);
////C3 =((-hi^2+l3^2+l4^2)/(-2*l4*l3));
////Q3= atan2(-sqrt(1-C3^2),C3); //Codo Arriba
////Q2=atan2(co,ca)-atan2(l4*sin(Q3),l3+l4*cos(Q3));
//  
//  }


// función para ley de control
void PID_HIPPIE(int set[3])   
{ 
    //Serial.println('a');
  for(int i=0; i<=3;i++){
  error[i]=set[i]-grados[i];
  //Serial.println(error[i]);
de[i]=ea[i]-error[i]; // corregir con respecto al tiempo error actual 
u[i]=kp[i]*error[i]+ki[i]*cin[i]+kd[i]*de[i];
ea[i]=error[i];
if (abs(error[i])<win[i])      //solo entra con el PID
{cin[i]+=error[i];}
else 
cin[i]=0;
if (u[i]>255)
u[i]=255;
if (u[i]<-255)
u[i]=-255;               //limitación de PWM
  }
analogWrite(pwm,abs(u[0]));
analogWrite(pwm1,abs(u[1]));
analogWrite(pwm2,abs(u[2]));

  

if (u[0]<0){                   //giro derecha giro izquierda  dependiente de la u 
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  }else{
    digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  }

  if (u[1]<0){                   //giro derecha giro izquierda  dependiente de la u 
  digitalWrite(13,HIGH);
  digitalWrite(14,LOW);
  }else{
    digitalWrite(13,LOW);
  digitalWrite(14,HIGH);
  }

  if (u[2]<0){                   //giro derecha giro izquierda  dependiente de la u 
  digitalWrite(15,HIGH);
  digitalWrite(16,LOW);
  }else{
    digitalWrite(15,LOW);
  digitalWrite(16,HIGH);
  }
  }
  
  
void loop() {
  ttime=micros();  // tiempo desde que corre en el micro 
  etime=ttime-timep;
  etime=ttime-timepp;
  if(etime>20000)  //Scheduler   //"tiempo de muestreo"  
  { if (Serial.available() > 0) {
    
        }



//Impresión por medio del serial las variables de control (u(i)), error(i)
   Serial.print(u[0]);
 Serial.print("\t");
//
   Serial.print(u[1]);
 Serial.print("\t");
//
    Serial.print(u[2]);
 Serial.print("\t");
//
     Serial.print(error[0]);
 Serial.print("\t");
//
     Serial.print(error[1]);
 Serial.print("\t");
//
     Serial.print(error[2]);
 Serial.println("\t");

 
 //Del grande grados=(count*360)/2280;  //transformación de  cuentas a grados   
// grados=(count*360)/516;

 grados[0]=(count*360)/516;
 grados[1]=(count1*360)/516;
 grados[2]=(count2*360)/516;

//  rad= (0.0174*grados);
//for(int i=0; i==3;i++){
//  Serial.print(grados[0]);
//     //Serial.print(  rad);
//      Serial.print("\t"); 
//      Serial.print(grados[1]); 
//           Serial.print("\t"); 
//              Serial.println(grados[2]);
               
//   Serial.println(error);  
 
    timep=ttime;
    //analogWrite(pwm,u[0]);
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


  void Cchange()
{   //lectura del encoder  abarcamos todos los casos posibles en la cuadratura del encoer
  C=digitalRead(18);
  D=digitalRead(19);
  if ((C == HIGH)&&(D == HIGH)) state1=0;
  if ((C == HIGH)&&(D == LOW)) state1=1;
  if ((C == LOW)&&(D == LOW)) state1=2;
  if ((C == LOW)&&(D == HIGH)) state1=3;
  indexx1=4*state1+statep1;
 count1=count1+QEM1[indexx1];
  statep1=state1;
  }

  void Dchange()
{
  C=digitalRead(18);
  D=digitalRead(19);
  if ((C == HIGH)&&(D == HIGH)) state1=0;
  if ((C == HIGH)&&(D == LOW)) state1=1;
  if ((C == LOW)&&(D == LOW)) state1=2;
  if ((C == LOW)&&(D == HIGH)) state1=3;
  indexx1=4*state1+statep1;
  count1=count1+QEM1[indexx1];
  statep1=state1;
  }


  

  void Echange()
{   //lectura del encoder  abarcamos todos los casos posibles en la cuadratura del encoer
  E=digitalRead(20);
  F=digitalRead(21);
  if ((E == HIGH)&&(F == HIGH)) state2=0;
  if ((E == HIGH)&&(F == LOW)) state2=1;
  if ((E == LOW)&&(F== LOW)) state2=2;
  if ((E == LOW)&&(F == HIGH)) state2=3;
  indexx2=4*state2+statep2;
 count2=count2+QEM2[indexx2];
  statep2=state2;
  }

  void Fchange()
{
  E=digitalRead(20);
  F=digitalRead(21);
  if ((E == HIGH)&&(F == HIGH)) state2=0;
  if ((E == HIGH)&&(F == LOW)) state2=1;
  if ((E == LOW)&&(F == LOW)) state2=2;
  if ((E == LOW)&&(F == HIGH)) state2=3;
  indexx2=4*state2+statep2;
  count2=count2+QEM2[indexx2];
  statep2=state2;
  }


// función para transformar radianes a grados///
  float radtograde(float m){
    float grd=0;
    grd= m*180/pi;
    return grd;
    
    }
  
