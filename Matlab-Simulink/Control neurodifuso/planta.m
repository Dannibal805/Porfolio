clc
% format long
% num=[9.28325 -5]
% format long
% den=[1 .13385 6.739e-15]
% [A,B,C,D]=tf2ss(num,den);
% G=tf(num,den);
% roots(den)
% P=[-0.8, -.134];
% %K=place(A,B,P)
% K=acker(A,B,P)
% t = 0:0.01:2;
% %u = zeros(size(t));
% x0 = [0.01 0 0];
% u=-K;
% 
% sys_cl = ss(A-B*K,B,C,0);
% 
% lsim(sys_cl,u,t,x0);
% xlabel('Time (sec)')
% ylabel('Ball Position (m)')
%% planta de 200

format long
num=[0.000899 3.76e-06]
format long
den=[1 0.00340157 1.623e-08]
[A,B,C,D]=tf2ss(num,den);
G=tf(num,den);
roots(den)
P=[-9, -.001];
%K=place(A,B,P)
K=acker(A,B,P)
t = 0:0.01:2;
%u = zeros(size(t));
x0 = [0.01 0 0];
u=-K;
rank(ctrb(A,B))
AA= [-0.003401570000000  -0.000000016230000;
   1.000000000000000                   0]
BB=[1;0]
G=[.005 0;0 .005]
MM=(AA-BB*K)'*G*(AA-BB*K)-G


 sys_cl = ss(A-B*K,B,C,0);
% 
 %lsim(sys_cl,u,t,x0);
 %xlabel('Time (sec)')
 %ylabel('Ball Position (m)')
