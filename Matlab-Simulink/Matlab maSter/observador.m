R=10e3
C=10e-6
A=[1/R/C -1/R/C;-1/R/C 2/R/C]
b=[1/R 0]'
C1=[0 1/C]
D=0
sysc=ss(A,b,C1,D)
sysd=c2d(sysc,.001,'zoh')
a=[1.01 -.01015; -.01015 1.02]
b=[1.005e-7;-5.05e-10]
c=[0 1e+05]
d=[0]
L=ackerobs(a,c,[.2 .2]) %% duda de que es 


