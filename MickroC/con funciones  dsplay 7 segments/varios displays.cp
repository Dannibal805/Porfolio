#line 1 "C:/Users/Daniel/Documents/upp/programas pics/con funciones  dsplay 7 segments/varios displays.c"

const unsigned short DIGITOS[] =
{
0x3F,
0x06,
0x5B,
0x4F,
0x66,
0x6D,
0x7D,
0x07,
0x7F,
0x6F,
};

void VerDisplay( int Numero )
{
unsigned short U;
unsigned short D;
unsigned short C;
unsigned short UM;
UM = Numero/1000;
C = (Numero-UM*1000)/100;
D = (Numero-UM*1000-C*100)/10;
U = (Numero-UM*1000-C*100-D*10);
PORTB = DIGITOS[U];
PORTA.F0=1;
delay_ms(10);
PORTA=0;
PORTB = DIGITOS[D];
PORTA.F1=1;
delay_ms(10);
PORTA=0;
PORTB = DIGITOS[C];
PORTA.F2=1;
delay_ms(10);
PORTA=0;
PORTB = DIGITOS[UM];
PORTA.F3=1;
delay_ms(10);
PORTA=0;

}
void main ( void )
{
unsigned short N=0;
int Numero=0;
TRISB = 0;
TRISA = 0;
PORTA = 0;
while( 1 )
{

VerDisplay( Numero );


N++;
if( N==12 )
{
N=0;
Numero++;
if( Numero==10000 )
Numero=0;
}
}
}
