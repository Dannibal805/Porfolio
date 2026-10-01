%CINEMATICA DIRECTA
L1=Link([1 0.7 0 0 0 0])
L2=Link([2.77 0.7 0 pi 0 0])
L3=Link([0 2.48 0 0 1 0])
r=robot([L1 L2 L3])
robot=SerialLink([L1 L2 L3])
plot (robot,[0 0 0])

% CINEMATICA INVERSA
% L1=Link([0 0 56.88 0.7 0],'standard')
% L2=Link([180 0 159 0.7 0],'standard')
% L3=Link([0 0 0 2.48 0],'standard')
% r=robot({L1 L2 L3})
% T=[1 0 0 5;0 1 0 -5;0 0 1 0;0 0 0 1];
% q=ikine(r,T,[0 0],[1 1 0 0 0 0])


