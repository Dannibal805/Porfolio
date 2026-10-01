
_motor:

;PWMM.c,17 :: 		char motor(void) {
;PWMM.c,19 :: 		if(( PORTB.F0==0)&&( PORTB.F4==0))
	BTFSC      PORTB+0, 0
	GOTO       L_motor2
	BTFSC      PORTB+0, 4
	GOTO       L_motor2
L__motor33:
;PWMM.c,21 :: 		potencia=178; Lcd_Out(2, 1," 70%");
	MOVLW      178
	MOVWF      _potencia+0
	CLRF       _potencia+1
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,22 :: 		}
	GOTO       L_motor3
L_motor2:
;PWMM.c,24 :: 		else { if(( PORTB.F1==0)&&( PORTB.F4==0))
	BTFSC      PORTB+0, 1
	GOTO       L_motor6
	BTFSC      PORTB+0, 4
	GOTO       L_motor6
L__motor32:
;PWMM.c,26 :: 		potencia=204; Lcd_Out(2, 1," 80%");
	MOVLW      204
	MOVWF      _potencia+0
	CLRF       _potencia+1
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,27 :: 		}
	GOTO       L_motor7
L_motor6:
;PWMM.c,28 :: 		else { if(( PORTB.F2==0)&&( PORTB.F4==0))
	BTFSC      PORTB+0, 2
	GOTO       L_motor10
	BTFSC      PORTB+0, 4
	GOTO       L_motor10
L__motor31:
;PWMM.c,29 :: 		{   potencia=230; Lcd_Out(2, 1," 85%");
	MOVLW      230
	MOVWF      _potencia+0
	CLRF       _potencia+1
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr3_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,30 :: 		}
	GOTO       L_motor11
L_motor10:
;PWMM.c,32 :: 		else { if(( PORTB.F3==0)&&( PORTB.F4==0))
	BTFSC      PORTB+0, 3
	GOTO       L_motor14
	BTFSC      PORTB+0, 4
	GOTO       L_motor14
L__motor30:
;PWMM.c,33 :: 		{  potencia=255;Lcd_Out(2, 1,"100%");
	MOVLW      255
	MOVWF      _potencia+0
	CLRF       _potencia+1
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr4_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,34 :: 		}
	GOTO       L_motor15
L_motor14:
;PWMM.c,36 :: 		Lcd_Out(2, 1,"  0%"); potencia=0;
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr5_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
	CLRF       _potencia+0
	CLRF       _potencia+1
;PWMM.c,37 :: 		}
L_motor15:
;PWMM.c,38 :: 		}
L_motor11:
;PWMM.c,40 :: 		}
L_motor7:
;PWMM.c,41 :: 		}
L_motor3:
;PWMM.c,42 :: 		}
L_end_motor:
	RETURN
; end of _motor

_main:

;PWMM.c,45 :: 		void main ()
;PWMM.c,48 :: 		TRISC.F0=1;
	BSF        TRISC+0, 0
;PWMM.c,49 :: 		TRISC.F3=1;
	BSF        TRISC+0, 3
;PWMM.c,50 :: 		ANSEL  = 0;
	CLRF       ANSEL+0
;PWMM.c,51 :: 		ANSELH  = 0;
	CLRF       ANSELH+0
;PWMM.c,52 :: 		TRISB=0b11101111;
	MOVLW      239
	MOVWF      TRISB+0
;PWMM.c,53 :: 		PORTB.F5=0;
	BCF        PORTB+0, 5
;PWMM.c,54 :: 		PORTB.F6=0;
	BCF        PORTB+0, 6
;PWMM.c,55 :: 		PORTB.F7=0;
	BCF        PORTB+0, 7
;PWMM.c,56 :: 		PORTB.F4=0;
	BCF        PORTB+0, 4
;PWMM.c,57 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;PWMM.c,58 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;PWMM.c,60 :: 		OPTION_REG = 0;
	CLRF       OPTION_REG+0
;PWMM.c,61 :: 		PWM1_Init(500);
	BSF        T2CON+0, 0
	BSF        T2CON+0, 1
	MOVLW      124
	MOVWF      PR2+0
	CALL       _PWM1_Init+0
;PWMM.c,62 :: 		PWM1_Start();
	CALL       _PWM1_Start+0
;PWMM.c,63 :: 		PWM1_Set_Duty(0);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;PWMM.c,64 :: 		PWM2_Init(500);
	BSF        T2CON+0, 0
	BSF        T2CON+0, 1
	MOVLW      124
	MOVWF      PR2+0
	CALL       _PWM2_Init+0
;PWMM.c,65 :: 		PWM2_Start();
	CALL       _PWM2_Start+0
;PWMM.c,66 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;PWMM.c,67 :: 		while( 1 )
L_main16:
;PWMM.c,70 :: 		if(( PORTC.F0==1)&&( PORTC.F3==1))
	BTFSS      PORTC+0, 0
	GOTO       L_main20
	BTFSS      PORTC+0, 3
	GOTO       L_main20
L__main36:
;PWMM.c,71 :: 		{ PWM1_Set_Duty(0);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;PWMM.c,72 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;PWMM.c,74 :: 		Lcd_Out(1, 1,"     ERROR      ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr6_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,75 :: 		Lcd_Out(2, 1,"                ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr7_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,76 :: 		}
	GOTO       L_main21
L_main20:
;PWMM.c,78 :: 		else { if(( PORTC.F0==0)&&( PORTC.F3==1))
	BTFSC      PORTC+0, 0
	GOTO       L_main24
	BTFSS      PORTC+0, 3
	GOTO       L_main24
L__main35:
;PWMM.c,79 :: 		{    motor();
	CALL       _motor+0
;PWMM.c,80 :: 		PWM1_Set_Duty(potencia);
	MOVF       _potencia+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;PWMM.c,81 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;PWMM.c,83 :: 		Lcd_Out(1, 1," GIRO DERECHA   ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr8_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,84 :: 		}
	GOTO       L_main25
L_main24:
;PWMM.c,85 :: 		else { if(( PORTC.F0==1)&&( PORTC.F3==0))
	BTFSS      PORTC+0, 0
	GOTO       L_main28
	BTFSC      PORTC+0, 3
	GOTO       L_main28
L__main34:
;PWMM.c,86 :: 		{    motor();
	CALL       _motor+0
;PWMM.c,87 :: 		PWM1_Set_Duty(0);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;PWMM.c,88 :: 		PWM2_Set_Duty(potencia);
	MOVF       _potencia+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;PWMM.c,90 :: 		Lcd_Out(1, 1," GIRO IZQUIERDA ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr9_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,91 :: 		}
	GOTO       L_main29
L_main28:
;PWMM.c,93 :: 		PWM1_Set_Duty(0);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;PWMM.c,94 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;PWMM.c,96 :: 		Lcd_Out(1, 1,"     APAGADO    ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr10_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,97 :: 		Lcd_Out(2, 1,"                ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr11_PWMM+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;PWMM.c,98 :: 		}
L_main29:
;PWMM.c,99 :: 		}
L_main25:
;PWMM.c,100 :: 		}
L_main21:
;PWMM.c,102 :: 		}
	GOTO       L_main16
;PWMM.c,103 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
