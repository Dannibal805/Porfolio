m=[0:0.02:100];
X1=sin(2*pi*0.07*m);
x2=sin(2*pi*0.01*m);
x=[X1 x2];
load handel;
Tx=fft(y,128);
plot(abs(Tx));
figure:plot(x);









































