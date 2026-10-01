function dx=Ser1(u)
u1=u(1);
x1=u(2);
x2=u(3);

dx1=x2;
dx2=(1/7)*(u1-4*x2-6*x1);

dx=[dx1;dx2];