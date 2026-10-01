% This is a project for robotics simulation about differents configurations
% it would be ploetted in 3D   thorught and using for Homogeneus (Denavit Hattemberg)
% transformation

% There function belong  to Toolbox named Robotics and vision Peter Corke
% to execute toolbox check folder named rvtools and run startup_rvc
% for more information about that and some example so excersices  check
% book this program developed  by M. en Mechatronic Alvaro Daniel Soto
% Guerrero adanielsguerrero@hotmail.com




l1=3;
d2=5;d3=4;
d1=4
E1=Link([0 d1 0  -pi/2 0 -pi/2]);
E2=Link([0 d2 0 pi/2 0 -pi/2]);
E3=Link([0 d3 0 0 1 -pi/2]);
E4=Link([0 0 0 -pi/2 0 0]);
E5=Link([0 0 0 pi/2 0 0]);
RoboticO=SerialLink([E1 E2 E3 E4 E5]); 
plot(RoboticO,[0 0 0 0 0]);





syms l1 l2 d3  l3 lf theta theta1 theta2 theta3 theta4 theta5 alpha

x01=denavit(theta1,l1,0,pi/2)
x12=denavit(theta2,l2,0,pi/2)
x23=denavit(+pi/2,d3,0,pi/2)
x34=denavit(theta4,0,0,-pi/2)
x45=denavit(theta5,lf,0,0)

x02=x01*x12
x03=x02*x23

y01=[cos(theta1) 0 sin(theta1) 0;sin(theta1) 0 -cos(theta1) 0;0 1 0 l1;0 0 0 1] 
y12=[cos(theta2) 0 sin(theta2) 0;sin(theta2) 0 -cos(theta2) 0;0 1 0 l2;0 0 0 1]
y23=[0 0 1 0;1 0 0 0;0 1 0 d3;0 0 0 1] 
y34=[cos(theta4) 0 -sin(theta4) 0;sin(theta4) 0 cos(theta4) 0;0 -1 0 0;0 0 0 1] 
y45=x45

y02=y01*y12
y03=y02*y23
y04=y03*y34
y05=y04*y45
yfinal=simplify(y05)

clc
clear all
 syms d1 d2 d3  d4 d6 d5 q1 q2 q3 q4 q5 q6 q7 real
E1=Link([0 d1 0  -pi/2 0 -pi/2]);
E2=Link([0 d2 0 pi/2 0 -pi/2]);
E3=Link([0 d3 0 0 1 -pi/2]);
E4=Link([0 0 0 -pi/2 0 0])
E5=Link([0 0 0 pi/2 0 0])
RoboticO=SerialLink([E1 E2 E3 E4 E5]); 
  
  Gi=RoboticO.jacobn([q1 q2 q3 q4 q5]) %simplificar a mano antes de hacer la seudo inversa
  x=[-d2*cos(q2)*sin(q5)-q3*cos(q2)*cos(q5)*sin(q4) 0 -sin(q5) 0 0]
  
  
  gi=RoboticO.jacob0([q1 q2 q3 q4 q5])
  simplify(Gi) 