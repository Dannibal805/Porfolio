L1=Link([0 10 0 0 0],'standard')
L2=Link([0 5 0 0 0],'standard')
r=SerialLink([L1 L2])
T=[1 0 0 5;
    0 1 0 -5;
    0 0 1 0
    0 0 0 1];
q=ikine(r,T,[0 0],[1 1 0 0 0 0])

