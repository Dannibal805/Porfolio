% I created a function D_H (Denavit hattemberg) to execute this program
% Configuration Robot is   spheric 
% For using function D_H introduce parameters like alpha, theta, or d
% respectly
% Use a  trick tu simplify Homogeneous transform  declarate like simbolic
% pi and all expresions were reducted 


% for more information about that and some example so excersices  check
% book this program developed  by M. en Mechatronic Alvaro Daniel Soto
% Guerrero adanielsguerrero@hotmail.com



clc 
clear all
syms q1 l1 l2  l3 l4 q3 q2 qp1 qp2 qp3;
pii=sym(pi)

Rpt=simplify([-sin(q1)*cos(q2)*qp1-cos(q1)*sin(q2)*qp2 -cos(q1)*qp1 sin(q1)*sin(q2)*qp1-cos(q1)*cos(q2)*qp2; cos(q1)*cos(q2)*qp1-sin(q1)*sin(q2)*qp2 -sin(q1)*qp1 -cos(q1)*sin(q2)*qp1-sin(q1)*cos(q2)*qp2; cos(q2)*qp2 0 -sin(q2)*qp2])
Rt=simplify([cos(q1)*cos(q2) sin(q1)*cos(q2) sin(q2);-sin(q1) cos(q1) 0; -cos(q1)*sin(q2) -sin(q1)*sin(q2) cos(q2)])
Sw=simplify(Rpt*Rt)