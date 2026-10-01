function dx= pez(u);

T=u(1);
x1=u(2);
x2=u(3);
m=3;
l=6;
g=9.81;
b=0.2;
dx1=x2;
dx2=(T/(m*l^2))-(g/l)*sin(x1)-(b*x2/(m*l^2));
dx=[dx1;dx2];