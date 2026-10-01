% programa para visualizar como se muestra nyquist en matlab 
clc 

f = 1e3;
Fs= 30*f ; % Frecuency sample con 4 podría visualizarse bien la grafica 
% con variar la frecuencia podríamos entender este efecto 
t= 0: 1/Fs: 10*(1/f); % Obserbation time 

s= cos(2*pi*f*t);

plot(t,s)
hold on

stem(t,s)  % solo con muestras 

