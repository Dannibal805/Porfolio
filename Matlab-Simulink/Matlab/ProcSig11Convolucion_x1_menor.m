% Prueba conv
clc; close; clear;

x1 = [1 2 3];
x2 = [-2,1,-1,-1];
% x2 = fliplr(x2);

nx1 = length(x1);
nx2 = length(x2);
n = nx1+nx2-1;
dif=abs(nx1-nx2);
j = 1;
j3 = 0;
j4 = 1;
y = zeros(1,n);
for i=1:n
    if i<=min(nx1,nx2)
        n2 = i;
    else
        if j3<dif
            n2 = min(nx1,nx2);
            j3 = j3+1;
        else
            n2 = min(nx1,nx2)-j;
            j=j+1;
        end
    end
    sum = 0;
    j2 = 0;
    for k=1:n2
        if i<=min(nx1,nx2)
            a = k;
            b = n2-j2;
            mult = x1(a)*x2(b);
            sum = sum + mult;
            j2 = j2+1;
        else
            if j3<=dif
                a = k;
                b = i+1-k;
                mult = x1(a)*x2(b);
                sum = sum + mult;
                if j3 == dif && k==n2
                    j3=j3+1;
                end
            else
                a = k+j4;
                b = nx2-k+1;
                mult = x1(a)*x2(b);
                sum = sum + mult;
                if k==n2
                    j4 = j4+1;
                end
            end
        end
    end
    y(i)= sum;
end

y2 = conv(x1,x2);

subplot(211)
plot(y)
title('Función hecha')
subplot(212)
plot(y2)
title('Función Conv')