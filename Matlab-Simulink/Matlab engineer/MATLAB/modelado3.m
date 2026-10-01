clc;%borrar pantalla
clear all;%limpiar variables 
close all;%Cerrar ventanas 

theta=[0:0.05:15];
Tiemp=[0:0.05:15];
plot(Tiemp,sin(theta),'r');
disp (sin(theta));
ylabel ('sin y cos ' )
title ('graficacion')
hold on %mantener imagen anterior 
plot (Tiemp,cos(theta),'b');

figure(2) %hacer otra  grafica 
plot (Tiemp,tan(theta),'g')

figure(3)
subplot(2,3,3)
xlabel('tiempo')
ylabel ('sin y cos ' )
plot3(sin(theta),cos(theta),Tiemp)

figure(4)
subplot(2,3,1)
xlabel('tiempo')
ylabel ('sin y cos ' )
plot(Tiemp,sin(theta));

hold on 

subplot(2,3,6)
xlabel('tiempo')
ylabel ('sin y cos ' )
plot(Tiemp,sin(theta));

figura(5)


