function dx=Ser2(u)
u1=u(1);
x1=u(2);
x2=u(3);

dx1=x2;
dx2=(u1-x2^2-x1^3);

dx=[dx1;dx2];