syms D1 D2 D3 D4 D5 Q3 Q4 Q5;
E1=Link([0 0 5.88  0     1],'standard');
E2=Link([0 0 4.75 -pi/2  1],'standard');
E3=Link([0 0  9.0   0   -pi/2],'standard');
E4=Link([0 0  9.0   0   -pi/2],'standard');
E5=Link([0 0  4.9 -pi/2 -pi/2],'standard');
robot=SerialLink([E1 E2 E3 E4 E5])
q=[D2 D4 Q3 Q4 Q5];
T1=fkine(robot,q)
plot(robot,[0 0 0 0 0]);



syms D1 D2 D3 D4 D5 D6 Q1 Q2 Q4 Q5 Q6;
E1=Link([0     D1 0 -pi/2 0],'standard');
E2=Link([0     D2 0 pi/2  0],'standard');
E3=Link([-pi/2 0  0  0    1],'standard');
E4=Link([0     D4 0 -pi/2 0],'standard');
E5=Link([0     D5 0 pi/2  0],'standard');
E6=Link([0     D6 0  0    0],'standard');
r=SerialLink([E1 E2 E3 E4 E5 E6]);
q=[Q1 Q2 D3 Q4 Q5 Q6];
T=fkine(r,q)

