clear; clc; close all;

% Definir una señal

x = 0:10; % Puntos en el tiempo o eje x
v = (x.^3)+(x.^2)+3.*x-1; % Valores de la señal en los puntos establecidos

xq = -20:0.5:20;

% Extrapolación lineal

vq1 = interp1(x,v,xq,'splines','extrap');
figure()
plot(x,v,'o',xq,vq1,':.')
legend('Valores conocidos','Valores extrapolados')
title('Puntos de Extrapolación lineal')