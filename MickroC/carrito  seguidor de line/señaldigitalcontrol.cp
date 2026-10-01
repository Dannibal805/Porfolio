#line 1 "C:/Users/Daniel/Documents/upp/5cuatri/microcontroladores/carrito  seguidor de line/señaldigitalcontrol.c"

void main ()
{
 unsigned int sensorizquierda,sensorcentro,sensorderecha ;
 char Text[16];
 float sizquierda,scentro,sderecha;
 unsigned short potencia=0, potencia1=0;


Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);
OPTION_REG = 0;
PWM1_Init(250);
PWM1_Start();
PWM1_Set_Duty(0);
PWM2_Init(250);
PWM2_Start();
PWM2_Set_Duty(0);

TRISC.F0=1;
TRISC.F3=1;
ANSEL = 0;
ANSELH = 0;
TRISB=0b11101111;
PORTB.F5=0;
PORTB.F6=0;
PORTB.F7=0;
PORTB.F4=0;
Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);


while( 1 )
{

if(( PORTC.F0==1)&&( PORTC.F3==1))
 { potencia=255;
 potencia1=255;
 PWM1_Set_Duty(potencia);
 PWM2_Set_Duty(potencia1);

 Lcd_Out(1, 1," Mderecha 100%");
 Lcd_Out(2, 1," Mizquierdo 100%");
 }

else { if(( PORTC.F0==0)&&( PORTC.F3==1))
 { potencia=0;
 potencia1=255;
 PWM1_Set_Duty(potencia);
 PWM2_Set_Duty(potencia1);

 Lcd_Out(1, 1," GIRO izquierda  ");
 }
 else { if(( PORTC.F0==1)&&( PORTC.F3==0))
 { potencia=255;
 potencia1=0;
 PWM1_Set_Duty(potencia);
 PWM2_Set_Duty(potencia1);

 Lcd_Out(1, 1," GIRO Derecha ");
 }
 else{
 PWM1_Set_Duty(0);
 PWM2_Set_Duty(0);

 Lcd_Out(1, 1,"     APAGADO    ");
 Lcd_Out(2, 1,"                ");
 }
 }
}
 }
 }
