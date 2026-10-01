omega=[0:1:20];
H_w=1-2*exp(-1*2*omega*j)
figure:plot(abs(H_w))
a=[1];b=[1 0 -2];freqz(a,b);