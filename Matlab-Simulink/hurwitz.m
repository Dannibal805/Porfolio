%Pd  sin tacking  
%J= 0.000000916;
 %B=0.001957;
 
 J= 0.6;
 B= 2.38;

 %kd=.0164;
 %kp=.0092;
 %wn = 0.55; primer intento
 wn = 6; 
 kd=2*wn*J-B
 kp=wn^2*J
 
 M=[J (B+kd) kp]
 rt=roots(M);
 
%Pd  tracking 
 MM=[J (B+kd) 0];
rtm=roots(MM);  % es hurwitz 

%6 4 2
KP=[21.6; 56;5.2; ]
KD=[4.82; 10.22;1 ]
 
             