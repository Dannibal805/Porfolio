sys=zpk([0 .5i -.5i],[2 2 1],1,1);
[x,t]=impulse(sys);
stem(t,x)
axis([0 10 0 10500])