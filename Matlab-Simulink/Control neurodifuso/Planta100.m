%% Planta a 100
format long
num1=[-0.009119 0.001707 5.83e-06];
format long
den1=[1 0.002786 1.988e-08];

[A1,B1,C1,D1]=tf2ss(num1,den1);
roots(den1);
P=[-8, -.00001];

K1=acker(A1,B1,P)
 AA=  [-0.002786000000000  -0.000000019880000;
         1.000000000000000                   0]
  BB=[1;0]
 G=[.005 0;0 .005]
 MM=(AA-BB*K1)'*G*(AA-BB*K1)-G

