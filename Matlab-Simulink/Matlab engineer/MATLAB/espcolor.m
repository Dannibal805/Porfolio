a=imread('C:\Users\Daniel\Pictures\portadas\18edith  y ricardi.jpg','jpg');
b=rgb2ycbcr(a);
b=double(b);
figure;
colormap(gray(255));
subplot(311);image(255*b(:,:,1)/max(max(b(:,:,1))));
subplot(312);image(255*b(:,:,2)/max(max(b(:,:,2))));
subplot(313);image(255*b(:,:,3)/max(max(b(:,:,3))));


