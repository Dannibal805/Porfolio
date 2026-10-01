#line 1 "C:/Users/julio/Documents/sensor de temperatura.c"

sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D7 at RB3_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D4 at RB0_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D7_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB0_bit;
void main( void )
{

unsigned int Radc, TemI;
float Tem;
char Text[16];


ADCON1 = 0b11000001;

Lcd_Init();

Lcd_Cmd(_LCD_CURSOR_OFF);

Lcd_Out( 1, 1, "Temperatura:");
while(1)
{

Radc = ADC_Read(0);

Tem = 0.244*Radc;

TemI = Tem;

IntToStr( TemI, Text );

Lcd_Out( 2, 1, Text);

delay_ms(100);
}
}
