close all
a=imread('cameraman.tif','tif');
[yy,xx]=size(a);
figure:colormap(gray(255));
subplot(311);image(a);
subplot(312);imhist(a);
subplot(313);image(255*bitand([a>130],[a<170]));
%propiedand el bitdan junta los 2 conjuntos   de tal mnera  que den una  sola imagen
%subplot(221)  2 renglones   figura uno 


