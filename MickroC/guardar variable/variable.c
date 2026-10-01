unsigned int keypadPort  at PORTB;
unsigned short kp,cnt,k;
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
void main(void)
 {
keypad_Init();
 Lcd_init();
 Lcd_Cmd(_LCD_CURSOR_OFF);
 Lcd_out(1,1,"push the button:");
 Lcd_out(2,1,"Daniel");
 Delay_ms(900);
 for(k=0;k<30; k++) {               // Move text to the right 4 times
  Lcd_Cmd(_LCD_SHIFT_RIGHT);
    Delay_ms(2000);
    }
  Lcd_Cmd(_LCD_CLEAR);
do{
kp=0;
do
kp=keypad_key_click();
while (!kp);
switch (kp)
{
case 1: kp= 68;break;
case 2: kp= 65;break;
case 3: kp= 78;break;
case 4: kp= 73;break;
case 5: kp=69;break;
case 6: kp=76;break;
case 7: kp=49;break;
case 8: kp=50;break;
case 9: kp=51;break;
case 10: kp=52;break;
case 11: kp=53;break;
case 12: kp=54;break;
case 13: kp=55;break;
case 14: kp=56;break;
case 15: kp=57;break;
case 16: kp=126;break; //Tecla no pulsada.
}
 //Se lee el teclado y su resultado se guarda en Tecla.
Lcd_Chr(2,1,kp);
}
while (1);
}
