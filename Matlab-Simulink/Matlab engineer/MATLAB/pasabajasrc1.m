T=1/4000;
b=[T];
tao=1/(2*pi*1000);
a=[(1+tao) -1*tao];
freqz(b,a);
load handel 
sal=filter(b,a,500*y);
sound(sal);
