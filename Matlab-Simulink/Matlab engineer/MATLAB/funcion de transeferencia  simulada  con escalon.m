clc;
clear all;
close all;

num=[3 2 1]
den=[1 8 3 4]
sys=idtf(num,den)
roots(den); %da las raices de los polinomios
step(sys); %inyecta una entrada escalon al sistema 
