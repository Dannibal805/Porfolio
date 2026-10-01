 [y fs]=wavread ('aguila1.wav');  %Archivo wav a analizar
%Donde y es la función senoidal del sonido
%fs es la frecuencia de muestro del sonido
sound (y,fs);                              


figure (1)
hold on
subplot (2,1,1)
plot (y);
title('Señal Adquirida');

Fs=fs/2;
L=length (y)/2;

%Transformada Rapida De Fourier
NFFT=2^nextpow2 (L);
Y=fft(y,NFFT)/L;
f=Fs/2*linspace (0,1,NFFT/2+1);

subplot(2,1,2)
plot (f,2*abs(Y(1:NFFT/2+1)));
title('Señal Transformada');
xlim([0 1000])

xlabel('Frecuancia (Hz)')
ylabel('Y(f)')
