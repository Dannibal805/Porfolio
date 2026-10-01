load  handel
x=y';
N=128;
l=length(x);
M=30;
lseg=floor(l/M);
w=hanning(lseg);
esp=zeros(N,M);
for k=1:M
    xt=x(lseg*(k-1)+1:lseg*k);
    xt=w.*xt';
    esp(:,k)=abs(fft(xt,N));
end;
colormap(gray(255));
image(255*esp./max(max(esp)));