
% I created a function D_H (Denavit hattemberg) to execute this program
% Configuration Robot is  standford elbow down  with spheric wrist
% For using function D_H introduce parameters like alpha, theta, or d
% respectly

% For more information about that and some example so excersices  check
% book this program developed  by M. en Mechatronic Alvaro Daniel Soto
% Guerrero adanielsguerrero@hotmail.com


clc 
clear all
syms q1 l1 l2 q2 d3 l3 q3 l4 l6 q3 q4 q5 q6 q7;
pii=sym(pi)
A01=D_H(q1,l1,0,-pii/2);
A12=D_H(q2+pii/2,0,l2,0);
A23=D_H(q3,0,0,pii/2);
A34=D_H(0,l4,0,pii/2);
T02=simplify(A01*A12)
T03=simplify(A01*A12*A23)
T04=simplify(A01*A12*A23*A34)

%% muñeca esferica
A45=D_H(q5-pii/2,0,0,-pii/2);
A56=D_H(q6,0,0,pii/2);
A67=D_H(q7,l6,0,0);
T46=simplify(A45*A56)
T47=simplify(A45*A56*A67)
T07=simplify(A01*A12*A23*A34*A45*A56*A67)