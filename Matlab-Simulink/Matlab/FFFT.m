%procesamiento de señal TF Transormada rapida

Fs = 1000; % Frecuencia de muestreo 
T = 1/Fs;  % Periodo de muestreo 
L = 1500;  % Tamaño de la señal 
t = (0:L-1)*T

S1 = sin(2*pi*50*t);  % Señal de 50 Hz
S2 = sin(2*pi*120*t); % señal de 150 Hz


S = S1+S2+rand(size(t))*2;

%S=  S1;

plot(1000*t,S)

title('Señal simulada');
xlabel('t(ms)')
ylabel('X(t)')

% Transformada rápida de Fourier
Y = fft(S);
% Espectro bilatelal
P2= abs(Y/L);

%Espectro unilateal basado en el bilateral y la 

P1 = P2(1:L/2+1);
P1(2:end-1) = 2*P1(2:end-1);

f = Fs*(0:(L/2))/L;

figure()
plot(f,P1)
grid on 
title('Espectro de amplitudes de las frecuendias' )
xlabel('f (Hz)')
ylabel('A (Hz)')