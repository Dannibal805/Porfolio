E4=Link([90 -8 0 -pi/2 1 0]);
E5=Link([0 0 80 0 0 0]);
E6=Link([0 0 65 -pi/2 0 -pi/2]);
E7=Link([0 20 0 0 0 0]);
Robocata=SerialLink([E4 E5 E6 E7]);
Tobocata.name='tercero Robot';
plot(Robocata,[0 0 0 0]); 


syms q2 q3 q4 real
A01=[0 0 -1 0;1 0 1 0;0 -1 0 -8;0 0 0 1]
A12=[cos(q2) -sin(q2) 0 80*cos(q2);sin(q2) cos(q2) 0 80*sin(q2);0 0 1 0;0 0 0 1]
A23=[cos(q3-pi/2) 0 -sin(q3-pi/2) (65*cos(q3-pi/2));sin(q3-pi/2) 0 cos(q3-pi/2) (65*sin(q3-pi/2));0 -1 0 0;0 0 0 1]
A34=[cos(q4) -sin(q4) 0 0;sin(q4) cos(q4) 0  0;0 0 1 20;0 0 0 1]
A02=A01*A12
A03=A02*A23
A04=A03*A34