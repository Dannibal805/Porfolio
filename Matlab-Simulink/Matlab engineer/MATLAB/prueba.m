d1=5;
l1=10;
d2=2;
d3=8;
d3=4;

E1=Link([0 l1 0 pi/2 1 0]);
E2=Link([0 0 d2 -pi/2 0 pi/2]);
RoboticO=SerialLink([E1 E2]);
RoboticO.name='Segundo Robot';

plot(RoboticO,[0 0]);
RoboticO.shadowopt='Color','black';'Linewidth',20;


