
_main:

;lectura   y velocidad  con  2 sensores.c,16 :: 		void main ()
;lectura   y velocidad  con  2 sensores.c,24 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;lectura   y velocidad  con  2 sensores.c,25 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;lectura   y velocidad  con  2 sensores.c,26 :: 		Lcd_Out( 1, 1, " M i:");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_lectura_32_32_32y_32velocidad_32_32con_32_322_32sensores+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,27 :: 		Lcd_Out( 2, 1, " M d");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_lectura_32_32_32y_32velocidad_32_32con_32_322_32sensores+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,28 :: 		OPTION_REG = 0;
	CLRF       OPTION_REG+0
;lectura   y velocidad  con  2 sensores.c,29 :: 		PWM1_Init(250);
	BSF        T2CON+0, 0
	BSF        T2CON+0, 1
	MOVLW      249
	MOVWF      PR2+0
	CALL       _PWM1_Init+0
;lectura   y velocidad  con  2 sensores.c,30 :: 		PWM1_Start();
	CALL       _PWM1_Start+0
;lectura   y velocidad  con  2 sensores.c,31 :: 		PWM1_Set_Duty(0);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,32 :: 		PWM2_Init(250);
	BSF        T2CON+0, 0
	BSF        T2CON+0, 1
	MOVLW      249
	MOVWF      PR2+0
	CALL       _PWM2_Init+0
;lectura   y velocidad  con  2 sensores.c,33 :: 		PWM2_Start();
	CALL       _PWM2_Start+0
;lectura   y velocidad  con  2 sensores.c,34 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,36 :: 		while (1)
L_main0:
;lectura   y velocidad  con  2 sensores.c,38 :: 		sensorizquierda = ADC_Read(0);
	CLRF       FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;lectura   y velocidad  con  2 sensores.c,39 :: 		sizquierda=sensorizquierda;
	CALL       _Word2Double+0
	MOVF       R0+0, 0
	MOVWF      main_sizquierda_L0+0
	MOVF       R0+1, 0
	MOVWF      main_sizquierda_L0+1
	MOVF       R0+2, 0
	MOVWF      main_sizquierda_L0+2
	MOVF       R0+3, 0
	MOVWF      main_sizquierda_L0+3
;lectura   y velocidad  con  2 sensores.c,41 :: 		sensorcentro = ADC_Read(1);
	MOVLW      1
	MOVWF      FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;lectura   y velocidad  con  2 sensores.c,44 :: 		sensorderecha = ADC_Read(2);
	MOVLW      2
	MOVWF      FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;lectura   y velocidad  con  2 sensores.c,45 :: 		sderecha = sensorderecha ;
	CALL       _Word2Double+0
	MOVF       R0+0, 0
	MOVWF      main_sderecha_L0+0
	MOVF       R0+1, 0
	MOVWF      main_sderecha_L0+1
	MOVF       R0+2, 0
	MOVWF      main_sderecha_L0+2
	MOVF       R0+3, 0
	MOVWF      main_sderecha_L0+3
;lectura   y velocidad  con  2 sensores.c,47 :: 		IntToStr( sizquierda, Text);
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
;lectura   y velocidad  con  2 sensores.c,48 :: 		Lcd_out (1,6,Text);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      6
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,49 :: 		delay_ms(100);
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
;lectura   y velocidad  con  2 sensores.c,50 :: 		IntToStr( sderecha,Text);
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
;lectura   y velocidad  con  2 sensores.c,51 :: 		Lcd_out (2,6,Text);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      6
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_Text_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,52 :: 		delay_ms(300);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      134
	MOVWF      R12+0
	MOVLW      153
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
;lectura   y velocidad  con  2 sensores.c,54 :: 		if((sizquierda >=420)&&(sderecha<=70))
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      82
	MOVWF      R4+2
	MOVLW      135
	MOVWF      R4+3
	MOVF       main_sizquierda_L0+0, 0
	MOVWF      R0+0
	MOVF       main_sizquierda_L0+1, 0
	MOVWF      R0+1
	MOVF       main_sizquierda_L0+2, 0
	MOVWF      R0+2
	MOVF       main_sizquierda_L0+3, 0
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSS      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main6
	MOVF       main_sderecha_L0+0, 0
	MOVWF      R4+0
	MOVF       main_sderecha_L0+1, 0
	MOVWF      R4+1
	MOVF       main_sderecha_L0+2, 0
	MOVWF      R4+2
	MOVF       main_sderecha_L0+3, 0
	MOVWF      R4+3
	MOVLW      0
	MOVWF      R0+0
	MOVLW      0
	MOVWF      R0+1
	MOVLW      12
	MOVWF      R0+2
	MOVLW      133
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSS      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main6
L__main17:
;lectura   y velocidad  con  2 sensores.c,56 :: 		potencia=100;
	MOVLW      100
	MOVWF      main_potencia_L0+0
