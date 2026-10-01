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



void main ()
{
    unsigned int sensorizquierda,sensorcentro,sensorderecha ;
    char Text[16];
    float sizquierda,scentro,sderecha;
    unsigned short potencia, potencia1;

//ADCON1 = 0b11000001; //voltaje de referencia arreglo con resistencias
Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);
Lcd_Out( 1, 1, " M i:");
Lcd_Out( 2, 1, " M d");
OPTION_REG = 0;
PWM1_Init(250);
PWM1_Start();
PWM1_Set_Duty(0);
PWM2_Init(250);
PWM2_Start();
PWM2_Set_Duty(0);

while (1)
{
sensorizquierda = ADC_Read(0);
sizquierda=sensorizquierda;

sensorcentro = ADC_Read(1);
scentro = sensorcentro ;

sensorderecha = ADC_Read(2);
sderecha = sensorderecha ;

IntToStr( sizquierda, Text);
Lcd_out (1,6,Text);
delay_ms(100);
IntToStr( sderecha,Text);
Lcd_out (2,6,Text);
delay_ms(300);

if((sizquierda >=420)&&(sderecha<=70))
{
       potencia=100;
       potencia1=25;
       Lcd_Out(2, 1," 39.21%");
         PWM1_Set_Duty(potencia);
                 PWM2_Set_Duty(potencia1);
            }
else {  if(( sizquierda<=70)&&(sderecha>=420 ))
        {
        potencia=25;
        potencia1=100;
         Lcd_Out(2, 1," 39.21%");
         PWM1_Set_Duty(potencia);
                 PWM2_Set_Duty(potencia1);
       }

else { if((sizquierda>=420)&&(sderecha>=420))
               {
              potencia= 127;
               potencia1=127; Lcd_Out(2,1,"50%") ;
                     PWM1_Set_Duty(potencia);
                 PWM2_Set_Duty(potencia1=23);
                 }
                  }
                  }
                   }
                  }
