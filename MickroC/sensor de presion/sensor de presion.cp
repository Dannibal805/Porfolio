#line 1 "C:/Users/Daniel/Documents/upp/5cuatri/microcontroladores/sensor de presion/sensor de presion.c"
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

unsigned int Radc, PreI;
float Pre;
char Text[16];

Lcd_Init();

Lcd_Cmd(_LCD_CURSOR_OFF);

Lcd_Out( 1, 1, "Presion en KPa:");
while(1)
{

Radc = ADC_Read(0);

Pre = 0.10861*Radc+10,5555;

PreI = Pre;

IntToStr( PreI, Text );

Lcd_Out( 2, 1, Text);

delay_ms(100);
}
}
