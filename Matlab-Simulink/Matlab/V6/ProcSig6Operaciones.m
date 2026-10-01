clear; close all; clc;

load('ecg.mat')

longitud = 2500;

Signal = sig(1:longitud,:);
Tiempo = tm(1:longitud,:);
plot(Tiempo,Signal)
grid on

maxS = max(Signal);
minS = min(Signal);

%% Suma

% Sirve para desplazar la señal en el eje horizontal Y hacia arriba
SignalSuma = Signal + abs(minS);
figure(2)
subplot(1,2,1)
plot(Tiempo,Signal)
ylim([minS*2 maxS*2])
grid on
subplot(1,2,2)
plot(Tiempo,SignalSuma)
ylim([minS*2 maxS*2])
grid on


%% Resta

% Sirve para desplazar la señal en el eje horizontal Y hacia abajo
SignalResta = Signal - abs(minS);
figure(3)
subplot(1,2,1)
plot(Tiempo,Signal)
ylim([minS*2 maxS*2])
grid on
subplot(1,2,2)
plot(Tiempo,SignalResta)
ylim([minS*2 maxS*2])
grid on

%% Multiplicación

% Sirve para amplificar la señal
SignalMult = Signal * 2;
figure(4)
subplot(1,2,1)
plot(Tiempo,Signal)
ylim([minS*2 maxS*2])
grid on
subplot(1,2,2)
plot(Tiempo,SignalMult)
ylim([minS*2 maxS*2])
grid on


%% División / Atenuación

% Sirve para atenuar la señal
SignalDiv = Signal/2;
figure(5)
subplot(1,2,1)
plot(Tiempo,Signal)
ylim([minS maxS])
grid on
subplot(1,2,2)
plot(Tiempo,SignalDiv)
ylim([minS maxS])
grid on



