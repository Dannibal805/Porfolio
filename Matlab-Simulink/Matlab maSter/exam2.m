% This is a project for robotics simulation about differents configurations
% it would be ploetted in 3D thorught and using for Homogeneus
% transformation

%  there function belong  to Toolbox named Robotics and vision Peter Corke
%  to execute toolbox check folder named rvtools and run startup_rvc
% for more information about that and some example so excersices  check
% book this program developed  by M. en Mechatronic Alvaro Daniel Soto
% Guerrero adanielsguerrero@hotmail.com


l1=.5
 d2=.7
E1=Link([0 0 0 -pi/2 0 0])
E2=Link([0 0 d2 0 0 -pi/2])
Robotica=SerialLink([E1 E2])
Robotica.name='Primero Robot'
plot(Robotica,[0 0  ]) 

hold on 


%%aki esta mi ejercisio dos de mi examen 
E4=Link([.6457 0 0 -pi/2 0 -pi/2]);
E5=Link([0 1.05 0 pi/2 1 pi/2]);
E6=Link([pi/4 0 .35 0 0  0])
Roboticoni=SerialLink([E4 E5 E6])
Roboticoni.name='Segundo Robot'
plot(Roboticoni,[0 0 0 ])

hold on 

A01=[cos(.6457-pi/2) 0 -sin(.6457-pi/2) 0;sin(.6457-90) 0 cos(.6457-90) 0;0 -1 0 0;0 0 0 1]
A12=[1 0 0 0;0 0 -1 0;0 1 0 1.05;0 0 0 1]
A23=[cos(pi/4) -sin(pi/4) 0 .35*cos(pi/4);sin(pi/4) cos(pi/4) 0 .35*sin(pi/4);0 0 1 0;0 0 0 1]
A02=A01*A12
A03=A02*A23

%%tercer ejercisio  

E7=Link([0 0.7 0 pi/2 0 pi/2])
E8=Link([0 .5 0 pi 0 pi/2])
E9=Link([0 1 0 0 1  0])
Roboticon=SerialLink([E7 E8 E9])
Roboticon.name='Tercer Robot'
plot(Roboticon,[0 0 0 ])

