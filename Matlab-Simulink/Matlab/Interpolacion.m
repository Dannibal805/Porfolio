%interpolación lineal 
%utilidad de la interpolación reconstruir una señal apartir de su pendiente
%tiene diferentes metodos para realizarlo 
clear 
clc 
close all
x= 0:pi/4:2*pi; %puntos en el tiempo o en x
v= sin(x); % Valores de la señal en los que los puntos estan establecidos


% plot(x,v)

xp= 0:pi/16: 2*pi;
% interpolacion lineal 
vq1 = interp1(x,v,xp);

figure()
plot(x,v,'o',xp,vq1,':*');

legend('Valores conocidos','Valores interpolados');
title('Puntos de interpolación lineal')

%interpolacion por spline 
vq2 = interp1(x,v,xp,'splines');

figure()
plot(x,v,'o',xp,vq2,':*');

legend('Valores conocidos','Valores interpolados');
title('Puntos de interpolación Spline')

%Señal cargada
load('ECG.txt')
vq =  interp1(ECG,[1:0.25:704],'splines');
figure()
plot((1:704),ECG,'o',[1:0.25:704],vq,':.');