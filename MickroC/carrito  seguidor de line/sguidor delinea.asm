
_main:

;sguidor delinea.c,13 :: 		void main ()
;sguidor delinea.c,18 :: 		int potencia=0;
	CLRF       main_potencia_L0+0
	CLRF       main_potencia_L0+1
;sguidor delinea.c,20 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;sguidor delinea.c,21 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;sguidor delinea.c,22 :: 		Lcd_Out( 1, 1, " M izqui:       ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_sguidor_32delinea+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;sguidor delinea.c,23 :: 		Lcd_Out( 2, 1, " M dere :       ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_sguidor_32delinea+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;sguidor delinea.c,25 :: 		while (1)
L_main0:
;sguidor delinea.c,27 :: 		Radc = ADC_Read(0);
	CLRF       FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;sguidor delinea.c,29 :: 		sizquierda=sensorizquierda;
	CALL       _Word2Double+0
	MOVF       R0+0, 0
	MOVWF      main_sizquierda_L0+0
	MOVF       R0+1, 0
	MOVWF      main_sizquierda_L0+1
	MOVF       R0+2, 0
	MOVWF      main_sizquierda_L0+2
	MOVF       R0+3, 0
	MOVWF      main_sizquierda_L0+3
;sguidor delinea.c,30 :: 		Radc = ADC_Read(1);
	MOVLW      1
	MOVWF      FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;sguidor delinea.c,33 :: 		Radc = ADC_Read(2);
	MOVLW      2
	MOVWF      FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;sguidor delinea.c,35 :: 		sderecha = sensorderecha ;
	CALL       _Word2Double+0
	MOVF       R0+0, 0
	MOVWF      main_sderecha_L0+0
	MOVF       R0+1, 0
	MOVWF      main_sderecha_L0+1
	MOVF       R0+2, 0
	MOVWF      main_sderecha_L0+2
	MOVF       R0+3, 0
	MOVWF      main_sderecha_L0+3
;sguidor delinea.c,36 :: 		IntToStr( sizquierda, Text);
	MOVF       main_sizquierda_L0+0, 0
	MOVWF      R0+0
	MOVF       main_sizquierda_L0+1, 0
	MOVWF      R0+1
	MOVF       main_sizquierda_L0+2, 0
	MOVWF      R0+2
	MOVF       main_sizquierda_L0+3, 0
	MOVWF      R0+3
	CALL       _Double2Int+0
	MOVF       R0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_Text_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;sguidor delinea.c,37 :: 		Lcd_out (1,10,Text);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      10
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;sguidor delinea.c,38 :: 		delay_ms(100);
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
;sguidor delinea.c,39 :: 		IntToStr( sderecha,Text);
	MOVF       main_sderecha_L0+0, 0
	MOVWF      R0+0
	MOVF       main_sderecha_L0+1, 0
	MOVWF      R0+1
	MOVF       main_sderecha_L0+2, 0
	MOVWF      R0+2
	MOVF       main_sderecha_L0+3, 0
	MOVWF      R0+3
	CALL       _Double2Int+0
	MOVF       R0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_Text_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;sguidor delinea.c,40 :: 		Lcd_out (2,10,Text);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      10
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;sguidor delinea.c,41 :: 		delay_ms(50);
	MOVLW      130
	MOVWF      R12+0
	MOVLW      221
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	NOP
	NOP
;sguidor delinea.c,42 :: 		}
	GOTO       L_main0
;sguidor delinea.c,43 :: 		}
	GOTO       $+0
; end of _main
