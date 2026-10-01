% This code is to generate a graph and simulation a real case of  power
% kite. This part of a wide project of my master degree what purpuse was
% generate energy. For more information contact to me M. in Mechatronic
% engineer Alvaro Daniel Soto Guerrero  mail: adanielsguerrero@hotmail.com
% Flying in mode simple 


clear all  %estudio de análisis de potencia y tensión en vuelo simple kite 
clc
% clprom es 0.1354 y cdprom = 0.0316

vw=6; %viento perpendicular al sistema
vl=0.5*vw; % velocdidad del cable 
Vratio=vl/vw;  %proporcion de velocidad
Ak=  2.125;   % Area del kite 

dsy= 1.2;  %densidad deacuerdo al nivel del mar
V=rand(1,9); % solo fue para sacar un vector de uno por 9 
 i=1;
 j=1;
cl=[-0.05 -.014 0.035 .075 0.103 .182 .267 .309 .312]; % coeficiente de sustentación 
cd=[0.045 0.035 0.022 0.020 0.018 0.019 0.026 0.042 0.057];  % coeficiente de arrastre 
e=cl./cd  % es la forma correcta de aii/bii
alpha=[-20 -15 -10 -5 0 5 10 15 20];

while i<=9
    b(i)=vl*e(i)/(sqrt(e(i)^2 +1));
        i=i+1;
end
b
i=1;
while i<=9
        %c(i)=b(i)/sqrt(e(i)^2);  %detalle en ecu
       c(i)=vl/sqrt(e(i)^2+1);
        i=i+1;
end
c
i=1;

while i<=9
        va(i)=sqrt(vw^2-b(i)^2)-c(i);    %velocidad aparente del viento 
        i=i+1;
end
va

vas= va;

L= 1/2*1.2*2.15; % 1/2*rHo*A
%CD=.5*.05*576*1.2*10*2;
m=1;
n=9;

 i=1;
while i<=length(V)
    Lift(i)=L*cl(i)*va(i)^2; %fuerza de empuje
    i=i+1;
end
Lift
Ls= Lift;
i=1;
while i<=length(V)
 T(i)=Lift(i)*sqrt(1+1/e(i)^2) %tensión ;
    i=i+1;
end
T
TS=T;
i=1;

while i<=length(V)
 P(i)=vl*T(i) %Potencia ;
    i=i+1;
end
Ps=P;
figure(1)
plot(alpha,T)
title('Tensión vs àngulo de ataque (\alpha)')
ylabel('Tensión (N)')
xlabel('Ángulo de ataque (\alpha)')
grid on


figure(2)
plot(alpha,P)
title('Potencia vs àngulo de ataque (\alpha)')
ylabel('Potencia (Watt)')
xlabel('Ángulo de ataque (\alpha)')
grid on