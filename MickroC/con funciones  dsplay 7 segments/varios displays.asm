
_VerDisplay:

;varios displays.c,16 :: 		void VerDisplay( int Numero )
;varios displays.c,22 :: 		UM = Numero/1000; //Cálculo de las unidades de mil.
	MOVLW      232
	MOVWF      R4+0
	MOVLW      3
	MOVWF      R4+1
	MOVF       FARG_VerDisplay_Numero+0, 0
	MOVWF      R0+0
	MOVF       FARG_VerDisplay_Numero+1, 0
	MOVWF      R0+1
	CALL       _Div_16x16_S+0
	MOVF       R0+0, 0
	MOVWF      VerDisplay_UM_L0+0
;varios displays.c,23 :: 		C = (Numero-UM*1000)/100; //Cálculo de las centenas.
	MOVLW      0
	MOVWF      R0+1
	MOVLW      232
	MOVWF      R4+0
	MOVLW      3
	MOVWF      R4+1
	CALL       _Mul_16x16_U+0
	MOVF       R0+0, 0
	SUBWF      FARG_VerDisplay_Numero+0, 0
	MOVWF      R0+0
	MOVF       R0+1, 0
	BTFSS      STATUS+0, 0
	ADDLW      1
	SUBWF      FARG_VerDisplay_Numero+1, 0
	MOVWF      R0+1
	MOVLW      100
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	CALL       _Div_16x16_S+0
	MOVF       R0+0, 0
	MOVWF      VerDisplay_C_L0+0
;varios displays.c,24 :: 		D = (Numero-UM*1000-C*100)/10; //Cálculo de las decenas.
	MOVF       VerDisplay_UM_L0+0, 0
	MOVWF      R0+0
	CLRF       R0+1
	MOVLW      232
	MOVWF      R4+0
	MOVLW      3
	MOVWF      R4+1
	CALL       _Mul_16x16_U+0
	MOVF       R0+0, 0
	SUBWF      FARG_VerDisplay_Numero+0, 0
	MOVWF      FLOC__VerDisplay+0
	MOVF       R0+1, 0
	BTFSS      STATUS+0, 0
	ADDLW      1
	SUBWF      FARG_VerDisplay_Numero+1, 0
	MOVWF      FLOC__VerDisplay+1
	MOVF       VerDisplay_C_L0+0, 0
	MOVWF      R0+0
	MOVLW      100
	MOVWF      R4+0
	CALL       _Mul_8x8_U+0
	MOVF       R0+0, 0
	SUBWF      FLOC__VerDisplay+0, 1
	BTFSS      STATUS+0, 0
	DECF       FLOC__VerDisplay+1, 1
	MOVF       R0+1, 0
	SUBWF      FLOC__VerDisplay+1, 1
	MOVLW      10
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVF       FLOC__VerDisplay+0, 0
	MOVWF      R0+0
	MOVF       FLOC__VerDisplay+1, 0
	MOVWF      R0+1
	CALL       _Div_16x16_S+0
	MOVF       R0+0, 0
	MOVWF      VerDisplay_D_L0+0
;varios displays.c,25 :: 		U = (Numero-UM*1000-C*100-D*10); //Cálculo de las unidades.
	MOVLW      10
	MOVWF      R4+0
	CALL       _Mul_8x8_U+0
	MOVF       R0+0, 0
	SUBWF      FLOC__VerDisplay+0, 0
	MOVWF      R0+0
;varios displays.c,26 :: 		PORTB = DIGITOS[U]; //Visualiza las unidades.
	MOVLW      0
	MOVWF      R0+1
	MOVLW      _DIGITOS+0
	ADDWF      R0+0, 1
	MOVLW      hi_addr(_DIGITOS+0)
	BTFSC      STATUS+0, 0
	ADDLW      1
	ADDWF      R0+1, 1
	MOVF       R0+0, 0
	MOVWF      ___DoICPAddr+0
	MOVF       R0+1, 0
	MOVWF      ___DoICPAddr+1
	CALL       _____DoICP+0
	MOVWF      PORTB+0
;varios displays.c,27 :: 		PORTA.F0=1; //Activa en alto el primer display
	BSF        PORTA+0, 0
;varios displays.c,28 :: 		delay_ms(10); //Retado de 10m segundos
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_VerDisplay0:
	DECFSZ     R13+0, 1
	GOTO       L_VerDisplay0
	DECFSZ     R12+0, 1
	GOTO       L_VerDisplay0
	NOP
	NOP
;varios displays.c,29 :: 		PORTA=0; //Desactiva todos los displays.
	CLRF       PORTA+0
;varios displays.c,30 :: 		PORTB = DIGITOS[D]; //Visualiza las decenas.
	MOVF       VerDisplay_D_L0+0, 0
	ADDLW      _DIGITOS+0
	MOVWF      R0+0
	MOVLW      hi_addr(_DIGITOS+0)
	BTFSC      STATUS+0, 0
	ADDLW      1
	MOVWF      R0+1
	MOVF       R0+0, 0
	MOVWF      ___DoICPAddr+0
	MOVF       R0+1, 0
	MOVWF      ___DoICPAddr+1
	CALL       _____DoICP+0
	MOVWF      PORTB+0
;varios displays.c,31 :: 		PORTA.F1=1; //Activa en alto el segundo display
	BSF        PORTA+0, 1
