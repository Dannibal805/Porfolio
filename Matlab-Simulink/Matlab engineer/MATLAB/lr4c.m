D=[0 0]'
C=eye(2,2)
sys=ss(G,H,C,D,1)
K=[.24 -.3]
Y=feedback(sys,-K)
step(Y)
K1=[-.4 1.3]
figure
y=feedback(sys,K1)
step(y)