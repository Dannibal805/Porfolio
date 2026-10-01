% I created a function D_H (Denavit hattemberg) to execute this program
% Configuration Robot is Fanuc 
% For using function D_H introduce parameters like alpha, theta, or d
% respectly

% for more information about that and some example so excersices  check
% book this program developed  by M. en Mechatronic Alvaro Daniel Soto
% Guerrero adanielsguerrero@hotmail.com




clc 
clear all
syms q1 l1 l2  l3 l4 q3 q2 q4 q5 q6;
pii=sym(pi)
A01=D_H(q4,0,0,pii/2)
A12=D_H(q5,0,l2,-pii/2);
A23=D_H(q6,l4,0,pii/2);
T02=simplify(A01*A12)
T03=simplify(A01*A12*A23)
%% muñeca esferica
A34=D_H(q4-pii/2,0,0,-pii/2);
A45=D_H(q5,0,0,pii/2);
A56=D_H(q6,l4,0,0);
%T=simplify(A01*A12)
T35=simplify(A34*A45);
T36=simplify(A34*A45*A56);
T06=simplify(T03*T36);
Pos=simplify(T06(:,4));
TD=[1 0 0 0;0 0 -1 1;0 1 0 0;0 0 0 1] ;
%T30=T03'
Rot03=[sin(q2 + q3)*cos(q1), cos(q2 + q3)*cos(q1), -sin(q1);  sin(q2 + q3)*sin(q1), cos(q2 + q3)*sin(q1),  cos(q1);cos(q2 + q3),        -sin(q2 + q3),        0];
Rot30=simplify(inv(Rot03));
Rd=[1 0 0;0 0 -1;0 1 0];
R36=Rot30*Rd;
