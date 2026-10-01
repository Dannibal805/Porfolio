% Algoritmo Cooley-Tukey para el cálculo de la FFT

clc; clear; close all;

Fs = 1000; % Frecuencia de muestreo
T = 1/Fs;  % Periodo de muestreo
L = 1000;  % Tamaño de la señal
t = (0:L-1)*T; % Vector de tiempo

% Frecuencias de dos señales
F1 = 60;
F2 = 100;

y1 = 10*sin(2*pi*t*F1); % Señal de 60 Hz Amplitud de 10
y2 = 0.1*sin(2*pi*t*F2); % Señal de 100 Hz Amplitud de 0.1
y = y1+y2; % Señal compuesta

N = length(y); % Número de muestras de la señal
N1 = N/20; % Filas
N2 = 20; % Columnas

% plot(y)

NewY = (reshape(y,N2,N1))'; % Reordenamos el vector de datos en una matriz N1xN2

Coefk = zeros(size(NewY)); % Vector para guardar los datos de los coeficientes

% Realiza la FFT en las columnas
for i = 1:N2 %1:20
    for j = 0:N1-1 % Frecuencia analizada
        sum = 0;
        for k = 0:N1-1 % Número de muestras analizadas
            sum = sum + NewY(k+1,i)*exp(-2i*pi*k*j/N1);
        end
        Coefk(j+1,i) = sum;
    end
end

% Factor de giro
for i = 1:N2 % Columnas
    for j = 1:N1 % Filas
        Coefk(j,i) = Coefk(j,i)*exp(-2i*pi*(i-1)*(j-1)/N);
    end
end

Coef2k = Coefk;
% Realiza la FFT en las filas
for i = 1:N1 % 1:50
    for j = 0:N2-1 % Frecuencia analizada
        sum = 0;
        for k = 0:N2-1 % Número de muestras analizadas
            sum = sum + Coef2k(i,k+1)*exp(-2i*pi*j*k/N2);
        end
        Coefk(i,j+1) = sum;
    end
end

% Calcular magnitudes de la matriz de coeficientes

% Reordena los datos en un vector
P = reshape(Coefk,1,N);
% Espectro bilateral
P2 = abs(P/N);

% Espectro unilateral basado en el bilateral y longitud
P1 = P2(1:N/2+1);
P1(2:end-1) = 2*P1(2:end-1);

f =Fs*(0:(N/2))/N;
figure()
subplot(2,1,1)
plot(f,P1)
title('Cooley-Tukey')

% Comparación con fft
P2_m = abs(fft(y)/N);
P1_m = P2_m(1:N/2+1);
P1_m(2:end-1) = 2*P1_m(2:end-1);
subplot(2,1,2)
plot(f,P1_m)
title('fft de MATLAB')


