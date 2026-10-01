m=[0:0.02:100];
X1=sin(2*pi*0.07*m);
x2=sin(2*pi*0.02*m);
x=[X1 x2];
Tx=fft(x,128);
plot(abs(tx));