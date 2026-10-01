% This code is a demostrate how can view a polynominal algorith like to
% generate position, velocity and aceleration applay in dynamic robotics


x=0:0.01:1;
y= 10+60*(x.^2)-40*(x.^3);
yd= 120*x-120*(x.^2);
ydd= 120-240*x;  %def tres ecuaciones polinomio cubico 

x1= 1:0.01:2;
y1= 30-60*(x1-1)+250*((x1-1).^2)-150*((x1-1).^3);
yd1= 60+500*(x1-1)-450*((x1-1).^2);
ydd1= 500-900*(x1-1);

%generación de las gráficas

figure;
subplot(3,1,1);
plot(x,y, '.-'); hold on; plot(x1,y1,'.-');
grid on; xlabel('Tiempo'); ylabel('Posición')

subplot(3,1,2);
plot(x,yd, '.-'); hold on; plot(x1,yd1,'.-');
grid on; xlabel('Tiempo'); ylabel('velocidad')

subplot(3,1,3);
plot(x,ydd, '.-'); hold on; plot(x1,ydd1,'.-');
grid on; xlabel('Tiempo'); ylabel('Acell')