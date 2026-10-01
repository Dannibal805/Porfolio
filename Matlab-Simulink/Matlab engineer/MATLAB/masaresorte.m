function dqdt=masaresorte (t,q)
m= 5 %kg
k= 0.8 %n/m
b= 0.75 %ns2/m
F=5*cos(t)

dqdt(1)=q(2)
dqdt(2)=(F-k*q(1)-b*q(2))/m