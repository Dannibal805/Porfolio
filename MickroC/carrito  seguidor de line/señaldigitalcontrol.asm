
_main:

;señaldigitalcontrol.c,2 :: 		void main ()
;señaldigitalcontrol.c,7 :: 		unsigned short potencia=0, potencia1=0;  // Se declara el duty  iniciando en 0
	CLRF       main_potencia1_L0+0
;señaldigitalcontrol.c,10 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;señaldigitalcontrol.c,11 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;señaldigitalcontrol.c,12 :: 		OPTION_REG = 0;
	CLRF       OPTION_REG+0
;señaldigitalcontrol.c,13 :: 		PWM1_Init(250);                 //se inicializa PWM a la minima frecuencia
	BSF        T2CON+0, 0
	BSF        T2CON+0, 1
	MOVLW      249
	MOVWF      PR2+0
	CALL       _PWM1_Init+0
;señaldigitalcontrol.c,14 :: 		PWM1_Start();
	CALL       _PWM1_Start+0
;señaldigitalcontrol.c,15 :: 		PWM1_Set_Duty(0);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;señaldigitalcontrol.c,16 :: 		PWM2_Init(250);
	BSF        T2CON+0, 0
	BSF        T2CON+0, 1
	MOVLW      249
	MOVWF      PR2+0
	CALL       _PWM2_Init+0
;señaldigitalcontrol.c,17 :: 		PWM2_Start();
	CALL       _PWM2_Start+0
;señaldigitalcontrol.c,18 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;señaldigitalcontrol.c,20 :: 		TRISC.F0=1;
	BSF        TRISC+0, 0
;señaldigitalcontrol.c,21 :: 		TRISC.F3=1;
	BSF        TRISC+0, 3
;señaldigitalcontrol.c,22 :: 		ANSEL  = 0;          //Se comvierten puertos  analoguicos como diguitales
	CLRF       ANSEL+0
;señaldigitalcontrol.c,23 :: 		ANSELH  = 0;
	CLRF       ANSELH+0
;señaldigitalcontrol.c,24 :: 		TRISB=0b11101111;    // Configura los  bits  como salida.
	MOVLW      239
	MOVWF      TRISB+0
;señaldigitalcontrol.c,25 :: 		PORTB.F5=0;             //se  configura como entrada
	BCF        PORTB+0, 5
;señaldigitalcontrol.c,26 :: 		PORTB.F6=0;
	BCF        PORTB+0, 6
;señaldigitalcontrol.c,27 :: 		PORTB.F7=0;
	BCF        PORTB+0, 7
;señaldigitalcontrol.c,28 :: 		PORTB.F4=0;
	BCF        PORTB+0, 4
;señaldigitalcontrol.c,29 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;señaldigitalcontrol.c,30 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;señaldigitalcontrol.c,33 :: 		while( 1 )
L_main0:
;señaldigitalcontrol.c,36 :: 		if(( PORTC.F0==1)&&( PORTC.F3==1))      //si sensor izquierda y sensor derecha detecta    su  100%  en los motores es
	BTFSS      PORTC+0, 0
	GOTO       L_main4
	BTFSS      PORTC+0, 3
	GOTO       L_main4
L__main16:
;señaldigitalcontrol.c,38 :: 		potencia1=255;
	MOVLW      255
	MOVWF      main_potencia1_L0+0
;señaldigitalcontrol.c,39 :: 		PWM1_Set_Duty(potencia);
	MOVLW      255
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;señaldigitalcontrol.c,40 :: 		PWM2_Set_Duty(potencia1);
	MOVF       main_potencia1_L0+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;señaldigitalcontrol.c,42 :: 		Lcd_Out(1, 1," Mderecha 100%");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_señaldigitalcontrol+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;señaldigitalcontrol.c,43 :: 		Lcd_Out(2, 1," Mizquierdo 100%");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_señaldigitalcontrol+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;señaldigitalcontrol.c,44 :: 		}
	GOTO       L_main5
L_main4:
;señaldigitalcontrol.c,46 :: 		else { if(( PORTC.F0==0)&&( PORTC.F3==1))        //si solo detecta sensor  izquierda   Motor derecha es a 100%
	BTFSC      PORTC+0, 0
	GOTO       L_main8
	BTFSS      PORTC+0, 3
	GOTO       L_main8
L__main15:
;señaldigitalcontrol.c,48 :: 		potencia1=255;
	MOVLW      255
	MOVWF      main_potencia1_L0+0
;señaldigitalcontrol.c,49 :: 		PWM1_Set_Duty(potencia);
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;señaldigitalcontrol.c,50 :: 		PWM2_Set_Duty(potencia1);
	MOVF       main_potencia1_L0+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;señaldigitalcontrol.c,52 :: 		Lcd_Out(1, 1," GIRO izquierda  ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr3_señaldigitalcontrol+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;señaldigitalcontrol.c,53 :: 		}
	GOTO       L_main9
L_main8:
;señaldigitalcontrol.c,54 :: 		else { if(( PORTC.F0==1)&&( PORTC.F3==0))   // si solo detecta sensor  Derecha Motor izquierda es a 100%
	BTFSS      PORTC+0, 0
	GOTO       L_main12
	BTFSC      PORTC+0, 3
	GOTO       L_main12
L__main14:
;señaldigitalcontrol.c,56 :: 		potencia1=0;
	CLRF       main_potencia1_L0+0
;señaldigitalcontrol.c,57 :: 		PWM1_Set_Duty(potencia);
	MOVLW      255
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;señaldigitalcontrol.c,58 :: 		PWM2_Set_Duty(potencia1);
	MOVF       main_potencia1_L0+0, 0
	MOVWF      FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;señaldigitalcontrol.c,60 :: 		Lcd_Out(1, 1," GIRO Derecha ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr4_señaldigitalcontrol+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;señaldigitalcontrol.c,61 :: 		}
	GOTO       L_main13
L_main12:
;señaldigitalcontrol.c,63 :: 		PWM1_Set_Duty(0);                        //si no detecta  linea blanca   0%  en  motores es
	CLRF       FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;señaldigitalcontrol.c,64 :: 		PWM2_Set_Duty(0);
	CLRF       FARG_PWM2_Set_Duty_new_duty+0
	CALL       _PWM2_Set_Duty+0
;señaldigitalcontrol.c,66 :: 		Lcd_Out(1, 1,"     APAGADO    ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr5_señaldigitalcontrol+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;señaldigitalcontrol.c,67 :: 		Lcd_Out(2, 1,"                ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr6_señaldigitalcontrol+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;señaldigitalcontrol.c,68 :: 		}
L_main13:
;señaldigitalcontrol.c,69 :: 		}
L_main9:
;señaldigitalcontrol.c,70 :: 		}
L_main5:
;señaldigitalcontrol.c,71 :: 		}
	GOTO       L_main0
;señaldigitalcontrol.c,72 :: 		}
	GOTO       $+0
; end of _main
