t0=0;
tf=10;
N=50;
z_0=0;
z_dot_0=0;
[t,z]=ode45(@myfunc,[t0:(tf-t0)/N:tf],[z_0 z_dot_0]);
plot(t,z(:,l));