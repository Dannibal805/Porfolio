function  [sys,x0,str,ts] = masaresorte2(t,x,u,flag)
%SFUNCONT An example M-File S-function for continuous systems.
%   This M-file is designed to be used as a template for other
%   S-functions. Right now it acts as an integrator. This template
%   is an example of a continuous system with no discrete components.
%
%   See sfuntmpl.m for a general S-function template.
%
%   See also SFUNTMPL.

%   Copyright 1990-2007 The MathWorks, Inc.
%   $Revision: 1.14.2.1 $

switch flag
  case 0                                                % Initialization
    sys = [2,      % number of continuous states
           0,      % number of discrete states
           2,      % number of outputs
           1,      % number of inputs
           0,      % reserved must be zero
           0,      % direct feedthrough flag
           1];     % number of sample times
    x0  = [0 0];
    str = [];
    ts  = [0 0];   % sample time: [period, offset]

  case 1       
      % Derivatives
      m= 5 %kg
k= 0.8 %n/m
b= 0.75 %ns2/m
sys(1,1)=x(2)
sys(2,1)=(u-k*x(1)-b*x(2))/m;
    %dqdt(1)=q(2);
%dqdt(2)=(u-k*q(1)-b*q(2))/m;
%sys=dqdt;
  case 2                                                % Discrete state update
    sys = []; % do nothing

  case 3
    sys = x;                                         
  
  case 9                                                % Terminate
    sys = []; % do nothing

  otherwise
    DAStudio.error('Simulink:blocks:unhandledFlag', num2str(flag));
end
