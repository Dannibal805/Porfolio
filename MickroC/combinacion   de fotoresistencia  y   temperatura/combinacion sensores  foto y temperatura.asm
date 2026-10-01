
_main:

;combinacion sensores  foto y temperatura.c,20 :: 		void main( void )
;combinacion sensores  foto y temperatura.c,25 :: 		ADCON1 = 0b11000001;
	MOVLW      193
	MOVWF      ADCON1+0
;combinacion sensores  foto y temperatura.c,26 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;combinacion sensores  foto y temperatura.c,27 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;combinacion sensores  foto y temperatura.c,28 :: 		Lcd_Out( 1, 1, "Temp:");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_combinacion_32sensores_32_32foto_32y_32temperatura+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;combinacion sensores  foto y temperatura.c,29 :: 		Lcd_Out( 2, 1, "Res:");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_combinacion_32sensores_32_32foto_32y_32temperatura+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;combinacion sensores  foto y temperatura.c,32 :: 		while(1)
L_main0:
;combinacion sensores  foto y temperatura.c,34 :: 		Radc = ADC_Read(0);
	CLRF       FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
	MOVF       R0+0, 0
	MOVWF      main_Radc_L0+0
	MOVF       R0+1, 0
	MOVWF      main_Radc_L0+1
;combinacion sensores  foto y temperatura.c,35 :: 		Tem = 0.244*Radc;
	CALL       _Word2Double+0
	MOVLW      35
	MOVWF      R4+0
	MOVLW      219
	MOVWF      R4+1
	MOVLW      121
	MOVWF      R4+2
	MOVLW      124
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
;combinacion sensores  foto y temperatura.c,36 :: 		Temi=Tem;
	CALL       _Double2Word+0
;combinacion sensores  foto y temperatura.c,37 :: 		IntToStr( Temi, Text );
	MOVF       R0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_Text_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;combinacion sensores  foto y temperatura.c,38 :: 		Lcd_Out( 1, 5, Text);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;combinacion sensores  foto y temperatura.c,39 :: 		Radc= ADC_Read(1);
	MOVLW      1
	MOVWF      FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
	MOVF       R0+0, 0
	MOVWF      main_Radc_L0+0
	MOVF       R0+1, 0
	MOVWF      main_Radc_L0+1
;combinacion sensores  foto y temperatura.c,40 :: 		DisI = (Radc*48.87585533)/(5.0-Radc*0.004887585);
	CALL       _Word2Double+0
	MOVLW      224
	MOVWF      R4+0
	MOVLW      128
	MOVWF      R4+1
	MOVLW      67
	MOVWF      R4+2
	MOVLW      132
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
	MOVF       R0+0, 0
	MOVWF      FLOC__main+0
	MOVF       R0+1, 0
	MOVWF      FLOC__main+1
	MOVF       R0+2, 0
	MOVWF      FLOC__main+2
	MOVF       R0+3, 0
	MOVWF      FLOC__main+3
	MOVF       main_Radc_L0+0, 0
	MOVWF      R0+0
	MOVF       main_Radc_L0+1, 0
	MOVWF      R0+1
	CALL       _Word2Double+0
	MOVLW      9
	MOVWF      R4+0
	MOVLW      40
	MOVWF      R4+1
	MOVLW      32
	MOVWF      R4+2
	MOVLW      119
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
	MOVF       R0+0, 0
	MOVWF      R4+0
	MOVF       R0+1, 0
	MOVWF      R4+1
	MOVF       R0+2, 0
	MOVWF      R4+2
	MOVF       R0+3, 0
	MOVWF      R4+3
	MOVLW      0
	MOVWF      R0+0
	MOVLW      0
	MOVWF      R0+1
	MOVLW      32
	MOVWF      R0+2
	MOVLW      129
	MOVWF      R0+3
	CALL       _Sub_32x32_FP+0
	MOVF       R0+0, 0
	MOVWF      R4+0
	MOVF       R0+1, 0
	MOVWF      R4+1
	MOVF       R0+2, 0
	MOVWF      R4+2
	MOVF       R0+3, 0
	MOVWF      R4+3
	MOVF       FLOC__main+0, 0
	MOVWF      R0+0
	MOVF       FLOC__main+1, 0
	MOVWF      R0+1
	MOVF       FLOC__main+2, 0
	MOVWF      R0+2
	MOVF       FLOC__main+3, 0
	MOVWF      R0+3
	CALL       _Div_32x32_FP+0
;combinacion sensores  foto y temperatura.c,41 :: 		Diso=DisI   ;
	CALL       _Double2Word+0
;combinacion sensores  foto y temperatura.c,42 :: 		IntToStr( Diso, Text);
	MOVF       R0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_Text_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;combinacion sensores  foto y temperatura.c,43 :: 		Lcd_Out( 2, 5, Text );
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;combinacion sensores  foto y temperatura.c,44 :: 		delay_ms(100);
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
;combinacion sensores  foto y temperatura.c,45 :: 		}
	GOTO       L_main0
;combinacion sensores  foto y temperatura.c,46 :: 		}
	GOTO       $+0
; end of _main
