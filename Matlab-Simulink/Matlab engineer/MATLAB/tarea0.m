a1=rotx(pi/4)
a2=roty(pi/2)
a3=roty(pi/2)
a4=a1*a2*a3

b1=rotx(60,'deg')
b2=roty(-90,'deg')
b3=inv(b1)
b4=b3*b2


c1=rotz(90,'deg')
c2=roty(60,'deg')
c3=transl(9,3,5)
c4=rotx(180,'deg')
c5=transl(3,8,1)
Cx= r2t(c1)
Cy= r2t(c2)
Cx= r2t(c4)
Cc=(Cx*Cy*c3*Cx*c5)
%%falta rotaction atraves de  un vector

d1=rotx(pi/2)
d2=roty(pi)
p1=[0;1;1]
D3=d1*d2
p2=D3*p1

e=[1;-1;0]
e1=rotz(90,'deg')
E = rt2tr(e1,e)
e2=[3;1;0;0]
e3=(E*e2)
e4=inv(e1)
e5=(e4*e)
E1 = rt2tr(e4,e)
e6=[1;4;2;0]
e7=E1*e6

F=rotx(-90,'deg')
F1=[1;3;2]
F2 = rt2tr(F,F1)
Fa=[3;1;4;2]
Fa1=(F2*Fa)
Fb=[7;4;5;2]
Fb1=(F2*Fb)
f=inv(F)
f1=(f*F1)
F3= rt2tr(f,f1)
FC=[2;4;1;1]
Fc1=F3*FC

gu= eul2r(pi/2, 0, pi/4)

k1=[0.866 -0.500 0 11;.5 .86 0 -1;0 0 1 8;0 0 0 1]
k2=[1 0 0 0;0 .86 -.5 10;0 .5 .866 -20;0 0 0 1]
k3=[.866 -.5 0 -3;.433 .750 -.500 10;0 .500 .866 -20;0 0 0 1]
K1=trplot(k1,'frame', 'A','color','r')
hold on 
K2=trplot(k2,'frame', 'B','color','b')
hold on 
K3=trplot(k3,'frame', 'C','color','g')
[R,Ko] = tr2rt(k3)
Kr=inv(R)
Kr1=(Kr*Ko)
Koko= rt2tr(Kr,Kr1)
K4=trplot(Koko,'frame', 'D','color','Y')









