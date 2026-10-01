
_main:

;push.c,1 :: 		void main( void )
;push.c,4 :: 		TRISB=0xFF;
	MOVLW      255
	MOVWF      TRISB+0
;push.c,5 :: 		PORTB=0;
	CLRF       PORTB+0
;push.c,6 :: 		while(1)//Bucle infinito.
L_main0:
;push.c,8 :: 		if( Button(&PORTB, 7, 100, 0) )//Evalúa el estádo del pulsador por RB7,
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      7
	MOVWF      FARG_Button_pin+0
	MOVLW      100
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main2
;push.c,10 :: 		PORTB.F0=1; //Prende el LED si el pulsador está activo.
	BSF        PORTB+0, 0
	GOTO       L_main3
L_main2:
;push.c,12 :: 		PORTB.F0=0; //Apaga el pulsador si el pulsador está no activo.
	BCF        PORTB+0, 0
L_main3:
;push.c,13 :: 		}
	GOTO       L_main0
;push.c,14 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
