
syms   l1 l2 d3 q1 q2 q3;

% xhi=denavit (q1,0,0,-pi/2)  
% xhi2=denavit (q2,0,l1,0)  
% zhi3=denavit (q3,0,l2,pi/2)  
% xhi4=denavit (-pi/2,d3,0,0)  

c1=cos(q1);
s1=sin(q1);
c2=cos(q2);
s2=sin(q2);
c3=cos(q3);
s3=sin(q3);




p01=[cos(q1) 0 -sin(q1) 0;
    sin(q1) 0 cos(q1) 0;
    0 -1 0             0;
    0 0 0 1];
p12=[c2 -s2 0 l1*c2;
    s2    c2 0  l1*s2;
    0 0 1   0;
    0 0 0 1];

p23=[c3 0 s3 l2*c3;
    s3 0  -c3  l2*s3;
    0   1   0    0;
    0 0 0 1];

p34=[0  1  0 0;
    -1 0  0  0;
    0  0   1  d3;
    0  0   0   1];


p02=p01*p12;



p03=p02*p23;
  P03=simplify(p03);
  
  p04=P03*p34
  P04=simplify(p04)




    

