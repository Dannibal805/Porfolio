syms m1 lc1 l1 m2 lc2  q1 q2 I1 I2
m=[(m1*lc1^2)+m2*(l1^2+lc2^2+2*l1*lc2*cos(q2))+I1+I2 (m2*(lc2^2+l1*lc2*m2*cos(q2)+I2));
    (m2*(lc2^2+m2*l1*lc2*cos(q2)+I2)) m2*(lc2^2)+I2]
x=inv(m)
id1=m*x