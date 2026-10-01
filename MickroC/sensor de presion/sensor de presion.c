sbit LCD_RS at RD1_bit;
sbit LCD_EN at RD2_bit;
sbit LCD_D7 at RD7_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D4 at RD4_bit;
//Definición de los TRIS del LCD
sbit LCD_RS_Direction at TRISD1_bit;
sbit LCD_EN_Direction at TRISD2_bit;
sbit LCD_D7_Direction at TRISD7_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D4_Direction at TRISD4_bit;
void main( void )
{
//Declaración de variables.
unsigned int Radc, PreI;
float Pre;
char Text[16];
//Inicio del LCD.
Lcd_Init();
//Borrado del cursor.
Lcd_Cmd(_LCD_CURSOR_OFF);
//Impresión de texto.
Lcd_Out( 1, 1, "Presion en KPa:");
while(1) //Bucle infinito.
{
//Lectura del canal 0 del ADC.
Radc = ADC_Read(0);
//Uso de la ecuación (13.9).
Pre = 0.10861*Radc+10,5555;
//Se forza el resultado a la parte entera.
PreI = Pre;
//Se convierte el número entero a una cadena de caracteres.
IntToStr( PreI, Text );
//Se imprime el resultado.
Lcd_Out( 2, 1, Text);
//Retardo de 100m segundos.
delay_ms(100);
}
}
