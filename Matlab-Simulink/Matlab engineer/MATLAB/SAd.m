a=imread('C:\Users\Daniel\Pictures\portadas\18edith  y ricardi.jpg','jpg');
imshow(a);
c=impixel();
a=double(a);
[yy,xx,zz]=size(a);
im1=c(1)*ones(yy,xx);
im2=c(2)*ones(yy,xx);
im3=c(3)*ones(yy,xx);
SAD1=abs(a(:,:,1)-im1);
SAD2=abs(a(:,:,2)-im2);
SAD3=abs(a(:,:,3)-im3);
SAD=SAD1+SAD2+SAD3;
figure;
colormap(gray(255));
image(255*(SAD<70));

%SAD1=abs(a(:,:,1)-im1); para obter rojo azul o verde