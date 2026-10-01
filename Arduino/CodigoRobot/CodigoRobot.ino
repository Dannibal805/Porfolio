/* Este codigo se realizo para un robot de 6GDL (grade to liberty ) el codigo puesto va desde lectura de los encoders, habilitación de pines disponibles, control de motores 
 * las interrupciones se usaron todas las que permite el arduno MEGA   
 *  esté es la primera parte del programa que se acopla a una seríe de programas con los cuales permite realizar un control de trayectoria con los robots  por medio de  diferentes controladores
 *  como fueron PID, PD, PD +G   y el seguimiento de tracking por medio de par conpensado 
 */


volatile int estadoA= LOW;
volatile int estadoB= LOW;

volatile int estadoA1= LOW;
volatile int estadoB1= LOW;

volatile int estadoA2= LOW;
volatile int estadoB2= LOW;

volatile int estadoA3= LOW;
volatile int estadoB3= LOW;

volatile int estadoA4= LOW;
volatile int estadoB4= LOW;

volatile int estadoA5= LOW;
volatile int estadoB5= LOW;

///////Referencias///////
float ref=10, ref1=10, ref2=10, ref3=90, ref4=90, ref5=180;
/////////////////////////

long int n=0, n1=0, n2=0, n3=0, n4=0, n5=0;
float u=0, u1=0, u2=0, u3=0, u4=0, u5=0;
float grados=0, grados_1=0, grados_2=0, grados_3=0, grados_4=0, grados_5=0;
float velocidad=0, vel_1=0, vel_2=0, vel_3=0, vel_4=0, vel_5=0;
float p2=0, p1=0, p1_1=0, p2_1=0, p1_2=0, p2_2=0, p1_3=0, p2_3=0, p1_4=0, p2_4=0, p1_5=0, p2_5=0;
float tiempo;

/////Ganancias/////
float kp=16.3,  kd=11;
float kp1=38.4, kd1=15.7;
float kp2=24.8, kd2=12.3;
float kp3=24.8, kd3=12.3;
float kp4=4.9, kd4=1.5;
float kp5=4.13, kd5=1.5;
//////////////////

//motor 1
#define IN4 7 //antihorario
#define IN3 8 ///Horario
#define ENB 9 //PWM
//motor 2
#define IN4_1 4 //antihorario
#define IN3_1 5 ///Horario
#define ENB_1 6 //PWM
//motor 3
#define IN4_2 11 //antihorario
#define IN3_2 10 ///Horario
#define ENB_2 12 //PWM
//motor 4
#define IN4_3 51 //antihorario
#define IN3_3 49 ///Horario
#define ENB_3 53 //PWM
//motor 5
#define IN4_4 28 //antihorario
#define IN3_4 30 ///Horario
#define ENB_4 26 //PWM
//motor 6
#define IN4_5 39 //antihorario
#define IN3_5 41 ///Horario
#define ENB_5 43 //PWM
void setup()
{
 Serial.begin(9600);
 //Puente H motor 1
 pinMode (ENB, OUTPUT); 
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
 //Puente H motor 2
 pinMode (ENB_1, OUTPUT); 
 pinMode (IN3_1, OUTPUT);
 pinMode (IN4_1, OUTPUT);
 //Puente H motor 3
 pinMode (ENB_2, OUTPUT); 
 pinMode (IN3_2, OUTPUT);
 pinMode (IN4_2, OUTPUT);
 //Puente H motor 4
 pinMode (ENB_3, OUTPUT); 
 pinMode (IN3_3, OUTPUT);
 pinMode (IN4_3, OUTPUT);
 //Puente H motor 5
 pinMode (ENB_4, OUTPUT); 
 pinMode (IN3_4, OUTPUT);
 pinMode (IN4_4, OUTPUT);
  //Puente H motor 5
 pinMode (ENB_5, OUTPUT); 
 pinMode (IN3_5, OUTPUT);
 pinMode (IN4_5, OUTPUT);
 
 //encoder 1
 attachInterrupt(2, canalA, RISING);
 attachInterrupt(3, canalB, CHANGE);
 //encoder 2
 attachInterrupt(18, canalA1, RISING);
 attachInterrupt(19, canalB1, CHANGE);
 //encoder 3
 attachInterrupt(14, canalA2, RISING);
 attachInterrupt(15, canalB2, CHANGE);
 //encoder 4
 attachInterrupt(16, canalA3, RISING);
 attachInterrupt(17, canalB3, CHANGE);
 //encoder 5
 attachInterrupt(22, canalA4, RISING);
 attachInterrupt(23, canalB4, CHANGE);
 //encoder 6
 attachInterrupt(33, canalA5, RISING);
 attachInterrupt(31, canalB5, CHANGE);
}

