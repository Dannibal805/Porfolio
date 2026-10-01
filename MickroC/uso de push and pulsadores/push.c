void main( void )
{
//Configuración de puertos.
TRISB=0xFF;
PORTB=0;
while(1)//Bucle infinito.
{
if( Button(&PORTB, 7, 100, 0) )//Evalúa el estádo del pulsador por RB7,
//activado en bajo.
PORTB.F0=1; //Prende el LED si el pulsador está activo.
else
PORTB.F0=0; //Apaga el pulsador si el pulsador está no activo.
}
}