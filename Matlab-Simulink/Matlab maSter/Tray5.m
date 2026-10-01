%tracking with toolbox

tiempo= 0:01:1;
[q qd qdd]= jtraj(10*pi/180, 30*pi/180, tiempo);

figure;
subplot(3,1,1);plot(tiempo,q,'.-');grid on; 
xlabel('Tiempo'); ylabel('Posición (rad)')

subplot(3,1,2);plot(tiempo,qd,'.-');grid on; 
xlabel('Tiempo'); ylabel('velocidad (rad/s)')

subplot(3,1,3);plot(tiempo,qdd,'.-');grid on; 
xlabel('Tiempo'); ylabel('Aceleración (rad/s^2)')