G=[0 1;-.48 1.4]
H=[0 1]'
C=[1 0]
D=0 
K=acker(G,H,[.5 .5])
L=ackerobs(G,C,[.5 .5])
L1=ackerobs(G(2,2),G(1,2),0)