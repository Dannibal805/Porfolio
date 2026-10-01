%%practica 4
% se declaran los  parametros de Denavit   y se le aplican valores
% ploteandolo   para observar las articulaciones del robot 
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


syms d1 d2 d3  d4 d6 d5 q1 q2 q3 q4 q5 q6 q7 real
E1=Link([0 d1 0  -pi/2 0 -pi/2]);
E2=Link([0 d2 0 pi/2 0 -pi/2]);
E3=Link([0 d3 0 0 1 -pi/2]);
E4=Link([0 0 0 -pi/2 0 0])
E5=Link([0 0 0 pi/2 0 0])
E6=Link ([0 d6 0 0 0 0])
RoboticO=SerialLink([E1 E2 E3 E4 E5 E6]); 

 Gi=RoboticO.jacobn([q1 q2 q3 q4 q5 q6])
 Gi=RoboticO.jacob0([q1 q2 q3 q4 q5 q6])
  %simplificar a  mano para  la seudo inversa
  
  
 
 