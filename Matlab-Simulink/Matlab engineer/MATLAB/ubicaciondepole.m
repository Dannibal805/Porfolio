%ubicacion de polos
% Retro de estado =K
G=[0 1;-.16 1]
H=[0 1]'
C=eye(2,2)
D=[0 0]'
sys=ss(G,H,C,D,1)
%ss espacio de estados 
K=acker(G,H,[1 .1])
%acker solo para una entrada una salida 
LC=feedback(sys,K)
%Lazo cerrado 
step(sys,LC)

L=ackerobs(G,[1 0],[.5 .5])
