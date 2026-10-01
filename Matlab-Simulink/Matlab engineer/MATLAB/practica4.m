%CINEMATICA DIRECTA
L1=Link([1 0.7 0 0 0 0])
L2=Link([2.77 0.7 0 pi 0 0])
L3=Link([0 2.48 0 0 1 0])
robot=SerialLink([L1 L2 L3])
plot (robot,[0 0 0])