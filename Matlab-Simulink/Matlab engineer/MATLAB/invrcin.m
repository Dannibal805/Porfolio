E1=Link([0 5 0 pi/2 0 pi/2]);
E2=Link([0 0 0 pi/2 0 pi/2]);
E3=Link([0 0 0 0 1 5]);
E4=Link([0 0 0 -pi/2 0 0]);
E5=Link([0 0 0 pi/2 0 0]);
E6=Link([0 0.3 0 0 0 0]);
Esferico=SerialLink([E1 E2 E3 E4 E5 E6]);
mitadEsferico=SerialLink([E1 E2 E3]);
figure(1)
plot(Esferico,[0 0 0 0 0 0]);
figure(2)
plot(mitadEsferico,[0 0 0]);
%mitadesferico.ikine([1 0 0 7;0 1 0 7;0 0 1 7;0 0 0 0