void loop()
{
  tiempo = millis()/1000;
  ////////////////VELOCIDAD//////////////
  grados = (360*n)/2378;
  grados_1 = (360*n1)/11468; //11468   //764
  grados_2 = (360*n2)/2378;
  grados_3 = (360*n3)/2378;
  grados_4 = (360*n4)/764;
  grados_5 = (360*n5)/764;
  
  p1= grados;
  p1_1=grados_1;
  p1_2=grados_2;
  p1_3=grados_3;
  p1_4=grados_4;
  p1_5=grados_5;
  delay(10);
  
  grados = (360*n)/2378;
  grados_1=(360*n1)/11468;  //11468 //764
  grados_2=(360*n2)/2378;
  grados_3=(360*n3)/2378;
  grados_4=(360*n4)/764;
  grados_5=(360*n5)/764;
  
  p2=grados;
  p2_1=grados_1;
  p2_2=grados_2;
  p2_3=grados_3;
  p2_4=grados_4;
  p2_5=grados_5;
  
  velocidad=((p1-p2)/ 0.0010)/1000;
  vel_1=((p1_1-p2_1)/ 0.0010)/1000;
  vel_2=((p1_2-p2_2)/ 0.0010)/1000;
  vel_3=((p1_3-p2_3)/ 0.0010)/1000;
  vel_4=((p1_4-p2_4)/ 0.0010)/1000;
  vel_5=((p1_5-p2_5)/ 0.0010)/1000;
  ////////////////FIN//////////////////

  ////////LIMITACIONES GRADOS//////////
  //para el primer motor
  if(grados>360){grados=360;}
  if(grados<-360){grados=-360;}
  Serial.print(grados);
  Serial.print("\t");
  
  //para el segundo motor
  if(grados_1>360){grados_1=360;}
  if(grados_1<-360){grados_1=-360;}
  Serial.print(grados_1);
  Serial.print("\t");
  
  //para el tercer motor
  if(grados_2>360){grados_2=360;}
  if(grados_2<-360){grados_2=-360;}
  Serial.print(grados_2);
  Serial.print("\t");
  
  //para el cuarto motor
  if(grados_3>360){grados_3=360;}
  if(grados_3<-360){grados_3=-360;}
  Serial.print(grados_3);
  Serial.print("\t");
  
  //para el quinto motor
  if(grados_4>360){grados_4=360;}
  if(grados_4<-360){grados_4=-360;}
  Serial.print(grados_4);
  Serial.print("\t");

  //para el sexto motor
  if(grados_5>360){grados_5=360;}
  if(grados_5<-360){grados_5=-360;}
  Serial.println(grados_5);
  //Serial.println("\t");
  ///////////////////////FIN///////////////////////////

  ////////////SEÑAL DE CONTROL///////////////////////////////////
  u  = (kp*(ref - grados) + kd*(0 - velocidad));   //primer motor
  u1 = (kp1*(ref1 - grados_1) + kd1*(0 - vel_1)); //segundo motor
  u2 = (kp2*(ref2 - grados_2) + kd2*(0 - vel_2)); //tercer motor
  u3 = (kp3*(ref3 - grados_3) + kd3*(0 - vel_3)); //cuarto motor
  u4 = (kp4*(ref4 - grados_4) + kd4*(0 - vel_4)); //quinto motor
  u5 = (kp5*(ref5 - grados_5) + kd5*(0 - vel_5)); //quinto motor
  //////////////////////FIN//////////////////////////////////////
  
  ////////LIMITACIONES SEÑAL U////////////
  
  //Para el primer motor
  if(u>255){u=255;}
  if(u<-255){u=-255;}
  
  //Para el segundo motor
  if(u1>255){u1=255;}
  if(u1<-255){u1=-255;}
  
  //Para el tercer motor
  if(u2>255){u2=255;}
  if(u2<-255){u2=-255;}
  
  //Para el cuarto motor
  if(u3>255){u3=255;}
  if(u3<-255){u3=-255;}

  //Para el quinto motor
  if(u4>255){u4=255;}
  if(u4<-255){u4=-255;}

   //Para el quinto motor
  if(u5>255){u5=255;}
  if(u5<-255){u5=-255;}
  ////////////////FIN////////////////////

  /////////Impresiones////////////////////
  /*Serial.print(ref);
  Serial.print("\t");
  Serial.print(ref1);
  Serial.print("\t");
  /*Serial.print(u);
  Serial.print("\t");*/
  //Serial.print(u5);
  //Serial.print("\t");
  //Serial.println(n5);
  ////////////////FIN////////////////////

  //////////////SENTIDO DE GIRO/////////////////
    if (u > 0){
    //Gira en un sentido Antihorario
    digitalWrite (IN4, LOW);
    digitalWrite (IN3, HIGH);
    analogWrite(ENB,u); 
  }
  else{
    //Gira en un sentido Horario
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENB,-1*u); 
  }
  //////Para el motor 2//////
      if (u1 > 0){
    //Gira en un sentido Antihorario
    digitalWrite(IN3_1, LOW);
    digitalWrite(IN4_1, HIGH);
    analogWrite(ENB_1,u1); 
  }
  else{
    //Gira en un sentido Horario
    digitalWrite(IN4_1, LOW);
    digitalWrite(IN3_1, HIGH);
    analogWrite(ENB_1,-1*u1); 
  }
   //////Para el motor 3//////
      if (u2 > 0){
    //Gira en un sentido Antihorario
    digitalWrite(IN3_2, LOW);
    digitalWrite(IN4_2, HIGH);
    analogWrite(ENB_2,u2);
  }
  else{
    //Gira en un sentido Horario
    digitalWrite(IN4_2, LOW);
    digitalWrite(IN3_2, HIGH);
    analogWrite(ENB_2,-1*u2); 
  }
  //////Para el motor 4//////
      if (u3 > 0){
    //Gira en un sentido Antihorario
    digitalWrite(IN3_3, LOW);
    digitalWrite(IN4_3, HIGH);
    analogWrite(ENB_3,u3);
  }
  else{
    //Gira en un sentido Horario
    digitalWrite(IN4_3, LOW);
    digitalWrite(IN3_3, HIGH);
    analogWrite(ENB_3,-1*u3); 
  }
   //////Para el motor 5//////
      if (u4 > 0){
    //Gira en un sentido Antihorario
    digitalWrite(IN3_4, LOW);
    digitalWrite(IN4_4, HIGH);
    analogWrite(ENB_4,u4);
  }
  else{
    //Gira en un sentido Horario
    digitalWrite(IN4_4, LOW);
    digitalWrite(IN3_4, HIGH);
    analogWrite(ENB_4,-1*u4); 
  }
   //////Para el motor 6//////
      if (u5 > 0){
    //Gira en un sentido Antihorario
    digitalWrite(IN3_5, LOW);
    digitalWrite(IN4_5, HIGH);
    analogWrite(ENB_5,u5);
  }
  else{
    //Gira en un sentido Horario
    digitalWrite(IN4_5, LOW);
    digitalWrite(IN3_5, HIGH);
    analogWrite(ENB_5,-1*u5); 
  }
  ////////////////////FIN//////////////////////
 
}

////////////////////ENCODERS//////////////////////
void canalA(){
  if(estadoB==0){
       n--;
       }
  else{
        n++;
      }
}
void canalB(){
  estadoB= digitalRead(3);
}

////para el motor 2////////
void canalA1(){
  if(estadoB1==0){
       n1--;
       }
  else{
        n1++;
      }
}
void canalB1(){
  estadoB1= digitalRead(19);
}
////para el motor 3////////
void canalA2(){
  if(estadoB2==0){
       n2--;
       }
  else{
        n2++;
      }
}
void canalB2(){
  estadoB2= digitalRead(15);
}
////para el motor 4////////
void canalA3(){
  if(estadoB3==0){
       n3--;
       }
  else{
        n3++;
      }
}
void canalB3(){
  estadoB3= digitalRead(17);
}
////para el motor 5////////
void canalA4(){
  if(estadoB4==0){
       n4--;
       }
  else{
        n4++;
      }
}
void canalB4(){
  estadoB4= digitalRead(23);
}
////para el motor 6////////
void canalA5(){
  if(estadoB5==0){
       n5--;
       }
  else{
        n5++;
      }
}
void canalB5(){
  estadoB5= digitalRead(31);
}
///////////////////////FIN/////////////////////////
