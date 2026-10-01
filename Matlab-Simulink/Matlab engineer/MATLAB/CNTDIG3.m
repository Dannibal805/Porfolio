clc
clear all
% Sistema
G=[0 1;-.4 1.3]
H=[0 1]'
% Condición inicial
x0=[10 -10]'
% Estado final
x2=[200 200]'
% Cálculo de u pata ir de x0 a x2
u=inv([H G*H])*(x2-(G^2)*x0)
% Cálculo de x1
x1=G*x0+H*u(2)
% Comprobación,debe dar x2
G*x1+H*u(1)

% Matrizde salida
C=[1 0]
% Salida en 0
Y0=C*x0
% Salida en 1 
Y1=C*x1
% debemos obtener x0
inv([C;C*G])*[Y0;Y1]

