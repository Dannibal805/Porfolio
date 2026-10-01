clc;
clear all;
close all;
wn=2;
am=1;
num=[ wn^2]
den=[1 2*am*wn  wn*wn]
sys=idtf(num,den)
roots(den); %da las raices de los polinomios
step(sys); %inyecta una entrada escalon al sistema 
grid on ;