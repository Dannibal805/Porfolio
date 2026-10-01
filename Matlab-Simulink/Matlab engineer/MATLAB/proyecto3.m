E4=Link([0 0 80 0 0 pi]);
E5=Link([0 0 65 0 0 -pi/2]);
Robotit=SerialLink([E4 E5])
Robotit.name='Robot';
plot(Robotit,[0 0]);

%cinematica directa  
syms ang1 ang2 real
A01=denavit(ang1,0,80,pi)
A12=denavit(ang2,0,65,-pi/2)
A02=A01*A12

B01=[cos(ang1) sin(ang1) 0 80*cos(ang1);sin(ang1) cos(ang1) 0 80*sin(ang1);0 0 -1 0;0 0 0 1]
B12=[cos(ang2) 0 sin(ang2) 65*cos(ang2);sin(ang2) 0 cos(ang2) 65*sin(ang2);0 -1 0 0;0 0 0 1]
B02=B01*B12
B02a=simplify(B02)


B02a =
 
[ cos(ang1 - ang2), 0, sin(ang1 + ang2), 80*cos(ang1) + 65*cos(ang1 - ang2)]
[ sin(ang1 + ang2), 0, cos(ang1 - ang2), 65*sin(ang1 + ang2) + 80*sin(ang1)]
[                0, 1,                0,                                  0]
[                0, 0,                0,                                  1]


B20=inv(B02)
B20a=simplify(B20)

q=0:0.01:2*3.1416; %%se define su tiempo para aplicar el movimiento 
cero=q*0;
figure(1)
plot(Robotit,[q' cero'])
figure(2)
plot(Robotit,[cero' q'])
figure(3)
plot(Robotit,[cero' cero'])

clc
clear all

syms l1 l2  q1 q2 q3 real

E4=Link([0 0 l1 0 0 pi]);
E5=Link([0 0 l2 0 0 -pi/2]);
Robotit=SerialLink([E4 E5])
Robotit.name='Robot';
Ci=Robotit.jacob0([q1 q2]) %% Jacobiano 
% seudoinversa  el comando es pinv 
x=pinv(Ci)
y=simplify(x)