im1=double(rgb2gray(imread('C:\Users\Public\Pictures\Sample Pictures\abstract-blue-02.jpg','jpg')));

[yy,xx]=size(im1);
im2=zeros(yy,xx);

for k=1:yy
    for l=1:xx
    if im1(k,l)<129
        im2(k,l)=2*im1(k,l);
    end;
    if im1(k,l)>128
        im2(k,l)=-2*im1(k,l)+510;
    end;
    end;
end;
colormap(gray(255));
image(im2);