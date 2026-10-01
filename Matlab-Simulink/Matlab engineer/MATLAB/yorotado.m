im_ent=double(rgb2gray(imread('C:\Users\Daniel\Pictures\portadas\portdata1sanluis.jpg','jpg')));
[yy,xx]=size(im_ent);
im_sal=zeros(4*yy,4*xx);
xalpha=0;
yalpha=0;t=pi/3;
for k=1:yy
    for l=1:xx
        xaplha=cos(t)*l+sin(t)*k+2*xx;
        yalpha=cos(t)*k-sin(t)*l+2*yy;
        im_ent(ceil(yalpha),ceil(xaplha))=im_ent(k,l);
    end;
end;
colormap(gray(255));
image(im_sal);
%para ver   los espacios en blanco  en vez de zeros  ones
%zeros(4*yy,4*xx)*255;
%size tamaño de la matriz
%zeros multioplica a la matriz 
%