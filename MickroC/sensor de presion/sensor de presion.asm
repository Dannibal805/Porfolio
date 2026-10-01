
_main:

;sensor de presion.c,14 :: 		void main( void )
;sensor de presion.c,21 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;sensor de presion.c,23 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;sensor de presion.c,25 :: 		Lcd_Out( 1, 1, "Presion en KPa:");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_sensor_32de_32presion+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;sensor de presion.c,26 :: 		while(1) //Bucle infinito.
L_main0:
;sensor de presion.c,29 :: 		Radc = ADC_Read(0);
	CLRF       FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;sensor de presion.c,31 :: 		Pre = 0.10861*Radc+10,5555;
	CALL       _Word2Double+0
	MOVLW      235
	MOVWF      R4+0
	MOVLW      110
	MOVWF      R4+1
	MOVLW      94
	MOVWF      R4+2
	MOVLW      123
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      32
	MOVWF      R4+2
	MOVLW      130
	MOVWF      R4+3
	CALL       _Add_32x32_FP+0
;sensor de presion.c,33 :: 		PreI = Pre;
	CALL       _Double2Word+0
;sensor de presion.c,35 :: 		IntToStr( PreI, Text );
	MOVF       R0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_Text_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;sensor de presion.c,37 :: 		Lcd_Out( 2, 1, Text);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;sensor de presion.c,39 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
;sensor de presion.c,40 :: 		}
	GOTO       L_main0
;sensor de presion.c,41 :: 		}
	GOTO       $+0
; end of _main
