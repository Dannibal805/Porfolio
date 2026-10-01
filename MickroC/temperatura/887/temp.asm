
_main:

;temp.c,14 :: 		void main( void )
;temp.c,22 :: 		ADCON1 = 0b11000001;
	MOVLW      193
	MOVWF      ADCON1+0
;temp.c,24 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;temp.c,26 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;temp.c,28 :: 		Lcd_Out( 1, 1, "Temperatura:");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_temp+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;temp.c,29 :: 		while(1) //Bucle infinito.
L_main0:
;temp.c,32 :: 		Radc = ADC_Read(0);
	CLRF       FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;temp.c,34 :: 		Tem = .2248*Radc;
	CALL       _Word2Double+0
	MOVLW      249
	MOVWF      R4+0
	MOVLW      49
	MOVWF      R4+1
	MOVLW      102
	MOVWF      R4+2
	MOVLW      124
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
;temp.c,36 :: 		TemI = Tem;
	CALL       _Double2Word+0
;temp.c,38 :: 		IntToStr( TemI, Text );
	MOVF       R0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_Text_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;temp.c,40 :: 		Lcd_Out( 2, 1, Text);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;temp.c,42 :: 		delay_ms(100);
	MOVLW      130
	MOVWF      R12+0
	MOVLW      221
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	NOP
	NOP
;temp.c,43 :: 		}
	GOTO       L_main0
;temp.c,44 :: 		}
	GOTO       $+0
; end of _main
