% This is a project for robotics simulation about differents configurations
% it would be ploetted in 3D with movement  thorught and using for Homogeneus
% transformation (Denavit hattemberg)


%  there function belong  to Toolbox named Robotics and vision Peter Corke
%  to execute toolbox check folder named rvtools and run startup_rvc
% for more information about that and some example so excersices  check
% book this program developed  by M. en Mechatronic Alvaro Daniel Soto
% Guerrero adanielsguerrero@hotmail.com









 d1=3;
 l1=2; 
 l2=2; 
 l3=2; 
 d2=3;
 l4=1;

E1=Link([0 0 l2 pi/2 0 -pi]);
E2=Link([0 0 0 0 1 l1+l3]);
E3=Link([0 0 l4 0 0 0]);

Robotina=SerialLink([E1 E2 E3]);
Robotina.name='Examen';
plot(Robotina,[0 0 0]);


% 
% 
% q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
% cero=q*0;
% figure(1)
% plot(Robotina,[q' cero' cero'])
% figure(2)
% plot(Robotina,[cero' q' cero'])
% figure(3)
% plot(Robotina,[cero' cero' q'])
% clc
% clear all
% syms l1 l2 l3 l4 q1 q2 q3 q4 real
% E1=Link([0 0 l2 pi/2 0 -pi]);
% E2=Link([0 l1+l2+l3 0 0 1  pi]);
% E3=Link([0 0 l4 0 0 0]);
% Robotina=SerialLink([E1 E2 E3]);
% Gi=Robotina.jacobn([q1 q2 q3])
%   %simplificar a  mano para  la seudo inversa
% G=pinv(Gi)
% x=simplify(G)