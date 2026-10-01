a=imread('C:\Users\Daniel\Pictures\portadas\18edith  y ricardi.jpg','jpg');
imshow(a);axis on
coor=[150,240];
b=rgb2ycbcr(a);
c=double([b(coor(1),coor(2),1),b(coor(1),coor(2),2),b(coor(1),coor(2),3)]);
b=double(b);
[yy,xx,zz]=size(b);
im1=c(1)*ones(yy,xx);
im2=c(2)*ones(yy,xx);
im3=c(3)*ones(yy,xx);
SAD1=2*abs(b(:,:,1)-im1);
SAD2=4*abs(b(:,:,2)-im2);
SAD3=6*abs(b(:,:,3)-im3);
SAD=SAD1+SAD2+SAD3;
figure;
colormap(gray(255));
image(255*(SAD<44));
regionprops(b,'centroid');
%falta con las otras distancias 

