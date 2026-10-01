function dx=ave(u)
u1=u(1);
x1=u(2);
x2=u(3);

dx1=x2;
dx2=(1/6)*(u1-8*x2-2*x1);

dx=[dx1;dx2];
