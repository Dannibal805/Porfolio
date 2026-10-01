clc
clear all
close all
%variables simbolicas
syms  w q1p q2p q3p phi phip taul taur  u1 u2

syms d R L mb mw I1 I2 I3 g z1 z2%

%nota q1p=phip
%q2p=psip
%q3p=v=xp

%%variables conocidad
d=1;%metro
R=5;%metros
L=1;%metros
mb=1;
mw=1;
I1=.1;
I2=.1;
I3=.1;
g=9.81;


 %Ecuaciones del sistema
 %Ecu1=3*(mw+mb)*vp-mb*d*cos(psi)*psipp+mb*d*sin(psi)*(psip^2+phip^2)=-(1/R)*(taur+taul);
 %Ecu2=((3*L^2+1/(2*R^2))*mw+mb*d^2*(sin(phi))^2*phi+I2)*psipp+mb*d^2*sin(phi)*cos(phi)*psop*phip=(L/R)*(taul-taur);
 %Ecu3=mb*d*cos(phi)*vp+(-mb*d^2-I3)*phipp+mb*d^2*sin(phi)*cos(phi)*phip^2+mb*gd*sin(phi)=taul+taur;
 
 
 %elementos matriz a
 a11=-mb*d*cos(phi);
 a12=0;
 a13=3*(mw+mb);
 
 a21=0;
 a22=((3*L^2+1/(2*R^2))*mw+mb*d^2*(sin(phi))^2+I2);
 a23=0;
 
 a31=-mb*d^2-I3;
 a32=0;
 a33=mb*d*cos(phi);
 
%elementos matriz c
c11=mb*d*sin(phi)*q1p;
c12=mb*d*sin(phi)*q2p;
c13=0;

c21=mb*d^2*sin(phi)*cos(phi)*q2p;
c22=0;
c23=0;

c31=mb*d^2*sin(phi)*cos(phi);
c32=0;
c33=0;

%elementos matriz G
g11=0;
g21=0;
g31=mb*g*d*sin(phi);

%elementos t
t11=-(1/R)*(taul);
t12=-(1/R)*(taur);

t21=(L/R)*(taul);
t22=(L/R)*(taur);

t31=taul+taur;
t32=taur;


%matrices principales
matA=[a11 a12 a13; a21 a22 a23;a31 a32 a33];
matC=[c11 c12 c13; c21 c22 c23;c31 c32 c33];
matG=[g11;g21;g31];
matU=[t11 t21;t21 t22;t31 t32];

%matrices simbolicas
matqp=[q1p;q2p;q3p];

matz=[u1;u2]

matCq=matC*matqp;
mattu=matU*matz

%matriz depejada
R=matA\(mattu-matCq-matG);

%cambio de variables
syms x1 x2 x3 x4 q1 q2 q3

dx1=q1p;
dx2=q2p;
dx3=q3p;
dx4=R(1);
dx5=R(2);
dx6=R(3);


dx=[dx1
    dx2
    dx3
    dx4
    dx5
    dx6];

dxr=[dx3
    dx4
    dx5
    dx6];

y=[x1;x2;0;0];

A=jacobian(dxr,[q3 q1p q2p q3p])
B=jacobian(dxr,[u1 u2])
C=jacobian(y,[q3 q1p q2p q3p])

%linealización
phi=deg2rad(10);
psi=deg2rad(10);


%solucion
u=(solve(dx4,dx5,'taur','taul'))
U1=u.taur;
U2=u.taul;
tau1=eval(U1);
tau2=eval(U2);
A1=eval(A)
B1=eval(B)
C1=eval(C)

%ganancias

Tau=matA+matC+matG