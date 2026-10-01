clc
clear all
close all

syms x1 x2 v vp psi psip psipp phi phip phipp taul taur
 
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


 Ecu1=3*(mw+mb)*vp-mb*d*cos(phi)*phipp+mb*d*sin(phi)*(psip^2+phip^2)
 F=-(1/R)*(taur+taul);
 Ecu2=((3*L^2+1/(2*R^2))*mw+mb*d^2*(sin(phi))^2*phi+I2)*psipp+mb*d^2*sin(phi)*cos(phi)*psip*phip
 =(L/R)*(taul-taur);
 Ecu3=mb*d*cos(phi)*vp+(-mb*d^2-I3)*phipp+mb*d^2*sin(phi)*cos(phi)*phip^2+mb*gd*sin(phi)=taul+taur;
 
 u=[taul taur]
 
 xp=[v*cos(psi) v*sin(psi) vp psip psipp phip phipp]