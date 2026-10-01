 clc
clear
close all
t= -4*pi:.001:4*pi;
n=1;
series=0
for i=1:n:100000
i;
series=series+((2*pi)/3-4*(cos(i*t)/i^2)+6*(sin(i*t)/i));
end
plot(t,series)