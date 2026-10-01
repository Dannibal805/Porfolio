clc;
clear all;

x=[-1.5:0.01:1.5];
tiempo=[-1.5:0.01:1.5];
plot(tiempo,tan(x),'r');
ylabel ('funcion de tangene')
title ('grafica tangente')
grid on
hold on


syms y
ec=y^3-2*-5;
solve (ec)



theta = input ('Dame el angulo en radianes: ');
z=((sin(theta)+(cos(theta))*1i)+(sin(theta)-(cos(theta))*1i))/2;
disp(z)
figure(2)
Tiemp=theta;
plot(Tiemp,z,'r');
ylabel ('cos ' )
title ('graficacion')
grid on 
hold on



thetA = input ('Dame el angulo en radianes: ');
v=((sin(thetA)+(cos(thetA))*1i)+(-sin(thetA)+(cos(thetA))*1i))/2*1i;
disp(v)
figure(3)
TiempO=theta;
plot(TiempO,v,'b');
ylabel ('sen ' )
title ('graficacion')
grid on 
hold on 

 
