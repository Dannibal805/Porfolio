l1=.5
l2=.5
E1=Link([0 l1 0 pi/2 0 0]);
E4=Link([0 0 0 pi/2 0 pi/2]);
E5=Link([0 0 0 0 1 l2]);
Roboti=SerialLink([E1 E4 E5])
plot(Roboti,[0 0 0]);
%%
%se puede animar creando variables  que  pueden generar muchos puntos
%q todos lo valores de esa ariculacion
q=0:0.01:2*3.1416
cero=q*0;
figure(1)
plot(Roboti,[q' cero' cero'])
figure(2)
plot(Roboti,[cero' q' cero'])
plot(Roboti,[cero' cero' q'])
%%
syms l1 l2 q1 q2 q3 q4 real
E1=Link([0 l1 0 pi/2 0 0]);
E4=Link([0 0 0 pi/2 0 pi/2]);
E5=Link([0 0 0 0 1 l2]);
Roboti=SerialLink([E1 E4 E5])
CinDiff=Roboti.jacob0([q1 q2 q3])
%el otro jacob  se busca referido a la muñeca%jacob referido a la sistema de la base
%

