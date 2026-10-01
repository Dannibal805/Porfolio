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






void main( void )
{
unsigned int Radc, TemI,Diso;
float Tem,DisI;
char Text[16];
ADCON1 = 0b11000001;
Lcd_Init();
Lcd_Cmd(_LCD_CURSOR_OFF);
Lcd_Out( 1, 1, "Temp:");
Lcd_Out( 2, 1, "Res:");


while(1)
{
Radc = ADC_Read(0);
Tem = 0.244*Radc;
Temi=Tem;
IntToStr( Temi, Text );
Lcd_Out( 1, 5, Text);
Radc= ADC_Read(1);
DisI = (Radc*48.87585533)/(5.0-Radc*0.004887585);
Diso=DisI   ;
IntToStr( Diso, Text);
Lcd_Out( 2, 5, Text );
delay_ms(100);
}
}
