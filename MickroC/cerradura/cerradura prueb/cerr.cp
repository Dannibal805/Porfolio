#line 1 "C:/Users/Daniel/Documents/upp/practicas programacion/cerradura/cerradura prueb/cerr.c"
sbit LCD_RS at RD4_bit;
sbit LCD_EN at RD5_bit;
sbit LCD_D4 at RD0_bit;
sbit LCD_D5 at RD1_bit;
sbit LCD_D6 at RD2_bit;
sbit LCD_D7 at RD3_bit;
sbit LCD_RS_Direction at TRISD4_bit;
sbit LCD_EN_Direction at TRISD5_bit;
sbit LCD_D4_Direction at TRISD0_bit;
sbit LCD_D5_Direction at TRISD1_bit;
sbit LCD_D6_Direction at TRISD2_bit;
sbit LCD_D7_Direction at TRISD3_bit;
int dg1=0,dg2=0,dg3=0,dg4=0;
unsigned short k=0,l=0,i=0,numero[4],contrasena[4];
char *text[]="1.ABRIR" ;char *text2[]="2.NUEVA CONTRASENA";char *actual[]="SU CONTRASENA" ;
char *nueva[]="NUEVA CONTRASENA";char errors[]="error"; char a[3];


void guardando(){
Lcd_cmd(_Lcd_CLEAR);
Lcd_out(1,1,"guardando");
PORTC=0b00000010;
delay_ms(1000);
}
void new(){
Lcd_cmd(_Lcd_CLEAR);
Lcd_out(1,1,*nueva);
}

void abrir(){
Lcd_cmd(_Lcd_CLEAR);
Lcd_out(1,1,"abriendo");
PORTC=0b00000100;
}

void sucontr(){
Lcd_Cmd(_Lcd_CLEAR);
Lcd_out(1,1,*actual);
}




void teclado(){
PORTB=0b00000001;
if(Button(&PORTB, 4, 20, 1)){k=1;l=1;i++;}
else if(Button (&PORTB, 5, 20, 1)){k=2;l=2;i++;}
else if(Button (&PORTB, 6, 20, 1)){l=3;i++;}
else
delay_ms(80);
PORTB=0b00000010;
if(Button (&PORTB, 4, 50, 1)){l=4;i++;}
else if(Button (&PORTB, 5, 20, 1)){l=5;i++;}
else if(Button (&PORTB, 6, 20, 1)){l=6;i++;}
else
delay_ms(80);
PORTB=0b00000100;
if(Button (&PORTB, 4, 20, 1)){l=7;i++;}
else if(Button (&PORTB, 5, 20, 1)){l=8;i++;}
else if(Button (&PORTB, 6, 20, 1)){l=9;i++;}
delay_ms(80);
PORTB=0b00001000;
if(Button (&PORTB, 4, 20, 1)){ l=10; i++;}
else if(Button (&PORTB, 5, 20, 1)){l=0;i++;}
else if(Button (&PORTB, 6, 20, 1)){l=12;i++;}
delay_ms(80);
}



void write_lcd(){
Lcd_out(1,1,*text);
Lcd_out(2,1,*text2);
}

void memoria(){
Lcd_out(2,0+i,"*");
EEPROM_Write(0x32+i,l);
}
void leer_eep(){
dg1=EEPROM_Read(0x33);
dg2=EEPROM_Read(0x34);
dg3=EEPROM_Read(0x35);
dg4=EEPROM_Read(0x36);
contrasena[1]=(dg1);
contrasena[2]=(dg2);
contrasena[3]=(dg3);
contrasena[4]=(dg4);
}

void error(){
Lcd_cmd(_Lcd_CLEAR);
lcd_out(1,1,errors);
PORTC=0b00000001;
}

void initmain (){
ADCON1=0x06;
TRISC=0;
PORTC=0;
TRISD=0;
PORTD=0b01000000;
TRISB=0b11110000;
PORTB=0;
k=l=i=0;
Lcd_Init();
Lcd_Cmd(_Lcd_CLEAR);
Lcd_Cmd(_Lcd_CURSOR_OFF);
 }

void main(){
inicio:
initmain();
write_lcd();
leer_eep();
while(1){
teclado();
if (k==1){
sucontr();
k=l=i=0;
while(i<4){
teclado();
numero[i]=l;

if (i>0){
if(numero[i]==contrasena[i]){Lcd_out(2,0+i,"*");continue;
}
else error();delay_ms(1000);goto inicio;}
}k=0;delay_ms(500);abrir();delay_ms(3000);goto inicio;}

if (k==2){
sucontr();
k=l=i=0;
while(i<4){
teclado();
numero[i]=l;

if (i>0){
if(numero[i]==contrasena[i]){Lcd_out(2,0+i,"*");continue;
}
else error();delay_ms(1000);goto inicio;}
}k=0;delay_ms(1000);new();
k=l=i=0;
while(i<4){
teclado();
if(i>0){memoria();}
}delay_ms(500);guardando();goto inicio;
}

}
k=0;
}
