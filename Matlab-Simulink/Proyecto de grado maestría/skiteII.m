% This code was part of my master degree project  tituled  a machine  for
% generate energy with a kite.  This mode is crosswind is posible to
% generate energy and know how many energy can be produce this machine
% before to built a machine so present how the energy interact with some
% variables in the system. For more information keep in touch with me M.in
% mechatronic engineer Alvaro Daniel Soto mail:
% adanielsguerrero@hotmail.com



clear all  %estudio de análisis de potencia y tensión en vuelo Crosswind 
clc
vw=6; %viento perpendicular al sistema
vl=0.32*vw; % velocdidad del cable 
Vratio=vl/vw;  %proporcion de velocidad
Ak=  2.125;   % Area del kite 
Vefec= vw-vl;

dsy= 1.2;  %densidad deacuerdo al nivel del mar
V=rand(1,9);
 i=1;
 j=1;
cl=[-0.05 -.014 0.035 .075 0.103 .182 .267 .309 .312]; % coeficiente de sustentación 
cd=[0.045 0.035 0.022 0.020 0.018 0.019 0.026 0.042 0.057];  % coeficiente de arrastre 
e=cl./cd  % es la forma correcta de aii/bii
alpha=[-20 -15 -10 -5 0 5 10 15 20];


% if L== K
%     N= 1;
% else N= 0;
% end

while i<=9
        va(i)=vw-vl*e(i);    %velocidad aparente del viento  duda en caso que no sea largo es igual a vw - vl
        i=i+1;
end
va  %vc
Vac=va;

L= 1/2*1.2*0.08; % 1/2*rHo*A
%CD=.5*.05*576*1.2*10*2;
m=1;
n=9;
V=rand(1,9)  % lo mismo crea un vector de 1 x 9 
 i=1;
while i<=length(V)
    Lift(i)=L*cl(i)*(vw-vl)^2*(e(i))^2; %fuerza de empuje
    i=i+1;
end
Lift
Lfc= Lift;
i=1;
% while i<=length(V)
%  T(i)=L*sqrt(1+1/e(i)^2) %tensión ;
%     i=i+1;
% end
% T % no hay tensión para este vuelo ya que se allá colineal con el veinto 
i=1;

while i<=length(V)
 P(i)=vl*Lift(i) %Potencia ;
    i=i+1;
end
Pcross= P;

figure(1)
plot(alpha, Lift)
title('Lift vs Ángulo de ataque (\alpha) ')
ylabel('Lfit (N)')
xlabel('Ángulo de ataque (\alpha)')
grid on


figure(2)
plot(alpha,P)
title('Potencia vs àngulo de ataque (\alpha)')
ylabel('Potencia (Watt)')
xlabel('Ángulo de ataque (\alpha)')
grid on    % duda aquí como porque obtiene Fs, Fc y Fd

figure(3)
plot(e,P)
title('Potencia vs L/Dk')
ylabel('Potencia (Watt)')
xlabel('Eficiencia')
grid on    % duda aquí como porque obtiene Fs, Fc y Fd