close all
a=imread('cameraman.tif','tif');
[yy,xx]=size(a);
figure:colormap(gray(255));
h=imhist(a);
%subplot(221);image(a);
subplot(222);
v=fspecial('gaussian',[19 1],7);
h1=conv(h,v,'same');
subplot(311);plot(h1);
%same  aga del mismo tamaño 
pd=[h1;0]-[0;h1]
ad=[pd;0]-[0;pd]
subplot(312);plot(pd);
subplot(313);plot(ad);

%subplot (313);image(255*bitand((a>130),(a<170)));  para  suabisar 
%*v1=fspecial('gaussian',[9 1]);
%h1=conv(h,v1);
%close all
%subplot (211); plot(h);
%subplot(213;plot(h1);
%v1=fspecial('gaussian',[19 1],7);
%h1=conv(h,v1);
%subplot(212);plot(h1);

