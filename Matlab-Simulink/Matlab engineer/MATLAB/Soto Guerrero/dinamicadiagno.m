
syms  h1 h2 l1 l2 
X01=denavit((h1-pi),0,l1,pi/2)
Y01=[-cos(h1) 0 -sin(h1) -l1*cos(h1);-sin(h1) 0 cos(h1) -l1*sin(h1);0 1 0 0;0 0 0 1]
x12=denavit(h2,0,l2,0)
x02=Y01*x12