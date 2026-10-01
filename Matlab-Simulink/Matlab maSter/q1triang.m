x=0:0.01:2;        % union de trayectoria de q1
a=[0   -0.0000         0    0.9818   -0.7363    0.1473]

y= a(1)+a(2)*(x)+a(3)*(x.^2)+a(4)*(x.^3)+a(5)*(x.^4)+a(6)*(x.^5);
yd= a(2)+2*a(3)*(x)+3*a(4)*(x.^2)+4*a(5)*(x.^3)+5*a(6)*(x.^4);
ydd= 2*a(3)+6*a(4)*(x)+12*a(5)*(x.^2)+20*a(6)*(x.^3);
%segundo polinomio en un tiempo de un segundo 
% iniciando desde uno hasta dos lapso de uno 
x1= 2:0.01:4;

a1=[ 0.7854         0         0    0.4021   -0.3016    0.0603]


y1= a1(1)+a1(2)*(x)+a1(3)*(x.^2)+a1(4)*(x.^3)+a1(5)*(x.^4)+a1(6)*(x.^5);
y1d= a1(2)+2*a1(3)*(x)+3*a1(4)*(x.^2)+4*a1(5)*(x.^3)+5*a1(6)*(x.^4);
y1dd= 2*a1(3)+6*a1(4)*(x)+12*a1(5)*(x.^2)+20*a1(6)*(x.^3);     %% estaba mal esta parte 

  %Tercer punto  recordar que si se pone así es necesario indexar +1 
x2= 4:0.01:6;
a=[1.1071         0         0   -0.5795    0.4346   -0.0869]

y2= a(1)+a(2)*(x)+a(3)*(x.^2)+a(4)*(x.^3)+a(5)*(x.^4)+a(6)*(x.^5);
y2d= a(2)+2*a(3)*(x)+3*a(4)*(x.^2)+4*a(5)*(x.^3)+5*a(6)*(x.^4);
y2dd= 2*a(3)+6*a(4)*(x)+12*a(5)*(x.^2)+20*a(6)*(x.^3);
%



  %Tercer punto  recordar que si se pone así es necesario indexar +1 here
x3= 6:0.01:8;
a=[ 0.6435         0         0    0.1774   -0.1330    0.0266]

y3= a(1)+a(2)*(x)+a(3)*(x.^2)+a(4)*(x.^3)+a(5)*(x.^4)+a(6)*(x.^5);
y3d= a(2)+2*a(3)*(x)+3*a(4)*(x.^2)+4*a(5)*(x.^3)+5*a(6)*(x.^4);
y3dd= 2*a(3)+6*a(4)*(x)+12*a(5)*(x.^2)+20*a(6)*(x.^3);


%  cuarta traycetoria 

% a1=[0.8157    0    0    0.0451   -0.0000   -0.0068]
% 
%   %cuarto punto  recordar que si se pone así es necesario indexar +1 
% x4= 12:0.01:15;
% y4= a1(1)+a1(2)*(x)+a1(3)*(x.^2)+a1(4)*(x.^3)+a1(5)*(x.^4)+a1(6)*(x.^5);
% y4d= a1(2)+2*a1(3)*(x)+3*a1(4)*(x.^2)+4*a1(5)*(x.^3)+5*a1(6)*(x.^4);
% y4dd= 2*a1(3)+6*a1(4)*(x.^2)+12*a1(5)*(x.^3)+20*a1(6)*(x.^3);

% quinta trayctoria 



%generación de las gráficas
figure;
subplot(3,1,1);
plot(x,y, '.-'); hold on; plot(x1,y1,'.-'); plot(x2,y2,'.-');  plot(x3,y3,'.-');% plot(x4,y4,'.-');
grid on; xlabel('Tiempo'); ylabel('Posición')
axis auto

subplot(3,1,2);
plot(x,yd, '.-'); hold on; plot(x1,y1d,'.-'); hold on; plot(x2,y2d,'.-');  plot(x3,y3d,'.-'); %plot(x4,y4d,'.-');
grid on; xlabel('Tiempo'); ylabel('velocidad')

subplot(3,1,3);
plot(x,ydd, '.-'); hold on; plot(x1,y1dd,'.-'); hold on; plot(x2,y2dd,'.-'); plot(x3,y3dd,'.-'); %plot(x4,y4dd,'.-');
grid on; xlabel('Tiempo'); ylabel('Acell')

