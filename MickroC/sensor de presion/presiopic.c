#include "C:\Users\Daniel\Documents\upp\5cuatri\microcontroladores\sensor de presion\presiopic.h"
#include <LCD.C>

#include <16F887.h>
#device adc=10
#Fuses XT,NOWDT
#Fuses
#use delay(clock=4000000)
#include <math.h>
#BYTE TRISA = 0x85
#BYTE PORTA = 0x05
#define LCD_ENABLE_PIN PIN_D2
#define LCD_RS_PIN PIN_D1
#include <lcd.c>
void main()
{
   int16 q;
   float tv,tr,temp,y,tf,error,
   float p,presion,pres_atm,pres_psi,alt;
   
   int cnt=0;
   bit_set (TRISA,2);
   setup_adc_ports(RA0_RA1_RA3_analog);
   lcd_init();
   for(;;){
   set_adc_channel(0);
   delay_us(20);
   q = read_adc();
   p =5.0 * q /1024.0;
   presion = (0.475+p)/0.045;
   
   set_adc_channel(1);
   delay_us(20);
   q = read_adc();
   tv =5.0 *q /1024.0;
   y =log(tr/2000.0);
   y = (1.0/289.15) +(y*(1.0/4050.0));
   temp=1.0/y;
   temp = temp -273.15;
      if (temp>=0 && temp<=85) TF=1.0;
      else TF=3.0;
   ERROR = TF*1.5;
   presion=presion-ERROR;
   pres_atm = presion * 0.0098692;
   pres_psi = presion * 0.1450377;
   alt =-7990.652789*long(presion/101.304);
   if (BIT_TEST(PORTA,2)==0) cnt++;
   if (cnt>=4) cnt=0;
   swictch (cnt) { //segun el numero de veses que se presiona el boton es el caso 
       case 0:
       lcd_gotoxy(1,1);
       printf(lcd_putc,"P= %5.2f Kpa    ",PRESION);
       printf(lcd_putc,"nT - %04.2f c", temp);
       break;
       case 1:
       lcd_gotoxy(1,1);
       printf(lcd_putc,"P= %4.2f atm    ",PRES_atm);
       printf(lcd_putc,"nT - %04.2f c", temp);
       break;
       case 2:
       lcd_gotoxy(1,1);
       printf(lcd_putc,"P= %3.2f psi   ",PRES_psi);
       printf(lcd_putc,"nT - %04.2f c", temp);
       break;
        case 3:
       lcd_gotoxy(1,1);
       printf(lcd_putc,"ALT= %7.2f m   ", alt);
       printf(lcd_putc,"nT - %04.2f c", temp);
       break;
   }
       delay_ms(100);
   }
}
   

   
