syms  d1 d9 d2 d3 d4 l1 l2 l3 l4 l5 ang1 ang2 ang3 ang4 ang5 ang6 real
A01=denavit(0,d1+l1,0,0)
A12=denavit(ang2-pi/2,0,-d2,-pi/2)
A23=denavit(ang3,0,-d3,0)
A02=A01*A12
A03=A02*A23

%Ejercicio 3
C01=denavit(0,13,0,-pi/2 )
C12=denavit(0,6,8,0)
C23=denavit (0,8,0,0);
C34=denavit (ang4+pi/2,0,0,pi/2)
C45=denavit (0,0,0,0)
C02=C01*C12
C03=C02*C23
C04=C03*C34
C05=C04*C45


%Ejercicio 4
D01=denavit(ang1-pi/2,l1,0,-pi/2)
D12=denavit(ang2+pi/2,0,-l2,0)
D23=denavit(ang3,l3,0,pi/2)
D34=denavit(ang4,l4,0,pi/2)
D45=denavit(ang5,0,l5,0)
D02=D01*D12
D03=D02*D23
D04=D03*D34
D05=D04*D45
%Ejercicio 5 corregir  word
E01=denavit(pi/2,l1,0,pi/2)
E12=denavit(ang2,l2,0,-pi/2)
E23=denavit(ang3-pi/2,0,l3,0)
E02=E01*E12
E03=E02*E23;

%ejercicio 6
F01=denavit(ang1-pi/2,l1,0,-pi/2)
F12=denavit(0,d2,0,pi/2)
F23=denavit(ang2+pi/2,0,l3,0)
F02=F01*F12
F03=F02*F23


%Problema 7 
J01=denavit(ang1,l1,0,-pi/2)
J12=denavit(ang2+pi/2,l2,0,-pi/2)
J23=denavit(pi/2,l3,0,-pi/2)
J34=denavit(ang3-pi/2,0,d4,0)
J02=J01*J12
J03=J02*J23
J04=J03*J34
%ejercicio 8

H01=denavit(ang1-pi/2,0,0,-pi/2)
H12=denavit(ang2,l1,0,pi/2)
H23=denavit(ang3+pi/2,0,l2,pi/2)
H34=denavit(ang4,l3,0,-pi/2)
H45=denavit(ang5+pi/2,0,l4,0)
H02=H01*H12
H03=H02*H23
H04=H03*H34
H05=H04*H45
%matrices del ejercisio 8 

%h01=[cos(ang1-pi/2) 0 -sin(ang1-pi/2) 0;sin(ang1-pi/2) 0 cos(ang2) 0;0 1 0 3;0 0 0 1]
%h12=[cos(ang2) 0 sin(ang2) 0;sin(ang2) 0 -cos(ang2) 0;0 1 0 3;0 0 0 1]
%h02=h01*h12
%h23=[cos(ang3+pi/2) 0 sin(pi/2+ang3) 5*cos(pi/2+ang3);sin(pi/2+ang3) 0 -cos(pi/2+ang3) 5*sin(pi/2+ang3);0 1 0 0;0 0 0 1]
%h03=h02*h23
%h34=[cos(ang4) 0 -0.0274*sin(4) 0;sin(ang4) 0 cos(ang4) 0;0 -1 0 4;0 0 0 1]
%h04=h03*34
%h45=[cos(pi/2+ang5) -sin(pi/2+ang5) 0 14*cos(pi/+ang5);sin(pi/2+ang5) cos(pi/2+ang5) 0 14*sin(pi/2+ang5);0 0 1 0;0 0 0 1]
%h05=h04*h45



%problema 9
I01=denavit(ang1,9.75,0,pi/2)
I12=denavit(ang2,0,9,0);
I23=denavit(ang3+pi/2,0,0,pi/2)
I34=denavit(ang4+pi/2,0,0,pi/2)
I45=denavit(ang5,2.75,3.25,0)
I02=I01*I12
I03=I02*I12
I04=I03*I34
I05=I04*I45