;lectura   y velocidad  con  2 sensores.c,57 :: 		potencia1=25;
	MOVLW      25
	MOVWF      main_potencia1_L0+0
;lectura   y velocidad  con  2 sensores.c,58 :: 		Lcd_Out(2, 1," 39.21%");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr3_lectura_32_32_32y_32velocidad_32_32con_32_322_32sensores+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,59 :: 		PWM1_Set_Duty(potencia);
	MOVF       main_potencia_L0+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,60 :: 		PWM2_Set_Duty(potencia1);
	MOVF       main_potencia1_L0+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,61 :: 		}
	GOTO       L_main7
L_main6:
;lectura   y velocidad  con  2 sensores.c,62 :: 		else {  if(( sizquierda<=70)&&(sderecha>=420 ))
	MOVF       main_sizquierda_L0+0, 0
	MOVWF      R4+0
	MOVF       main_sizquierda_L0+1, 0
	MOVWF      R4+1
	MOVF       main_sizquierda_L0+2, 0
	MOVWF      R4+2
	MOVF       main_sizquierda_L0+3, 0
	MOVWF      R4+3
	MOVLW      0
	MOVWF      R0+0
	MOVLW      0
	MOVWF      R0+1
	MOVLW      12
	MOVWF      R0+2
	MOVLW      133
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSS      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main10
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      82
	MOVWF      R4+2
	MOVLW      135
	MOVWF      R4+3
	MOVF       main_sderecha_L0+0, 0
	MOVWF      R0+0
	MOVF       main_sderecha_L0+1, 0
	MOVWF      R0+1
	MOVF       main_sderecha_L0+2, 0
	MOVWF      R0+2
	MOVF       main_sderecha_L0+3, 0
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSS      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main10
L__main16:
;lectura   y velocidad  con  2 sensores.c,64 :: 		potencia=25;
	MOVLW      25
	MOVWF      main_potencia_L0+0
;lectura   y velocidad  con  2 sensores.c,65 :: 		potencia1=100;
	MOVLW      100
	MOVWF      main_potencia1_L0+0
;lectura   y velocidad  con  2 sensores.c,66 :: 		Lcd_Out(2, 1," 39.21%");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr4_lectura_32_32_32y_32velocidad_32_32con_32_322_32sensores+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,67 :: 		PWM1_Set_Duty(potencia);
	MOVF       main_potencia_L0+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,68 :: 		PWM2_Set_Duty(potencia1);
	MOVF       main_potencia1_L0+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,69 :: 		}
	GOTO       L_main11
L_main10:
;lectura   y velocidad  con  2 sensores.c,71 :: 		else { if((sizquierda>=420)&&(sderecha>=420))
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      82
	MOVWF      R4+2
	MOVLW      135
	MOVWF      R4+3
	MOVF       main_sizquierda_L0+0, 0
	MOVWF      R0+0
	MOVF       main_sizquierda_L0+1, 0
	MOVWF      R0+1
	MOVF       main_sizquierda_L0+2, 0
	MOVWF      R0+2
	MOVF       main_sizquierda_L0+3, 0
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSS      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main14
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      82
	MOVWF      R4+2
	MOVLW      135
	MOVWF      R4+3
	MOVF       main_sderecha_L0+0, 0
	MOVWF      R0+0
	MOVF       main_sderecha_L0+1, 0
	MOVWF      R0+1
	MOVF       main_sderecha_L0+2, 0
	MOVWF      R0+2
	MOVF       main_sderecha_L0+3, 0
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSS      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main14
L__main15:
;lectura   y velocidad  con  2 sensores.c,73 :: 		potencia= 127;
	MOVLW      127
	MOVWF      main_potencia_L0+0
;lectura   y velocidad  con  2 sensores.c,74 :: 		potencia1=127; Lcd_Out(2,1,"50%") ;
	MOVLW      127
	MOVWF      main_potencia1_L0+0
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr5_lectura_32_32_32y_32velocidad_32_32con_32_322_32sensores+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lectura   y velocidad  con  2 sensores.c,75 :: 		PWM1_Set_Duty(potencia);
	MOVF       main_potencia_L0+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,76 :: 		PWM2_Set_Duty(potencia1=23);
	MOVLW      23
	MOVWF      main_potencia1_L0+0
	MOVLW      23
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;lectura   y velocidad  con  2 sensores.c,77 :: 		}
L_main14:
;lectura   y velocidad  con  2 sensores.c,78 :: 		}
L_main11:
;lectura   y velocidad  con  2 sensores.c,79 :: 		}
L_main7:
;lectura   y velocidad  con  2 sensores.c,80 :: 		}
	GOTO       L_main0
;lectura   y velocidad  con  2 sensores.c,81 :: 		}
	GOTO       $+0
; end of _main
