syms q1 q2 q1p q2p;

q1=0;
q2=0;

A=(m1+m2)*l1^2+m2*l2^2+2*m2*l1*l2*cos(q2);
B=m2*l2^2+m2*l1*l2*cos(q2);
C=m2*l2^2+m2*l1*l2*cos(q2);
D=m2*l2^2;

E=-m2*l1*l2*sin(q2)*q1p;
F=-m2*l1*l2*sin(q2)*(q1p+q2p);
G=m2*l1*l2*sin(q2)*q1p;
H=0

I=(m1+m2)*g*l1*cos(q1)+m2*g*l2*cos(q1+q2);
J=m2*g*l2*cos(q1+q2);


matA=[A B;C D];
matB=[E F;G H];
matC=[I;J];

matAinv=inv(matA)

