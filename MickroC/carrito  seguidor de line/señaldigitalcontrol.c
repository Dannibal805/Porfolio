
void main ()
{
    unsigned int sensorizquierda,sensorcentro,sensorderecha ; //se declaran variables
    char Text[16];
    float sizquierda,scentro,sderecha;
    unsigned short potencia=0, potencia1=0;  // Se declara el duty  iniciando en 0

//ADCON1 = 0b11000001; //voltaje de referencia arreglo con resistencias
Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);
OPTION_REG = 0;
PWM1_Init(250);                 //se inicializa PWM a la minima frecuencia
PWM1_Start();
PWM1_Set_Duty(0);
PWM2_Init(250);
PWM2_Start();
PWM2_Set_Duty(0);

TRISC.F0=1;
TRISC.F3=1;
ANSEL  = 0;          //Se comvierten puertos  analoguicos como diguitales
ANSELH  = 0;
TRISB=0b11101111;    // Configura los  bits  como salida.
PORTB.F5=0;             //se  configura como entrada
PORTB.F6=0;
PORTB.F7=0;
PORTB.F4=0;
Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);


while( 1 )
{

if(( PORTC.F0==1)&&( PORTC.F3==1))      //si sensor izquierda y sensor derecha detecta    su  100%  en los motores es
               { potencia=255;
                 potencia1=255;
               PWM1_Set_Duty(potencia);
                 PWM2_Set_Duty(potencia1);

                 Lcd_Out(1, 1," Mderecha 100%");
                 Lcd_Out(2, 1," Mizquierdo 100%");
               }

else { if(( PORTC.F0==0)&&( PORTC.F3==1))        //si solo detecta sensor  izquierda   Motor derecha es a 100%
        { potencia=0;
          potencia1=255;
         PWM1_Set_Duty(potencia);
         PWM2_Set_Duty(potencia1);

         Lcd_Out(1, 1," GIRO izquierda  ");
                  }
       else { if(( PORTC.F0==1)&&( PORTC.F3==0))   // si solo detecta sensor  Derecha Motor izquierda es a 100%
               {    potencia=255;
                    potencia1=0;
                PWM1_Set_Duty(potencia);
                PWM2_Set_Duty(potencia1);

               Lcd_Out(1, 1," GIRO Derecha ");
                             }
                 else{
                PWM1_Set_Duty(0);                        //si no detecta  linea blanca   0%  en  motores es
                PWM2_Set_Duty(0);

                Lcd_Out(1, 1,"     APAGADO    ");
                Lcd_Out(2, 1,"                ");
                }
             }
}
                   }
                  }
