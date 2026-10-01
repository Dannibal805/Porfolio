 T0=rotx(pi/2)
 T1=roty(pi/2)
 T2=T0*T1
%[R,t] = tr2rt(T2)
%R = t2r(T2)
%TR = rt2tr(R, t)
 FI=trplot(T2,'frame', 'A','color','r')
 hold on 
 T4=T1*T0
 FI2=trplot(T4,'frame', 'D','color','g')
 
 
 

R12=[1 0 0;0 1/2 -sqrt(3)/2;0 sqrt(3)/2 1/2]
R13=[0 0 -1;0 1 0;1 0 0]
R21=inv(R12)
R23=R21*R13


eu= eul2r(pi/2, 0, pi/4)


D0=transl(0,1,1)
D1=transl(-.5,1.5,1)
D2=transl(-.5,1.5,3)
Dy=roty(90,'deg')
Dx=rotx(90,'deg')
Dz=rotz(90,'deg')
Dxyz=Dy*Dz*Dx
[R,t1] = tr2rt(D2)
TR = rt2tr(Dxyz,t1)

Nz=rotz(30,'deg')
Nx=rotx(45,'deg')
Ny=roty(175,'deg')
Nzxy=Nz*Nx*Ny
N0=zeros(4)
[R,t2] = tr2rt(N0)
TR = rt2tr(Nzxy,t2)


Mx=rotx(pi/4)
My=roty(pi/2)
Mz=rotz(pi/2)
Mxyz=Mx*My*Mz
M0=zeros(4)
[R,t3] = tr2rt(M0)
TR1 = rt2tr(Mxyz,t3)


Yz=rotz(90,'deg')
Yy=roty(60,'deg')
Ty=transl(9,3,5)
Yr1=Yz*Yy
Ty1=transl(0,0,0)
[R,t4] = tr2rt(Ty1)
TR1 = rt2tr(Yr1,t4)
jjj=TR1*Ty
Yx=rotx(180,'deg')
Tyx= r2t(Yx)
j1=jjj*Tyx
T99=transl(3,8,1)
p99=j1*T99
v=[2;0;1]

T=rotvec(v,45);








