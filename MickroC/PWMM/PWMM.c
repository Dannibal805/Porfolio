sbit LCD_RS at RD1_bit;
sbit LCD_EN at RD2_bit;
sbit LCD_D7 at RD7_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D4 at RD4_bit;

sbit LCD_RS_Direction at TRISD1_bit;
sbit LCD_EN_Direction at TRISD2_bit;
sbit LCD_D7_Direction at TRISD7_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D4_Direction at TRISD4_bit;

int potencia=0;

char motor(void) {

if(( PORTB.F0==0)&&( PORTB.F4==0))
               {
       potencia=178; Lcd_Out(2, 1," 70%");
               }

else { if(( PORTB.F1==0)&&( PORTB.F4==0))
        {
      potencia=204; Lcd_Out(2, 1," 80%");
                  }
       else { if(( PORTB.F2==0)&&( PORTB.F4==0))
               {   potencia=230; Lcd_Out(2, 1," 85%");
                             }

                   else { if(( PORTB.F3==0)&&( PORTB.F4==0))
                         {  potencia=255;Lcd_Out(2, 1,"100%");
                             }
                 else{
                       Lcd_Out(2, 1,"  0%"); potencia=0;
                       }
                        }

             }
        }
}


void main ()

{
TRISC.F0=1;
TRISC.F3=1;
ANSEL  = 0;
ANSELH  = 0;
TRISB=0b11101111;
PORTB.F5=0;
PORTB.F6=0;
PORTB.F7=0;
PORTB.F4=0;
Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);

OPTION_REG = 0;
PWM1_Init(500);
PWM1_Start();
PWM1_Set_Duty(0);
PWM2_Init(500);
PWM2_Start();
PWM2_Set_Duty(0);
while( 1 )
{

if(( PORTC.F0==1)&&( PORTC.F3==1))
               { PWM1_Set_Duty(0);
                 PWM2_Set_Duty(0);

                 Lcd_Out(1, 1,"     ERROR      ");
                 Lcd_Out(2, 1,"                ");
               }

else { if(( PORTC.F0==0)&&( PORTC.F3==1))
        {    motor();
         PWM1_Set_Duty(potencia);
         PWM2_Set_Duty(0);

         Lcd_Out(1, 1," GIRO DERECHA   ");
                  }
       else { if(( PORTC.F0==1)&&( PORTC.F3==0))
               {    motor();
                PWM1_Set_Duty(0);
                PWM2_Set_Duty(potencia);

               Lcd_Out(1, 1," GIRO IZQUIERDA ");
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
