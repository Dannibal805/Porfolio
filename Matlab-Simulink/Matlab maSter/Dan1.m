function dx=Dan1(u)
u1=u(1);
x1=u(2);
x2=u(3);

dx1=x2;
dx2=(u1-6*x1-3*x2);

dx=[dx1;dx2];



