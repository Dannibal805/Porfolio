function y = fcn(phi,ppsi)
%#codegen



y = R^2*(mb*d^2 + Ix)*(d*mb*sin(phi)*pphi^2 + tau1/R + tau2/R))/(2*Ia*Ix + R^2*d^2*mb^2 + Ix*R^2*mb + 2*Ix*R^2*mw + 2*Ia*d^2*mb + 2*R^2*d^2*mb*mw - R^2*d^2*mb^2*cos(phi)^2) + (R^2*d*mb*cos(phi)*(- cos(phi)*sin(phi)*(mb*d^2 + Iy - Iz)*ppsi^2 + tau1 + tau2 - d*g*mb*sin(phi)))/(2*Ia*Ix + R^2*d^2*mb^2 + Ix*R^2*mb + 2*Ix*R^2*mw + 2*Ia*d^2*mb + 2*R^2*d^2*mb*mw - R^2*d^2*mb^2*cos(phi)^2);