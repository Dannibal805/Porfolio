clear all ;
close all;
clc;


global u1 

 u1=2;
 
 %ode ordinaru differential equation 4 y 5 orden 
 
 [t,x]=ode45('minino',[0 10],[0 0 0]);
 
 
 %'nombre de archivo' , [t. inicial t. final], [cond .iniciales ]
plot(t,x)
figure(2)
plot(t,x(x:,1));
fugure(3)
plot(t,x(:2));
figure(4)
plot(t,x(:3));
