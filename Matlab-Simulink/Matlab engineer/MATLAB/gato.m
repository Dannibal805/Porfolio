function dx=gato(u)
u1=u(1);
x1=u(2);
x2=u(3);
x3=u(4);
dx1=x2;
dx2=x3;
dx3=(1/9)*(u1-4*x3-6*x1);

dx=[dx1;dx2;dx3];

