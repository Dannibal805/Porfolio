%% Robot uno 
d1=5;
l1=10;
d2=2;
d2=8;
d3=4;

E1=Link([0 d1+l1 0 0 1 0]);
E2=Link([0 0 -d2 -pi/2 0 -pi/2]);
E3=Link([0 0 -d3 0 0 0]);
RoboticO=SerialLink([E1 E2 E3]);

RoboticO.name='Segundo Robot';
plot(RoboticO,[0 0 0]);
q1=0:0.01:pi/2;
d2=zeros(1,length(q1));
q3=d2;
plot(RoboticO,[q1' d2' q3']);
%%Problema 3 

E1=Link([0 13 0 -pi/2 0 0]);
E2=Link([0 6 8 0  0 0]);
E3=Link([0 0 8 0 0 0]);
E4=Link([0 0 0 pi/2 0 pi/2]);
E5=Link([0 0 0 0 0 0]);
Robotini=SerialLink([E1 E2 E3 E4 E5]);
Robotini.name='tercer Robot';
plot(Robotini,[0 0 0 0 0]);

%% Problema 4 
l5=3;
l1=2;
l2=8;
l3=3
l4=10;
E1=Link([0 11 0 -pi/2 0 -pi/2]);
E2=Link([0 0 -l2 0  0 pi/2]);
E3=Link([0 l3 0 pi/2 0 0]);
E4=Link([0 l4 0 pi/2 0 0]);
E5=Link([0 0 l5 0 0 0]);
Robotini=SerialLink([E1 E2 E3 E4 E5]);
Robotini.name='cuarto Robot';
plot(Robotini,[0 0 0 0 0]);

%%problema 5
 l1=2 
 l2=5; 
 l3=5; 
 d2=3;

E1=Link([0 l1 0 pi/2 1 pi/2]);
E2=Link([0 l2 0 -pi/2  0 0]);
E3=Link([0 0 +l3 0 0 -pi/2]);
RoboticOc=SerialLink([E1 E2 E3]);
RoboticOc.name='quinto  Robot';
plot(RoboticOc,[0 0 0]);


%%Problema 6
d1=5;
l1=15;
d2=24;
d3=8;

E1=Link([0 l1 0 -pi/2 0 -pi/2 ]);
E2=Link([0 d2 0 pi/2 1 0]);
E3=Link([0 0 d3 0 0 0]);
RoboDani=SerialLink([E1 E2 E3]);
RoboDani.name='sexto Robot';
plot(RoboDani,[0 0 0]);
q1=0:0.01:pi/2;
d2=zeros(1,length(q1));
q3=d2;
plot(RoboDani,[q1' d2' q3']);
%E1=Link([0 l1 0 -pi/2 0 -pi/2 ]);
%E2=Link([0 0 d2 pi/2 1 0]);
%E3=Link([0 0 d3 0 0 0]);


%%septimo ejercicio 
l1=3
l2=5
l3=4
d4=6

G01=Link([0 l1 0 -pi/2 0 0])
G12=Link([0 l2 0 -pi/2 0 +pi/2])
G23=Link([0 l3 0 -pi/2 1 pi/2])
G34=Link([0 0 d4 0 0 -pi/2])
Robocob=SerialLink([G01 G12 G23 G34]);
Robocob.name='quinto Robot';
plot(Robocob,[0 0 0 0])


%%ejercisio 8
d1=3;
 l1=5; 
 l2=3; 
 l3=5; 
 d2=3;
 l4=5;

E1=Link([0 0 0 -pi/2 0 -pi/2]);
E2=Link([0 l1 0 pi/2  0 0]);
E3=Link([0 0 l2 pi/2 0 pi/2]);
E4=Link([0 l3 0 -pi/2 0 0]);
E5=Link([0 0 l4 0 0 pi/2]);
Robotina=SerialLink([E1 E2 E3 E4 E5]);
Robotina.name='octavo Robot';
plot(Robotina,[0 0 0 0 0]);


%% l5=3; noveno ejrcisio 
E01=Link([0 9.75 0 pi/2 0 0]);
E12=Link([0 0 9 0  0 0]);
E23=Link([0 0 9 pi/2 0 0]);
E34=Link([0 0 0 pi/2 0 pi/2]);
E45=Link([0 2.75 3.25 0 0 0]);
Robotrone=SerialLink([E01 E12 E23 E34 E45]);
Robotrone.name='noveno Robot';
figure(1)
plot(Robotrone,[0 0 0 0 0]);
Robotrone=SerialLink([E01 E12 E23])
figure(2)
plot(Robotrone,[0 0 0])
%%
E4=Link([90 8 0 -pi/2 1 0]);
E5=Link([0 0 80 0 0 0]);
E6=Link([0 0 65 0 0 pi/2]);
E7=Link([0 20 0 0 0 0]);
Robocata=SerialLink([E4 E5 E6 E7]);
Tobocata.name='tercero Robot';
plot(Robocata,[0 0 0 0]);


















