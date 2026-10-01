
_guardando:

;cerr.c,19 :: 		void guardando(){    //* activa el RC1 ;led amarillo que indica que se esta guardando la contraseña nueva;
;cerr.c,20 :: 		Lcd_cmd(_Lcd_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,21 :: 		Lcd_out(1,1,"guardando");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr5_cerr+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,22 :: 		PORTC=0b00000010;
	MOVLW      2
	MOVWF      PORTC+0
;cerr.c,23 :: 		delay_ms(1000);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_guardando0:
	DECFSZ     R13+0, 1
	GOTO       L_guardando0
	DECFSZ     R12+0, 1
	GOTO       L_guardando0
	DECFSZ     R11+0, 1
	GOTO       L_guardando0
	NOP
	NOP
;cerr.c,24 :: 		}
	RETURN
; end of _guardando

_new:

;cerr.c,25 :: 		void new(){    // *se visualiza en el lcd cuando se ingresa la nueva contraseña;
;cerr.c,26 :: 		Lcd_cmd(_Lcd_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,27 :: 		Lcd_out(1,1,*nueva);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVF       _nueva+0, 0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,28 :: 		}
	RETURN
; end of _new

_abrir:

;cerr.c,30 :: 		void abrir(){   // *activa el RC2, en este caso se prende un led verde que representa un porton abriendo o cualquier cosa que se pueda activar al ingresar la contraseña correcta;
;cerr.c,31 :: 		Lcd_cmd(_Lcd_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,32 :: 		Lcd_out(1,1,"abriendo");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr6_cerr+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,33 :: 		PORTC=0b00000100;
	MOVLW      4
	MOVWF      PORTC+0
;cerr.c,34 :: 		}
	RETURN
; end of _abrir

_sucontr:

;cerr.c,36 :: 		void sucontr(){   //* cuando se pide que ingrese la contraseña.....,;
;cerr.c,37 :: 		Lcd_Cmd(_Lcd_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,38 :: 		Lcd_out(1,1,*actual);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVF       _actual+0, 0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,39 :: 		}
	RETURN
; end of _sucontr

_teclado:

;cerr.c,44 :: 		void teclado(){
;cerr.c,45 :: 		PORTB=0b00000001;
	MOVLW      1
	MOVWF      PORTB+0
;cerr.c,46 :: 		if(Button(&PORTB, 4, 20, 1)){k=1;l=1;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      4
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado1
	MOVLW      1
	MOVWF      _k+0
	MOVLW      1
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado2
L_teclado1:
;cerr.c,47 :: 		else if(Button (&PORTB, 5, 20, 1)){k=2;l=2;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      5
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado3
	MOVLW      2
	MOVWF      _k+0
	MOVLW      2
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado4
L_teclado3:
;cerr.c,48 :: 		else if(Button (&PORTB, 6, 20, 1)){l=3;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      6
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado5
	MOVLW      3
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado6
L_teclado5:
;cerr.c,50 :: 		delay_ms(80);
	MOVLW      104
	MOVWF      R12+0
	MOVLW      228
	MOVWF      R13+0
L_teclado7:
	DECFSZ     R13+0, 1
	GOTO       L_teclado7
	DECFSZ     R12+0, 1
	GOTO       L_teclado7
	NOP
L_teclado6:
L_teclado4:
L_teclado2:
;cerr.c,51 :: 		PORTB=0b00000010;
	MOVLW      2
	MOVWF      PORTB+0
;cerr.c,52 :: 		if(Button (&PORTB, 4, 50, 1)){l=4;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      4
	MOVWF      FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado8
	MOVLW      4
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado9
L_teclado8:
;cerr.c,53 :: 		else if(Button (&PORTB, 5, 20, 1)){l=5;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      5
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado10
	MOVLW      5
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado11
L_teclado10:
;cerr.c,54 :: 		else if(Button (&PORTB, 6, 20, 1)){l=6;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      6
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado12
	MOVLW      6
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado13
L_teclado12:
;cerr.c,56 :: 		delay_ms(80);
	MOVLW      104
	MOVWF      R12+0
	MOVLW      228
	MOVWF      R13+0
L_teclado14:
	DECFSZ     R13+0, 1
	GOTO       L_teclado14
	DECFSZ     R12+0, 1
	GOTO       L_teclado14
	NOP
L_teclado13:
L_teclado11:
L_teclado9:
;cerr.c,57 :: 		PORTB=0b00000100;
	MOVLW      4
	MOVWF      PORTB+0
;cerr.c,58 :: 		if(Button (&PORTB, 4, 20, 1)){l=7;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      4
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado15
	MOVLW      7
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado16
L_teclado15:
;cerr.c,59 :: 		else if(Button (&PORTB, 5, 20, 1)){l=8;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      5
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado17
	MOVLW      8
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado18
L_teclado17:
;cerr.c,60 :: 		else if(Button (&PORTB, 6, 20, 1)){l=9;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      6
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado19
	MOVLW      9
	MOVWF      _l+0
	INCF       _i+0, 1
L_teclado19:
L_teclado18:
L_teclado16:
;cerr.c,61 :: 		delay_ms(80);
	MOVLW      104
	MOVWF      R12+0
	MOVLW      228
	MOVWF      R13+0
L_teclado20:
	DECFSZ     R13+0, 1
	GOTO       L_teclado20
	DECFSZ     R12+0, 1
	GOTO       L_teclado20
	NOP
;cerr.c,62 :: 		PORTB=0b00001000;
	MOVLW      8
	MOVWF      PORTB+0
;cerr.c,63 :: 		if(Button (&PORTB, 4, 20, 1)){ l=10; i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      4
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado21
	MOVLW      10
	MOVWF      _l+0
	INCF       _i+0, 1
	GOTO       L_teclado22
L_teclado21:
;cerr.c,64 :: 		else if(Button (&PORTB, 5, 20, 1)){l=0;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      5
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado23
	CLRF       _l+0
	INCF       _i+0, 1
	GOTO       L_teclado24
L_teclado23:
;cerr.c,65 :: 		else if(Button (&PORTB, 6, 20, 1)){l=12;i++;}
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      6
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_teclado25
	MOVLW      12
	MOVWF      _l+0
	INCF       _i+0, 1
L_teclado25:
L_teclado24:
L_teclado22:
;cerr.c,66 :: 		delay_ms(80);
	MOVLW      104
	MOVWF      R12+0
	MOVLW      228
	MOVWF      R13+0
L_teclado26:
	DECFSZ     R13+0, 1
	GOTO       L_teclado26
	DECFSZ     R12+0, 1
	GOTO       L_teclado26
	NOP
;cerr.c,67 :: 		}
	RETURN
; end of _teclado

_write_lcd:

;cerr.c,71 :: 		void write_lcd(){  //* visualizar en pantalla las cadenas text y text2 a manera de menu;
;cerr.c,72 :: 		Lcd_out(1,1,*text);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVF       _text+0, 0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,73 :: 		Lcd_out(2,1,*text2);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVF       _text2+0, 0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,74 :: 		}
	RETURN
; end of _write_lcd

_memoria:

;cerr.c,76 :: 		void memoria(){ //* mientras se ingresan la contraseñan...se visualizan asteriscos para ocultar;
;cerr.c,77 :: 		Lcd_out(2,0+i,"*");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVF       _i+0, 0
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr7_cerr+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,78 :: 		EEPROM_Write(0x32+i,l);//* se escribe los nuevos valores en la EEPRom, o se reescriben los actuales;
	MOVF       _i+0, 0
	ADDLW      50
	MOVWF      FARG_EEPROM_Write_Address+0
	MOVF       _l+0, 0
	MOVWF      FARG_EEPROM_Write_data_+0
	CALL       _EEPROM_Write+0
;cerr.c,79 :: 		}
	RETURN
; end of _memoria

_leer_eep:

;cerr.c,80 :: 		void leer_eep(){  //* rutina que lee los datos de la EEprom y los guarda en las variables para ser comparadas;
;cerr.c,81 :: 		dg1=EEPROM_Read(0x33);
	MOVLW      51
	MOVWF      FARG_EEPROM_Read_Address+0
	CALL       _EEPROM_Read+0
	MOVF       R0+0, 0
	MOVWF      _dg1+0
	CLRF       _dg1+1
;cerr.c,82 :: 		dg2=EEPROM_Read(0x34);
	MOVLW      52
	MOVWF      FARG_EEPROM_Read_Address+0
	CALL       _EEPROM_Read+0
	MOVF       R0+0, 0
	MOVWF      _dg2+0
	CLRF       _dg2+1
;cerr.c,83 :: 		dg3=EEPROM_Read(0x35);
	MOVLW      53
	MOVWF      FARG_EEPROM_Read_Address+0
	CALL       _EEPROM_Read+0
	MOVF       R0+0, 0
	MOVWF      _dg3+0
	CLRF       _dg3+1
;cerr.c,84 :: 		dg4=EEPROM_Read(0x36);
	MOVLW      54
	MOVWF      FARG_EEPROM_Read_Address+0
	CALL       _EEPROM_Read+0
	MOVF       R0+0, 0
	MOVWF      _dg4+0
	CLRF       _dg4+1
;cerr.c,85 :: 		contrasena[1]=(dg1);
	MOVF       _dg1+0, 0
	MOVWF      _contrasena+1
;cerr.c,86 :: 		contrasena[2]=(dg2);
	MOVF       _dg2+0, 0
	MOVWF      _contrasena+2
;cerr.c,87 :: 		contrasena[3]=(dg3);
	MOVF       _dg3+0, 0
	MOVWF      _contrasena+3
;cerr.c,88 :: 		contrasena[4]=(dg4);  //* este array es la contraseña en si...;
	MOVF       _dg4+0, 0
	MOVWF      _contrasena+4
;cerr.c,89 :: 		}
	RETURN
; end of _leer_eep

_error:

;cerr.c,91 :: 		void error(){   //* se ve en pantalla la palabra error si no c teclea el num correcto;
;cerr.c,92 :: 		Lcd_cmd(_Lcd_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,93 :: 		lcd_out(1,1,errors);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _errors+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;cerr.c,94 :: 		PORTC=0b00000001;  // activa un led rojo en RC0;
	MOVLW      1
	MOVWF      PORTC+0
;cerr.c,95 :: 		}
	RETURN
; end of _error

_initmain:

;cerr.c,97 :: 		void initmain (){  // subfuncion principal;
;cerr.c,98 :: 		ADCON1=0x06;
	MOVLW      6
	MOVWF      ADCON1+0
;cerr.c,99 :: 		TRISC=0;
	CLRF       TRISC+0
;cerr.c,100 :: 		PORTC=0;
	CLRF       PORTC+0
;cerr.c,101 :: 		TRISD=0;
	CLRF       TRISD+0
;cerr.c,102 :: 		PORTD=0b01000000;  //* configuracion de puertos;
	MOVLW      64
	MOVWF      PORTD+0
;cerr.c,103 :: 		TRISB=0b11110000;
	MOVLW      240
	MOVWF      TRISB+0
;cerr.c,104 :: 		PORTB=0;
	CLRF       PORTB+0
;cerr.c,105 :: 		k=l=i=0;
	CLRF       _i+0
	CLRF       _l+0
	CLRF       _k+0
;cerr.c,106 :: 		Lcd_Init();  //*inicializa el Lcd;
	CALL       _Lcd_Init+0
;cerr.c,107 :: 		Lcd_Cmd(_Lcd_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,108 :: 		Lcd_Cmd(_Lcd_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;cerr.c,109 :: 		}
	RETURN
; end of _initmain

_main:

;cerr.c,111 :: 		void main(){
;cerr.c,112 :: 		inicio:  // * etiqueta para regresar en caso de error;
___main_inicio:
;cerr.c,113 :: 		initmain();
	CALL       _initmain+0
;cerr.c,114 :: 		write_lcd();  //* llamada a las funciones;
	CALL       _write_lcd+0
;cerr.c,115 :: 		leer_eep();
	CALL       _leer_eep+0
;cerr.c,116 :: 		while(1){  //* este ciclo es para recibir los valores del teclado, segun la opcion que se quiera saltara a otro ciclo;
L_main27:
;cerr.c,117 :: 		teclado();
	CALL       _teclado+0
;cerr.c,118 :: 		if (k==1){
	MOVF       _k+0, 0
	XORLW      1
	BTFSS      STATUS+0, 2
	GOTO       L_main29
;cerr.c,119 :: 		sucontr();//* si se escogio "ABRIR" o sea la opcion 1 del menu, llama a la funcion que pide tu contraseña;
	CALL       _sucontr+0
;cerr.c,120 :: 		k=l=i=0;  //* limpia las variables, (necesario para los nuevos valores que se van a comparar);
	CLRF       _i+0
	CLRF       _l+0
	CLRF       _k+0
;cerr.c,121 :: 		while(i<4){ //* como la contraseña es de 4 digitos, espera a que se presionen 4 teclas, el contador i se encarga de esto;
L_main30:
	MOVLW      4
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main31
;cerr.c,122 :: 		teclado();
	CALL       _teclado+0
;cerr.c,123 :: 		numero[i]=l;
	MOVF       _i+0, 0
	ADDLW      _numero+0
	MOVWF      FSR
	MOVF       _l+0, 0
	MOVWF      INDF+0
;cerr.c,125 :: 		if (i>0){ //* se va comparando valor por valor, se aprovecha el valor de i, para leer la posicion del array de la contraseña;
	MOVF       _i+0, 0
	SUBLW      0
	BTFSC      STATUS+0, 0
	GOTO       L_main32
;cerr.c,126 :: 		if(numero[i]==contrasena[i]){Lcd_out(2,0+i,"*");continue;
	MOVF       _i+0, 0
	ADDLW      _numero+0
	MOVWF      FSR
	MOVF       INDF+0, 0
	MOVWF      R1+0
	MOVF       _i+0, 0
	ADDLW      _contrasena+0
	MOVWF      FSR
	MOVF       R1+0, 0
	XORWF      INDF+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main33
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVF       _i+0, 0
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr8_cerr+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
	GOTO       L_main30
;cerr.c,127 :: 		}
L_main33:
;cerr.c,128 :: 		else error();delay_ms(1000);goto inicio;} //* en caso de error regresa al menu principal;
	CALL       _error+0
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main35:
	DECFSZ     R13+0, 1
	GOTO       L_main35
	DECFSZ     R12+0, 1
	GOTO       L_main35
	DECFSZ     R11+0, 1
	GOTO       L_main35
	NOP
	NOP
	GOTO       ___main_inicio
L_main32:
;cerr.c,129 :: 		}k=0;delay_ms(500);abrir();delay_ms(3000);goto inicio;}
	GOTO       L_main30
L_main31:
	CLRF       _k+0
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main36:
	DECFSZ     R13+0, 1
	GOTO       L_main36
	DECFSZ     R12+0, 1
	GOTO       L_main36
	DECFSZ     R11+0, 1
	GOTO       L_main36
	NOP
	NOP
	CALL       _abrir+0
	MOVLW      16
	MOVWF      R11+0
	MOVLW      57
	MOVWF      R12+0
	MOVLW      13
	MOVWF      R13+0
L_main37:
	DECFSZ     R13+0, 1
	GOTO       L_main37
	DECFSZ     R12+0, 1
	GOTO       L_main37
	DECFSZ     R11+0, 1
	GOTO       L_main37
	NOP
	NOP
	GOTO       ___main_inicio
L_main29:
;cerr.c,131 :: 		if (k==2){//* si se escoge la opcion 2 del menu, entonces, se visualiza las palabras
	MOVF       _k+0, 0
	XORLW      2
	BTFSS      STATUS+0, 2
	GOTO       L_main38
;cerr.c,132 :: 		sucontr(); //* cambiar contraseña, el programa te pide tu contraseña actual antes de poder cambiarla;
	CALL       _sucontr+0
;cerr.c,133 :: 		k=l=i=0;
	CLRF       _i+0
	CLRF       _l+0
	CLRF       _k+0
;cerr.c,134 :: 		while(i<4){
L_main39:
	MOVLW      4
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main40
;cerr.c,135 :: 		teclado();
	CALL       _teclado+0
;cerr.c,136 :: 		numero[i]=l;
	MOVF       _i+0, 0
	ADDLW      _numero+0
	MOVWF      FSR
	MOVF       _l+0, 0
	MOVWF      INDF+0
;cerr.c,138 :: 		if (i>0){
	MOVF       _i+0, 0
	SUBLW      0
	BTFSC      STATUS+0, 0
	GOTO       L_main41
;cerr.c,139 :: 		if(numero[i]==contrasena[i]){Lcd_out(2,0+i,"*");continue;//* si es correcto, procede a pedir la nueva contraseña;
	MOVF       _i+0, 0
	ADDLW      _numero+0
	MOVWF      FSR
	MOVF       INDF+0, 0
	MOVWF      R1+0
	MOVF       _i+0, 0
	ADDLW      _contrasena+0
	MOVWF      FSR
	MOVF       R1+0, 0
	XORWF      INDF+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main42
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVF       _i+0, 0
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr9_cerr+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
	GOTO       L_main39
;cerr.c,140 :: 		}
L_main42:
;cerr.c,141 :: 		else error();delay_ms(1000);goto inicio;}
	CALL       _error+0
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main44:
	DECFSZ     R13+0, 1
	GOTO       L_main44
	DECFSZ     R12+0, 1
	GOTO       L_main44
	DECFSZ     R11+0, 1
	GOTO       L_main44
	NOP
	NOP
	GOTO       ___main_inicio
L_main41:
;cerr.c,142 :: 		}k=0;delay_ms(1000);new();
	GOTO       L_main39
L_main40:
	CLRF       _k+0
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main45:
	DECFSZ     R13+0, 1
	GOTO       L_main45
	DECFSZ     R12+0, 1
	GOTO       L_main45
	DECFSZ     R11+0, 1
	GOTO       L_main45
	NOP
	NOP
	CALL       _new+0
;cerr.c,143 :: 		k=l=i=0;
	CLRF       _i+0
	CLRF       _l+0
	CLRF       _k+0
;cerr.c,144 :: 		while(i<4){
L_main46:
	MOVLW      4
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main47
;cerr.c,145 :: 		teclado();
	CALL       _teclado+0
;cerr.c,146 :: 		if(i>0){memoria();} //* se guarda tu nueva contraseña en la EEprom
	MOVF       _i+0, 0
	SUBLW      0
	BTFSC      STATUS+0, 0
	GOTO       L_main48
	CALL       _memoria+0
L_main48:
;cerr.c,147 :: 		}delay_ms(500);guardando();goto inicio;
	GOTO       L_main46
L_main47:
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main49:
	DECFSZ     R13+0, 1
	GOTO       L_main49
	DECFSZ     R12+0, 1
	GOTO       L_main49
	DECFSZ     R11+0, 1
	GOTO       L_main49
	NOP
	NOP
	CALL       _guardando+0
	GOTO       ___main_inicio
;cerr.c,148 :: 		}
L_main38:
;cerr.c,150 :: 		}
	GOTO       L_main27
;cerr.c,152 :: 		}
	GOTO       $+0
; end of _main
