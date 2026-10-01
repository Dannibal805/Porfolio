d1=3;
 l1=5; 
 l2=3; 
 l3=5; 
 d2=3;
 l4=5;

E1=Link([0 0 l2 pi/2 0 -pi]);
E2=Link([0 l1+l2+l3 0 0 1  pi]);
E3=Link([0 0 l4 0 0 0]);

Robotina=SerialLink([E1 E2 E3]);
Robotina.name='Examen';
plot(Robotina,[0 0 0]);




q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(Robotina,[q' cero' cero'])
figure(2)
plot(Robotina,[cero' q' cero'])
figure(3)
plot(Robotina,[cero' cero' q'])
clc
clear all
syms l1 l2 l3 l4 q1 q2 q3 q4 theta1 theta2 theta3 real
E1=Link([0 0 l2 pi/2 0 -pi]);
E2=Link([0 l1+l2+l3 0 0 1  pi]);
E3=Link([0 0 l4 0 0 0]);
Robotina=SerialLink([E1 E2 E3]);
Gi=Robotina.jacobn([q1 q2 q3])
  %simplificar a  mano para  la seudo inversa
G=pinv(Gi)
x=simplify(G)
Lq=l1+l2+l3

x01=denavit(theta1,0,l2,pi/2)
x12=denavit(theta2+pi,Lq,0,0)
x23=denavit(theta3,0,l4,0)
y01=[cos(theta1) 0 sin(theta1) l2*cos(theta1);sin(theta1) 0 -cos(theta1) l2*sin(theta1);0 1 0 0;0 0 0 1]

x02=y01*x12
x03=x02*x23
z=simplify(x03)

