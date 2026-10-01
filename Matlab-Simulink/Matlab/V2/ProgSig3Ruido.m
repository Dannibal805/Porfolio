y = load('ECG.txt')


figure ()
subplot(2,2,1)
plot(y)
title('Señal Original')

nm = length(y);

raf = rand(nm,1)*max(max(y))/8; % Generamos un vector de ruido aleatorio o un ruido blanco 

y2= raf + y ; % señal con ruido 

subplot(2,2,3)
plot(y2);
title('Señal con ruido A.F.')

fs = 100 ;
ts = 1/fs;

rbf = sin(0.5*pi*(0:ts:(nm-1)/fs)*max(max(y)))/8;
y3 = y+rbf';

subplot(2,2,4)
plot(y3)
title('Señal con ruido B.F.')


N = 1e4;
n = 0:N-1;
fs = 3600;
f0 = 180;
t = n/fs;
y= sin(2*pi*f0*t);

% seccion de salida con coeficientes de un polinomio 
noise= randn(size(y));
dispol= [0.5 0.75 1 0]; % 0.5*x^3 + 0.75*x^2+ x + 0

out= polyval(dispol,y+noise); % Evaluar el polinomio

figure()
plot(t,[out;polyval(dispol,y)]) %grafica la señal real vs la señal con ruido
xlabel('Tiempo (s)')
ylabel('Señales')
legend('Con ruido blanco','Señal sin ruido ')

[pxx,f]=pwelch(out,[],[],[],fs); % Traza la densidad espectral de salida en terminos de frecuencia 

figure()
pwelch(out,[],[],[],fs)