;varios displays.c,32 :: 		delay_ms(10); //Retado de 10m segundos
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_VerDisplay1:
	DECFSZ     R13+0, 1
	GOTO       L_VerDisplay1
	DECFSZ     R12+0, 1
	GOTO       L_VerDisplay1
	NOP
	NOP
;varios displays.c,33 :: 		PORTA=0; //Desactiva todos los displays.
	CLRF       PORTA+0
;varios displays.c,34 :: 		PORTB = DIGITOS[C]; //Visualiza las centenas.
	MOVF       VerDisplay_C_L0+0, 0
	ADDLW      _DIGITOS+0
	MOVWF      R0+0
	MOVLW      hi_addr(_DIGITOS+0)
	BTFSC      STATUS+0, 0
	ADDLW      1
	MOVWF      R0+1
	MOVF       R0+0, 0
	MOVWF      ___DoICPAddr+0
	MOVF       R0+1, 0
	MOVWF      ___DoICPAddr+1
	CALL       _____DoICP+0
	MOVWF      PORTB+0
;varios displays.c,35 :: 		PORTA.F2=1; //Activa en alto el tercer display
	BSF        PORTA+0, 2
;varios displays.c,36 :: 		delay_ms(10); //Retado de 10m segundos
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_VerDisplay2:
	DECFSZ     R13+0, 1
	GOTO       L_VerDisplay2
	DECFSZ     R12+0, 1
	GOTO       L_VerDisplay2
	NOP
	NOP
;varios displays.c,37 :: 		PORTA=0; //Desactiva todos los displays.
	CLRF       PORTA+0
;varios displays.c,38 :: 		PORTB = DIGITOS[UM]; //Visualiza las unidades de mil.
	MOVF       VerDisplay_UM_L0+0, 0
	ADDLW      _DIGITOS+0
	MOVWF      R0+0
	MOVLW      hi_addr(_DIGITOS+0)
	BTFSC      STATUS+0, 0
	ADDLW      1
	MOVWF      R0+1
	MOVF       R0+0, 0
	MOVWF      ___DoICPAddr+0
	MOVF       R0+1, 0
	MOVWF      ___DoICPAddr+1
	CALL       _____DoICP+0
	MOVWF      PORTB+0
;varios displays.c,39 :: 		PORTA.F3=1; //Activa en alto el cuarto display
	BSF        PORTA+0, 3
;varios displays.c,40 :: 		delay_ms(10); //Retado de 10m segundos
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_VerDisplay3:
	DECFSZ     R13+0, 1
	GOTO       L_VerDisplay3
	DECFSZ     R12+0, 1
	GOTO       L_VerDisplay3
	NOP
	NOP
;varios displays.c,41 :: 		PORTA=0; //Desactiva todos los displays.void main() {
	CLRF       PORTA+0
;varios displays.c,43 :: 		}
	RETURN
; end of _VerDisplay

_main:

;varios displays.c,44 :: 		void main ( void )
;varios displays.c,46 :: 		unsigned short N=0; //Variable de conteo.
	CLRF       main_N_L0+0
;varios displays.c,47 :: 		int Numero=0;
	CLRF       main_Numero_L0+0
	CLRF       main_Numero_L0+1
;varios displays.c,48 :: 		TRISB = 0; //Configura el puerto B como salida
	CLRF       TRISB+0
;varios displays.c,49 :: 		TRISA = 0; //Configura el puerto A como salida
	CLRF       TRISA+0
;varios displays.c,50 :: 		PORTA = 0; //Se desactiva todos los displays
	CLRF       PORTA+0
;varios displays.c,51 :: 		while( 1 ) //Bucle infinito
L_main4:
;varios displays.c,54 :: 		VerDisplay( Numero ); //Está función dura aproximadamente 40m segundos.
	MOVF       main_Numero_L0+0, 0
	MOVWF      FARG_VerDisplay_Numero+0
	MOVF       main_Numero_L0+1, 0
	MOVWF      FARG_VerDisplay_Numero+1
	CALL       _VerDisplay+0
;varios displays.c,57 :: 		N++;
	INCF       main_N_L0+0, 1
;varios displays.c,58 :: 		if( N==12 )
	MOVF       main_N_L0+0, 0
	XORLW      12
	BTFSS      STATUS+0, 2
	GOTO       L_main6
;varios displays.c,60 :: 		N=0; //Se reinicia el conteo de N.
	CLRF       main_N_L0+0
;varios displays.c,61 :: 		Numero++; //Se incrementa el valor de Número.
	INCF       main_Numero_L0+0, 1
	BTFSC      STATUS+0, 2
	INCF       main_Numero_L0+1, 1
;varios displays.c,62 :: 		if( Numero==10000 ) //Se evalúa si Número vale 10000
	MOVF       main_Numero_L0+1, 0
	XORLW      39
	BTFSS      STATUS+0, 2
	GOTO       L__main8
	MOVLW      16
	XORWF      main_Numero_L0+0, 0
L__main8:
	BTFSS      STATUS+0, 2
	GOTO       L_main7
;varios displays.c,63 :: 		Numero=0; //y se reinicia en 0 si es 10000.
	CLRF       main_Numero_L0+0
	CLRF       main_Numero_L0+1
L_main7:
;varios displays.c,64 :: 		}
L_main6:
;varios displays.c,65 :: 		}
	GOTO       L_main4
;varios displays.c,66 :: 		}
	GOTO       $+0
; end of _main
