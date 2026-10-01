G=[0 1;-.42 1.3]
H=[0 1]'
C=eye(2,2)
D=[0 0]'
%ss state space
sys1=ss(G,H,C,D,1)
step(sys1)
K=[-.42 1.3]
sys2=feedback(sys1,K)
step(sys2)
%se pone todos  los polos en 0    asegrandose  que en dos periodos de
%muestreo