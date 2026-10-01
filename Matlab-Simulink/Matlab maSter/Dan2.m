function dx=Dan2(u)
u1=u(1);
x1=u(2);
x2=u(3);

dx1=x2;
dx2=(1/3)*(u1-3*cos(x1)-9*sin(x1));

dx=[dx1;dx2];
