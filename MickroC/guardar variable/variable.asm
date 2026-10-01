
_main:

;variable.c,16 :: 		void main(void)
;variable.c,18 :: 		keypad_Init();
	CALL       _Keypad_Init+0
;variable.c,19 :: 		Lcd_init();
	CALL       _Lcd_Init+0
;variable.c,20 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;variable.c,21 :: 		Lcd_out(1,1,"push the button:");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_variable+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;variable.c,22 :: 		Lcd_out(2,1,"Daniel");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_variable+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;variable.c,23 :: 		Delay_ms(900);
	MOVLW      5
	MOVWF      R11+0
	MOVLW      145
	MOVWF      R12+0
	MOVLW      207
	MOVWF      R13+0
L_main0:
	DECFSZ     R13+0, 1
	GOTO       L_main0
	DECFSZ     R12+0, 1
	GOTO       L_main0
	DECFSZ     R11+0, 1
	GOTO       L_main0
	NOP
	NOP
;variable.c,24 :: 		for(k=0;k<30; k++) {               // Move text to the right 4 times
	CLRF       _k+0
L_main1:
	MOVLW      30
	SUBWF      _k+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main2
;variable.c,25 :: 		Lcd_Cmd(_LCD_SHIFT_RIGHT);
	MOVLW      28
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;variable.c,26 :: 		Delay_ms(2000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	DECFSZ     R11+0, 1
	GOTO       L_main4
	NOP
	NOP
;variable.c,24 :: 		for(k=0;k<30; k++) {               // Move text to the right 4 times
	INCF       _k+0, 1
;variable.c,27 :: 		}
	GOTO       L_main1
L_main2:
;variable.c,28 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;variable.c,29 :: 		do{
L_main5:
;variable.c,30 :: 		kp=0;
	CLRF       _kp+0
;variable.c,31 :: 		do
L_main8:
;variable.c,32 :: 		kp=keypad_key_click();
	CALL       _Keypad_Key_Click+0
	MOVF       R0+0, 0
	MOVWF      _kp+0
;variable.c,33 :: 		while (!kp);
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main8
;variable.c,34 :: 		switch (kp)
	GOTO       L_main11
;variable.c,36 :: 		case 1: kp= 68;break;
L_main13:
	MOVLW      68
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,37 :: 		case 2: kp= 65;break;
L_main14:
	MOVLW      65
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,38 :: 		case 3: kp= 78;break;
L_main15:
	MOVLW      78
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,39 :: 		case 4: kp= 73;break;
L_main16:
	MOVLW      73
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,40 :: 		case 5: kp=69;break;
L_main17:
	MOVLW      69
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,41 :: 		case 6: kp=76;break;
L_main18:
	MOVLW      76
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,42 :: 		case 7: kp=49;break;
L_main19:
	MOVLW      49
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,43 :: 		case 8: kp=50;break;
L_main20:
	MOVLW      50
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,44 :: 		case 9: kp=51;break;
L_main21:
	MOVLW      51
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,45 :: 		case 10: kp=52;break;
L_main22:
	MOVLW      52
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,46 :: 		case 11: kp=53;break;
L_main23:
	MOVLW      53
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,47 :: 		case 12: kp=54;break;
L_main24:
	MOVLW      54
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,48 :: 		case 13: kp=55;break;
L_main25:
	MOVLW      55
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,49 :: 		case 14: kp=56;break;
L_main26:
	MOVLW      56
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,50 :: 		case 15: kp=57;break;
L_main27:
	MOVLW      57
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,51 :: 		case 16: kp=126;break; //Tecla no pulsada.
L_main28:
	MOVLW      126
	MOVWF      _kp+0
	GOTO       L_main12
;variable.c,52 :: 		}
L_main11:
	MOVF       _kp+0, 0
	XORLW      1
	BTFSC      STATUS+0, 2
	GOTO       L_main13
	MOVF       _kp+0, 0
	XORLW      2
	BTFSC      STATUS+0, 2
	GOTO       L_main14
	MOVF       _kp+0, 0
	XORLW      3
	BTFSC      STATUS+0, 2
	GOTO       L_main15
	MOVF       _kp+0, 0
	XORLW      4
	BTFSC      STATUS+0, 2
	GOTO       L_main16
	MOVF       _kp+0, 0
	XORLW      5
	BTFSC      STATUS+0, 2
	GOTO       L_main17
	MOVF       _kp+0, 0
	XORLW      6
	BTFSC      STATUS+0, 2
	GOTO       L_main18
	MOVF       _kp+0, 0
	XORLW      7
	BTFSC      STATUS+0, 2
	GOTO       L_main19
	MOVF       _kp+0, 0
	XORLW      8
	BTFSC      STATUS+0, 2
	GOTO       L_main20
	MOVF       _kp+0, 0
	XORLW      9
	BTFSC      STATUS+0, 2
	GOTO       L_main21
	MOVF       _kp+0, 0
	XORLW      10
	BTFSC      STATUS+0, 2
	GOTO       L_main22
	MOVF       _kp+0, 0
	XORLW      11
	BTFSC      STATUS+0, 2
	GOTO       L_main23
	MOVF       _kp+0, 0
	XORLW      12
	BTFSC      STATUS+0, 2
	GOTO       L_main24
	MOVF       _kp+0, 0
	XORLW      13
	BTFSC      STATUS+0, 2
	GOTO       L_main25
	MOVF       _kp+0, 0
	XORLW      14
	BTFSC      STATUS+0, 2
	GOTO       L_main26
	MOVF       _kp+0, 0
	XORLW      15
	BTFSC      STATUS+0, 2
	GOTO       L_main27
	MOVF       _kp+0, 0
	XORLW      16
	BTFSC      STATUS+0, 2
	GOTO       L_main28
L_main12:
;variable.c,54 :: 		Lcd_Chr(2,1,kp);
	MOVLW      2
	MOVWF      FARG_Lcd_Chr_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Chr_column+0
	MOVF       _kp+0, 0
	MOVWF      FARG_Lcd_Chr_out_char+0
	CALL       _Lcd_Chr+0
;variable.c,56 :: 		while (1);
	GOTO       L_main5
;variable.c,57 :: 		}
	GOTO       $+0
; end of _main
