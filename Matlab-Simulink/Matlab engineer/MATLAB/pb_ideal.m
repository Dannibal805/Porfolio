function hd=pb_ideal(M,wc)
a=(M-1)/2;
n=[0:1:(M-1)];
m=n-a+eps;
hd=sin(wc*m)./(pi*m);

