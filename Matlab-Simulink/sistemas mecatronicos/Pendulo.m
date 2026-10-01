clc
clear
close all
%t=[0:1:10];
D=load('Bd.txt');

t=D(:,1);
T=D(:,2);
U=D(:,3);
F=D(:,4);

plot(t,T,'b')
title('Grafica de polos conjugados')
xlabel('Tiempo(s)')
ylabel('°')
legend('grados')
grid
%plot(t,T)
title('Grafica Raices iguales')
%xlabel('Tiempo(s)')
%ylabel('Tiempo(s)')
l%egend('°')