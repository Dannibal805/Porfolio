%CINEMATICA DIRECTA
L1=Link([0 1.5 .7 0 0 ])
L2=Link([0 0 1.8 pi 0 ])
L3=Link([0 4 0 0 1 ])
r=SerialLink([L1 L2 L3])
plot (r,[0 0 0])

%% CINEMATICA INVERSA
 T=[1 0 0 2;0 1 0 -2;0 0 2 0;0 0 0 2];
 q=ikine(r,T,[0 0 0],[1 1 1 0 0 0])
 
 syms ang2 ang3
 A01=denavit(0,1.5,0.7,0)
A12=denavit(ang2,3,1,pi)
A23=denavit(ang3,4,0,0)
A02=A01*A12
A03=A02*A23