% 
x=0:0.01:2;        % union de trayectoria de q2
 a=[0   -0.0000         0    0.9274   -0.6955    0.1391]

y= a(1)+a(2)*(x)+a(3)*(x.^2)+a(4)*(x.^3)+a(5)*(x.^4)+a(6)*(x.^5);
yd= a(2)+2*a(3)*(x)+3*a(4)*(x.^2)+4*a(5)*(x.^3)+5*a(6)*(x.^4);
ydd= 2*a(3)+6*a(4)*(x)+12*a(5)*(x.^2)+20*a(6)*(x.^3);
%segundo polinomio en un tiempo de un segundo 
% iniciando desde uno hasta dos lapso de uno 
x1= 2:0.01:4;

a1=[  0.8164    0.0000         0   -0.0076    0.0057   -0.0011]


y1= a1(1)+a1(2)*(x)+a1(3)*(x.^2)+a1(4)*(x.^3)+a1(5)*(x.^4)+a1(6)*(x.^5);
y1d= a1(2)+2*a1(3)*(x)+3*a1(4)*(x.^2)+4*a1(5)*(x.^3)+5*a1(6)*(x.^4);
y1dd= 2*a1(3)+6*a1(4)*(x)+12*a1(5)*(x.^2)+20*a1(6)*(x.^3);     %% estaba mal esta parte 

  %Tercer punto  recordar que si se pone así es necesario indexar +1 
x2= 4:0.01:6;
a=[1.1071         0         0   -0.5795    0.4346   -0.0869]

y2= a(1)+a(2)*(x)+a(3)*(x.^2)+a(4)*(x.^3)+a(5)*(x.^4)+a(6)*(x.^5);
y2d= a(2)+2*a(3)*(x)+3*a(4)*(x.^2)+4*a(5)*(x.^3)+5*a(6)*(x.^4);
y2dd= 2*a(3)+6*a(4)*(x.^2)+12*a(5)*(x.^3)+20*a(6)*(x.^3);
%



  %Tercer punto  recordar que si se pone así es necesario indexar +1 here
x3= 6:0.01:8;
a=[ 0.8164    0.0000         0   -0.0076    0.0057   -0.0011]

y3= a(1)+a(2)*(x)+a(3)*(x.^2)+a(4)*(x.^3)+a(5)*(x.^4)+a(6)*(x.^5);
y3d= a(2)+2*a(3)*(x)+3*a(4)*(x.^2)+4*a(5)*(x.^3)+5*a(6)*(x.^4);
y3dd= 2*a(3)+6*a(4)*(x.^2)+12*a(5)*(x.^3)+20*a(6)*(x.^3);


%  cuarta traycetoria 

% a1=[0.8103    0.0000         0   -0.0855    0.0641   -0.0128]
% 
%   %cuarto punto  recordar que si se pone así es necesario indexar +1 
% x4= 12:0.01:15;
% y4= a1(1)+a1(2)*(x)+a1(3)*(x.^2)+a1(4)*(x.^3)+a1(5)*(x.^4)+a1(6)*(x.^5);
% y4d= a1(2)+2*a1(3)*(x)+3*a1(4)*(x.^2)+4*a1(5)*(x.^3)+5*a1(6)*(x.^4);
% y4dd= 2*a1(3)+6*a1(4)*(x.^2)+12*a1(5)*(x.^3)+20*a1(6)*(x.^3);

% quinta trayctoria 



%generación de las gráficas
% figure(2)
% subplot(3,1,1);
% plot(x,y, '.-'); hold on; plot(x1,y1,'.-'); plot(x2,y2,'.-');  plot(x3,y3,'.-');% plot(x4,y4,'.-');
% grid on; xlabel('Tiempo'); ylabel('Posición')
% axis auto
% 
% subplot(3,1,2);
% plot(x,yd, '.-'); hold on; plot(x1,y1d,'.-'); hold on; plot(x2,y2d,'.-');  plot(x3,y3d,'.-'); %plot(x4,y4d,'.-');
% grid on; xlabel('Tiempo'); ylabel('velocidad')
% 
% subplot(3,1,3);
% plot(x,ydd, '.-'); hold on; plot(x1,y1dd,'.-'); hold on; plot(x2,y2dd,'.-'); plot(x3,y3dd,'.-'); %plot(x4,y4dd,'.-');
% grid on; xlabel('Tiempo'); ylabel('Acell')