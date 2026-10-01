n=1000;
vi=1;
vu=1;
i=1+vi*(rand(n,1)-.5);
u=1+vu*(rand(n,1)-.5);
r=zeros(n,1);
for k=1:n
r(k)=u(1:k)'*i(1:k)/(i(1:k)'*i(1:k));
end
plot(r);
xgrid
//axis([0 n -.5 1.5])

cov(i);
