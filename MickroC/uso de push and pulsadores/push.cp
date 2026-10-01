#line 1 "G:/Documentos/Documents/upp/4cuatri/programas pics/uso de push and pulsadores/push.c"
void main( void )
{

TRISB=0xFF;
PORTB=0;
while(1)
{
if( Button(&PORTB, 7, 100, 0) )

PORTB.F0=1;
else
PORTB.F0=0;
}
}
