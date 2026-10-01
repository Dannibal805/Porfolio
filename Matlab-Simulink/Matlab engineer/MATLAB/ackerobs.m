function L=ackerobs(G,C,p)
%Esta funcion calcula la  retro para un Observador 
%Calculo de L la ganancia del observador ,Sistema G y C,Polos P
%Se DA laG LA C y Al ultimo los Polos
%Y es una columna
%Matriz G de tranferencia de estados
%C es una salida
b=0;
N=C;
for i=2:length(C);
    b=C*G^(i-1);
    N=cat(1,N,b);
end
a=poly(p);
n=length(a);
phi=0;
for i=1:n
    phi=phi+G^(n-i)*a(i);
end
size(phi)
size(N)
L=phi*inv(N)*[zeros(n-2,1);1];
