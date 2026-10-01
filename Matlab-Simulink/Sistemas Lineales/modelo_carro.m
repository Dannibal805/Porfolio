function dxdt =modelo_carro(t,x,u)
m=1;
c=1;
gamma=0.1;

dxdt(1,1)=(c/m)*u-gamma*x;