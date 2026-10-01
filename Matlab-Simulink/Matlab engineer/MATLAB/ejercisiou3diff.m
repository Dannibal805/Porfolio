d1=5;l1=10;d2=2;d2=8;d3=4;
 
E1=Link([0 d1+l1 0 0 1 0]);
E2=Link([0 0 -d2 -pi/2 0 -pi/2]);
E3=Link([0 0 -d3 0 0 0]);
RoboticO=SerialLink([E1 E2 E3]);
RoboticO.name='Segundo Robot'; 
plot(RoboticO,[0 0 0]);


%se comprobar    en el ploteado si fue correcto los parametros de denavit  
q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(RoboticO,[q' cero' cero'])
figure(2)
plot(RoboticO,[cero' q' cero'])
figure(3)
plot(RoboticO,[cero' cero' q'])


clc
clear all
syms d1 l1 d2 d3  q1 q2 q3 real  %se declaran variables  simbólicas  
E1=Link([0 d1+l1 0 0 1 0]);
E2=Link([0 0 -d2 -pi/2 0 -pi/2]);
E3=Link([0 0 -d3 0 0 0]);
RoboticO=SerialLink([E1 E2 E3]);
RoboticO.name='Segundo Robot';
Cif=RoboticO.jacob0([q1 q2 q3]) %% Jacobiano 
cif=simplify(Cif,'full')
% seudoinversa  el comando es pinv 
C=pinv(cif)
Cs=simplify(C,'full')


%% EJERCISIO 3

E1=Link([0 13 0 -pi/2 0 0]);
E2=Link([0 6 5.3 0  0 0]);
E3=Link([0 0 8 0 0 0]);
E4=Link([0 0 0 pi/2 0 pi/2]);
E5=Link([0 0 0 0 0 0]);
Robotini=SerialLink([E1 E2 E3 E4 E5]);
Robotini.name='tercer Robot';
plot(Robotini,[0 0 0 0 0 ]);



q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(Robotini,[q' cero' cero' cero' cero'])
figure(2)
plot(Robotini,[cero' q' cero' cero' cero'])
figure(3)
plot(Robotini,[cero' cero' q' cero' cero'])
figure(4)
plot(Robotini,[cero' cero' cero' q' cero'])
figure(5)
plot(Robotini,[cero' cero' cero' cero' q'])

clc 
clear all
syms l1 l2  l3 l4 q1 q2 q3 q4 q5 real
E1=Link([0 l1 0 -pi/2 0 0]);
E2=Link([0 l2 l3 0  0 0]);
E3=Link([0 0 l4 0 0 0]);
E4=Link([0 0 0 pi/2 0 pi/2]);
E5=Link([0 0 0 0 0 0]);
Robotini=SerialLink([E1 E2 E3 E4 E5]);
Robotini.name='tercer Robot';

Ci=Robotini.jacobn([q1 q2 q3 q4 q5]) %% Jacobiano 
% seudoinversa  el comando es pinv 
X=[(l2*sin(q2 + q3 + q4 + q5))/2-(l4*sin(q2 + q3 - q5))/2+(l3*sin(q2+ q5))/2+(l2*sin(q2+q3+q4-q5))/2-(l3*sin(q2 - q5))/2+(l4*sin(q2 + q3 + q5))/2 (l3*cos(q3 + q4 - q5))/2+(l4*cos(q4 + q5))/2+(l4*cos(q4 - q5))/2+(l3*cos(q3 + q4 + q5))/2  cos(q4 - q5)*(l4+1) 0 0;(l4*cos(q2 + q3 - q5))/2+(l2*cos(q2 + q3 + q4 + q5))/2+(l3*cos(q2 + q5))/2-(l2*cos(q2 + q3 + q4 - q5))/2+(l3*cos(q2 - q5))/2+(l4*cos(q2 + q3 + q5))/2 (l3*sin(q3 + q4 - q5))/2-(l4*sin(q4 + q5))/2+(l4*sin(q4 - q5))/2-(l3*sin(q3 + q4 + q5))/2 sin(q4 - q5)*(l4+1) 0 0;-l2*cos(q2+q3+q4) l3*sin(q3+q4)+l4*sin(q4) l4*sin(q4) 0 0;-cos(q2 + q3 + q4 + q5)/2-cos(q2 + q3 + q4 - q5)/2 sin(q5) sin(q5) sin(q5)  0;sin(q2+q3+q4+q5)/2-sin(q2+q3+q4-q5)/2 cos(q5) cos(q5) cos(q5) 0;-sin(q2 + q3 + q4) 0 0 0 1]
Cif1=pinv(X) %simplifique a mano  antes de hacer la seudo inversa


  



%%ejercisio 4

l5=3;
l1=2;
l2=8;
l3=3
l4=10;
E1=Link([0 11 0 -pi/2 0 -pi/2]);
E2=Link([0 0 0 0  0 0]);
E3=Link([0 0 0 pi/2 0 -pi/2]);
E4=Link([0 l4 0 pi/2 0 0]);
E5=Link([0 0 0 0 0 0]);
Robotinin=SerialLink([E1 E2 E3 E4 E5]);
Robotinin.name='cuarto Robot';
plot(Robotinin,[0 0 0 0 0]);


q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(Robotinin,[q' cero' cero' cero' cero'])
figure(2)
plot(Robotinin,[cero' q' cero' cero' cero'])
figure(3)
plot(Robotinin,[cero' cero' q' cero' cero'])
figure(4)
plot(Robotinin,[cero' cero' cero' q' cero'])
figure(5)
plot(Robotinin,[cero' cero' cero' cero' q'])


clc
clear all
syms l1 l4 l2 l3 l5 q1 q2 q3 q4 q5 real
E1=Link([0 11 0 -pi/2 0 -pi/2]);
E2=Link([0 0 0 0  0 0]);
E3=Link([0 0 0 pi/2 0 -pi/2]);
E4=Link([0 l4 0 pi/2 0 0]);
E5=Link([0 0 0 0 0 0]);
Robotinin=SerialLink([E1 E2 E3 E4 E5]);
Robotinin.name='cuarto Robot';
C=Robotinin.jacob0([q1 q2 q3 q4 q5]) %% Jacobiano 
c=simplify(C)


%%problema 5
 l1=2 
 l1prima=5
 lc=l1prima-l1
 l2=5; 
 l3=5; 
 d2=3;

E1=Link([0 lc 0 pi/2 1 pi/2]);
E2=Link([0 l2 0 -pi/2  0 0]);
E3=Link([0 0 l2+l3 0 0 -pi/2]);
RoboticOc=SerialLink([E1 E2 E3]);
RoboticOc.name='quinto  Robot';
plot(RoboticOc,[0 0 0]);

q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(RoboticOc,[q' cero' cero'])
figure(2)
plot(RoboticOc,[cero' q' cero'])
figure(3)
plot(RoboticOc,[cero' cero' q'])


close all 
clc 
clear all
syms lc l2 l3 q1 q2 q3  real
E1=Link([0 lc 0 pi/2 1 pi/2]);
E2=Link([0 l2 0 -pi/2  0 0]);
E3=Link([0 0 l2+l3 0 0 -pi/2]);
RoboticOc=SerialLink([E1 E2 E3]);
RoboticOc.name='quinto  Robot';
Ci=RoboticOc.jacob0([q1 q2 q3])
ci=simplify(Ci)
a=pinv(ci)
as=simplify(a)


%%ejercicio 6
d1=5;
l1=15;
d2=24;
d3=8;

E1=Link([0 l1 0 -pi/2 0 -pi/2 ]);
E2=Link([0 d2 0 pi/2 1 0]);
E3=Link([0 0 d3 0 0 pi/2]);
RoboDani=SerialLink([E1 E2 E3]);
RoboDani.name='sexto Robot';
plot(RoboDani,[0 0 0]);
q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(RoboDani,[q' cero' cero'])
figure(2)
plot(RoboDani,[cero' q' cero'])
figure(3)
plot(RoboDani,[cero' cero' q'])


clc 
clear all 
syms l1 d2 d3 q1 q2 q3 real

E1=Link([0 l1 0 -pi/2 0 -pi/2 ]);
E2=Link([0 d2 0 pi/2 1 0]);
E3=Link([0 0 d3 0 0 pi/2]);
RoboDani=SerialLink([E1 E2 E3]);
RoboDani.name='sexto Robot';
C=RoboDani.jacob0([q1 q2 q3])
c=simplify(C)
cs=pinv(c)
css=simplify(cs)


%%Ejercicio 7

d1=5;l1=10;d2=2;d2=8;d3=4;
 d4=.8; d5=4;  d6=d5;
E1=Link([0 d1 0  -pi/2 0 -pi/2]);
E2=Link([0 d2 0 pi/2 0 -pi/2]);
E3=Link([0 d3 0 0 1 -pi/2]);
E4=Link([0 0 0 -pi/2 0 0])
E5=Link([0 0 0 pi/2 0 0])
E6=Link ([0 d6 0 0 0 0])
RoboticO=SerialLink([E1 E2 E3 E4 E5 E6]);
RoboticO.name='Segundo Robot'; 
plot(RoboticO,[0 0 0 0 0 0]);

q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(RoboticO,[q' cero' cero' cero' cero' cero'])
figure(2)
plot(RoboticO,[cero' q' cero' cero' cero' cero'])
figure(3)
plot(RoboticO,[cero' cero' q' cero' cero' cero'])
figure(4)
plot(RoboticO,[cero' cero' cero' q' cero' cero'])
figure(5)
plot(RoboticO,[cero' cero' cero' cero' q' cero'])
figure(6)
plot(RoboticO,[cero' cero' cero' cero' q' cero'])

clc
clear all
 syms d1 d2 d3  d4 d6 d5 q1 q2 q3 q4 q5 q6 q7 real
E1=Link([0 d1 0  -pi/2 0 -pi/2]);
E2=Link([0 d2 0 pi/2 0 -pi/2]);
E3=Link([0 d3 0 0 1 -pi/2]);
E4=Link([0 0 0 -pi/2 0 0])
E5=Link([0 0 0 pi/2 0 0])
E6=Link ([0 d6 0 0 0 0])
RoboticO=SerialLink([E1 E2 E3 E4 E5 E6]); 
  
  Gi=RoboticO.jacobn([q1 q2 q3 q4 q5 q6]) %simplificar a mano antes de hacer la seudo inversa
  simplify(Gi) 


%%ejercicio 8 

d1=3;
 l1=5; 
 l2=3; 
 l3=5; 
 d2=3;
 l4=5;

E1=Link([0 l1 0 -pi/2 0 -pi/2]);
E2=Link([0 l1-l2 0 pi/2  0 0]);
E3=Link([0 0 l2 pi/2 0 pi/2]);
E4=Link([0 l3 0 -pi/2 0 0]);
E5=Link([0 0 l4+l3 0 0 pi/2]);
Robotina=SerialLink([E1 E2 E3 E4 E5]);
Robotina.name='octavo Robot';
plot(Robotina,[0 0 0 0 0]);



q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(RoboticO,[q' cero' cero' cero' cero'])
figure(2)
plot(RoboticO,[cero' q' cero' cero' cero'])
figure(3)
plot(RoboticO,[cero' cero' q' cero' cero'])
figure(4)
plot(RoboticO,[cero' cero' cero' q' cero' ])
figure(5)
plot(RoboticO,[cero' cero' cero' cero' q'])

syms l1 l2 l3 l4 q1 q2 q3 q4 real
 E1=Link([0 l1 0 -pi/2 0 -pi/2]);
 E2=Link([0 l1-l2 0 pi/2  0 0]);
E3=Link([0 0 l2 pi/2 0 pi/2]);
E4=Link([0 l3 0 -pi/2 0 0]);
E5=Link([0 0 l4+l3 0 0 pi/2]);
RoboticO=SerialLink([E1 E2 E3 E4 E5]);
RoboticO.name='octavo'; 
Gi=RoboticO.jacobn([q1 q2 q3 q4 q5])
  %simplificar a  mano para  la seudo inversa
  
  %% noveno ejercicio
E01=Link([0 9.75 0 pi/2 0 0]);
E12=Link([0 0 9 0  0 0]);
E23=Link([0 0 9 pi/2 0 0]);
E34=Link([0 3.75 0 pi/2 0 pi/2]);
E45=Link([0 2.75 0 0 0 0]);
Robotrone=SerialLink([E01 E12 E23 E34 E45]);
Robotrone.name='noveno Robot';
plot(Robotrone,[0 0 0 0 0]);

syms q1 q2 q3 q4 q5
q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(Robotrone,[q' cero' cero' cero' cero'])
figure(2)
plot(Robotrone,[cero' q' cero' cero' cero'])
figure(3)
plot(Robotrone,[cero' cero' q' cero' cero'])
figure(4)
plot(Robotrone,[cero' cero' cero' q' cero' ])
figure(5)
plot(Robotrone,[cero' cero' cero' cero' q'])

Gi=Robotrone.jacobn([q1 q2 q3 q4 q5])  %simplificar para  sacar seudo inversa
 
gi=pinv(Gi)



  
  
 
 

