/*Este programa fué implementado para realizar la adquisición de datos de un sensor de LM35 para una huevera ya que se realizó un datalogger por medio de Labview  y una visualización de datos en
 * "tiempo real"
 * El periodo de muestreo fue de 2 segundos ya que los sistemas térmicos son lentos en comparación con otros sistemas diámicos 
 * La referencia se mueve desde la interface de LabView 
 * 
 * 
 * 
 * 
 */




float tempC=0,tprom=0;
int tempPin = 2; // Definimos la entrada en pin A0
unsigned long TT=0;
unsigned long time1=0,timep,ttime,etime,timepp;
// setu=0;  //setu  valor en cuentas de encoder
float  kp=9.87026504016545, ki=0.264937464595288, kd=0;/// kp=2.81039550086614,ki=0.025777397238068,kd=0.02;  //ganancias que se sintoniza adecuadamente solo pidio un pd kp=.62,ki=0.12,kd=.02//                            // giro derecha giro izquierda
float ea=0,cin=0,de=0,error=0,ee;                 //errores  
int pwm=10,ref;                            //declaración de pin 
float u=0,ua=0,temp=0;
int win=15;  //wi 25 la ventana de paso se calcula con base al teorema de nyquiz
char setua,setu;
const long Interval=300;
void PID_HIPPIE();
void setup()
{
    // Abre puerto serial y lo configura a 9600 bps
    Serial.begin(9600);
    Serial.println("DHTxx test! and LM35");
    pinMode(pwm, OUTPUT);

}


void PID_HIPPIE(int set)   // función para el PID 
{
  error=set-tempC;
de=ea-error; // 
//u=kp*error+ki*cin sistema termico sale bien  ; 
u=(kp+ki)*error-kp*ea+ua;// LEYJ
ea=error;
ua=u;
if (abs(error)<win)      //solo entra con el PI  wind up to limiar la i
{cin+=error;}
else 
cin=0;
if (u>255)
u=255;
if (u<-255) //
u=0;//255-abs(u) el error disminuyo;  // asi estaba antes de LEYJ-255;               //limitación de PWM
analogWrite(pwm,abs(u));
  }


void loop()
{ 
  unsigned long CurMili=millis();
  if(CurMili-timep>=Interval){ 
  ttime=micros();  // tiempo desde que corre en el micro 
   TT=millis();
  etime=ttime-timep;
  etime=ttime-timepp;
  setua=setu;
  if(etime>20000)  //  //"tiempo de muestreo"  
  { if (Serial.available() > 0) {
                setu = Serial.read();
                
        }

  
      if(setu=='a'){
        ref=30;}
        if(setu=='b'){ref=29;}
    tempC = analogRead(tempPin); 
    // Convierte el valor a temperatura
    tempC = tempC*5*100/1024;//(5 * tempC * 10.0)/1024.0;
    tprom=tprom+tempC;
    temp=++temp;
    
    if(temp>=20){
       tprom=tprom/20;
    Serial.print(tprom); //
    Serial.print("\54") ;
    Serial.print(u);
    Serial.print("\54") ; 
    Serial.print("pwm");
    Serial.print("\54") ;
    Serial.print(error); 
    Serial.print("\54") ;
    Serial.print("Error");
    Serial.print(timep); 
    Serial.print("\54") ;
    Serial.println("tiempo");
   PID_HIPPIE(ref); // se pone la referencia del controlador 
   tprom=0;
   temp=0;
    }
  } 
  }
}
