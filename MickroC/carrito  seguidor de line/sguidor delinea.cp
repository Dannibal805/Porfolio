#line 1 "C:/Users/Daniel/Documents/upp/5cuatri/microcontroladores/carrito  seguidor de line/sguidor delinea.c"
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
 unsigned int Radc,sensorizquierda,sensorcentro,sensorderecha ;
 char Text[16];
 float sizquierda,scentro,sderecha;
 int potencia=0;

Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);
Lcd_Out( 1, 1, " M izqui:       ");
Lcd_Out( 2, 1, " M dere :       ");

while (1)
{
Radc = ADC_Read(0);
sensorizquierda = Radc;
sizquierda=sensorizquierda;
Radc = ADC_Read(1);
sensorcentro =Radc;
scentro = sensorcentro ;
Radc = ADC_Read(2);
sensorderecha = Radc;
sderecha = sensorderecha ;
IntToStr( sizquierda, Text);
Lcd_out (1,10,Text);
delay_ms(100);
IntToStr( sderecha,Text);
Lcd_out (2,10,Text);
delay_ms(50);
}
}
