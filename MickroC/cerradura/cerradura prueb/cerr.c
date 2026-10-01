sbit LCD_RS at RD4_bit;   //** Estos son los pines del lcd dirigidos al puerto D del Pic;
sbit LCD_EN at RD5_bit;   //En MikroC Pro se utilizan estos comandos; asi se puede controlar el 
sbit LCD_D4 at RD0_bit;   // lcd con el puerto(s) y pines que se deseen......puedes hacer de esto una libreria .h ;
sbit LCD_D5 at RD1_bit;
sbit LCD_D6 at RD2_bit;
sbit LCD_D7 at RD3_bit;
sbit LCD_RS_Direction at TRISD4_bit;
sbit LCD_EN_Direction at TRISD5_bit;
sbit LCD_D4_Direction at TRISD0_bit;
sbit LCD_D5_Direction at TRISD1_bit;
sbit LCD_D6_Direction at TRISD2_bit;
sbit LCD_D7_Direction at TRISD3_bit; // fin del Bloque de configuracion del lcd;
int dg1=0,dg2=0,dg3=0,dg4=0;//cuatro digitos que utilizaremos para leer la EEprom del pic;
unsigned short k=0,l=0,i=0,numero[4],contrasena[4]; //variables de control que cambian su valor seudun el boton del teclado;
char *text[]="1.ABRIR" ;char *text2[]="2.NUEVA CONTRASENA";char *actual[]="SU CONTRASENA" ;
char *nueva[]="NUEVA CONTRASENA";char errors[]="error"; char a[3];//* Las variables tipo cadena para visualizar en el lcd;
//* ahora dividimos las tareas en funciones.. comenzamos con la primera:

void guardando(){    //* activa el RC1 ;led amarillo que indica que se esta guardando la contraseña nueva;
Lcd_cmd(_Lcd_CLEAR); 
Lcd_out(1,1,"guardando");
PORTC=0b00000010;
delay_ms(1000);
}
void new(){    // *se visualiza en el lcd cuando se ingresa la nueva contraseña;
Lcd_cmd(_Lcd_CLEAR);
Lcd_out(1,1,*nueva);
}

void abrir(){   // *activa el RC2, en este caso se prende un led verde que representa un porton abriendo o cualquier cosa que se pueda activar al ingresar la contraseña correcta;
Lcd_cmd(_Lcd_CLEAR);
Lcd_out(1,1,"abriendo");
PORTC=0b00000100;
}

void sucontr(){   //* cuando se pide que ingrese la contraseña.....,;
Lcd_Cmd(_Lcd_CLEAR);
Lcd_out(1,1,*actual);
}

//* la siguiente rutina corresponde al teclado...en otro post se explico su funcionamiento.....;
//* observe como cambian los valores de k, l, i; valores que se usan para saber que numero se guardara en la memoria;
//*
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



void write_lcd(){  //* visualizar en pantalla las cadenas text y text2 a manera de menu;
Lcd_out(1,1,*text);
Lcd_out(2,1,*text2);
}

void memoria(){ //* mientras se ingresan la contraseñan...se visualizan asteriscos para ocultar;
Lcd_out(2,0+i,"*");
EEPROM_Write(0x32+i,l);//* se escribe los nuevos valores en la EEPRom, o se reescriben los actuales;
}
void leer_eep(){  //* rutina que lee los datos de la EEprom y los guarda en las variables para ser comparadas;
dg1=EEPROM_Read(0x33);
dg2=EEPROM_Read(0x34);
dg3=EEPROM_Read(0x35);
dg4=EEPROM_Read(0x36);
contrasena[1]=(dg1);
contrasena[2]=(dg2);
contrasena[3]=(dg3);
contrasena[4]=(dg4);  //* este array es la contraseña en si...;
}

void error(){   //* se ve en pantalla la palabra error si no c teclea el num correcto;
Lcd_cmd(_Lcd_CLEAR);
lcd_out(1,1,errors);
PORTC=0b00000001;  // activa un led rojo en RC0;
}

void initmain (){  // subfuncion principal;
ADCON1=0x06;
TRISC=0;
PORTC=0;
TRISD=0;
PORTD=0b01000000;  //* configuracion de puertos;
TRISB=0b11110000;
PORTB=0;
k=l=i=0;
Lcd_Init();  //*inicializa el Lcd;
Lcd_Cmd(_Lcd_CLEAR);
Lcd_Cmd(_Lcd_CURSOR_OFF); 
 }
//* Bloque principal;
void main(){
inicio:  // * etiqueta para regresar en caso de error;
initmain();
write_lcd();  //* llamada a las funciones;
leer_eep();
while(1){  //* este ciclo es para recibir los valores del teclado, segun la opcion que se quiera saltara a otro ciclo;
teclado();
if (k==1){
sucontr();//* si se escogio "ABRIR" o sea la opcion 1 del menu, llama a la funcion que pide tu contraseña;
k=l=i=0;  //* limpia las variables, (necesario para los nuevos valores que se van a comparar);
while(i<4){ //* como la contraseña es de 4 digitos, espera a que se presionen 4 teclas, el contador i se encarga de esto;
teclado();
numero[i]=l;
//delay_ms(1000);
if (i>0){ //* se va comparando valor por valor, se aprovecha el valor de i, para leer la posicion del array de la contraseña;
if(numero[i]==contrasena[i]){Lcd_out(2,0+i,"*");continue;
}
else error();delay_ms(1000);goto inicio;} //* en caso de error regresa al menu principal;
}k=0;delay_ms(500);abrir();delay_ms(3000);goto inicio;}

if (k==2){//* si se escoge la opcion 2 del menu, entonces, se visualiza las palabras
sucontr(); //* cambiar contraseña, el programa te pide tu contraseña actual antes de poder cambiarla;
k=l=i=0;
while(i<4){
teclado();
numero[i]=l;
//delay_ms(1000);
if (i>0){
if(numero[i]==contrasena[i]){Lcd_out(2,0+i,"*");continue;//* si es correcto, procede a pedir la nueva contraseña;
}
else error();delay_ms(1000);goto inicio;}
}k=0;delay_ms(1000);new();
k=l=i=0;
while(i<4){
teclado();
if(i>0){memoria();} //* se guarda tu nueva contraseña en la EEprom
}delay_ms(500);guardando();goto inicio;
}

}
k=0;
}
//*fin del programa.
//*******************+IMPortante, para entender mejor el codigo, leerlo mientras se simula en proteus.....
//***espero les sirva de algo...Suerte¡¡¡¡¡¡¡¡¡¡****************************//