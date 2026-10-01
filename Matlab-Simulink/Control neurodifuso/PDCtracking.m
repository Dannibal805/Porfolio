close all
clear all
%fi naltime = 20;
k = 0; %initial time
%corners of triangle mfs on y(k) and y(k - 1) uds
midy = [ -1 1];
ukm1 = 0; %initial u(k - 1) = u( - 1)
uk = 0; %initial u(k) = u(0)
ykm1 = - 1; %initial y(k - 1) = y( - 1)
yk = 1; %initial y(k) = y(0)
M=(0:0.1:20)';
%placeholders for vectors saved for plotting
Y = [];
R = [];
K = [];
while k <= 20
    %evaluate memberships for present y(k), y(k - 1)
mu11 = gaussmf(yk,midy(1),midy(2));
mu12 = gaussmf(yk,midy(1),midy(2));
mu21 = gaussmf (ykm1,midy(1),midy(2));
mu22 = gaussmf(ykm1,midy(1),midy(2));
%calculate degrees of fi ring of all rules
mu1 = mu11 * mu21;
mu2 = mu11 * mu22;
mu3 = mu12 * mu21;
mu4 = mu12 * mu22;
%calculate basis functions
zeta1 = mu1/(mu1 + mu2 + mu3 + mu4);
zeta2 = mu2/(mu1 + mu2 + mu3 + mu4);
zeta3 = mu3/(mu1 + mu2 + mu3 + mu4);
zeta4 = mu4/(mu1 + mu2 + mu3 + mu4);
%calculate one - step - ahead reference signal to be tracked
rk = 0.5 * sin(0.2 * pi * k);
rkp1 = 0.5 * sin(0.2 * pi * (k + 1));
%calculate consequents of controller fuzzy system
ccons1 = - 0.6 * ukm1 - 1.5 * yk + 0.4 * ykm1 + rkp1;
ccons2 = ( - ukm1 - 0.4 * yk + 1.8 * ykm1 + rkp1)/1.2;
ccons3 = ( - 0.7 * ukm1 - 1.2 * yk - 0.5 * ykm1 + rkp1)/1.5;
ccons4 = ( - ukm1 - 0.8 * yk + 1.6 * ykm1 + rkp1)/1.5;
%calculate control signal u(k)
uk = zeta1 * ccons1 + zeta2 * ccons2 + zeta3 * ccons3 + zeta4 * ccons4;
%calculate consequents of plant fuzzy system
pcons1 = 1.5 * yk - 0.4 * ykm1 + uk + 0.6 * ukm1;
pcons2 = 0.4 * yk - 1.8 * ykm1 + 1.2 * uk + ukm1;
pcons3 = 1.2 * yk + 0.5 * ykm1 + 1.5 * uk + 0.7 * ukm1;
pcons4 = 0.8 * yk - 1.6 * ykm1 + 1.5 * uk + ukm1;
%calculate y(k + 1) of plant fuzzy system


ykp1 = zeta1 * pcons1 + zeta2 * pcons2 + zeta3 * pcons3 + zeta4 * pcons4;
%save y(k) and r(k) for plotting
Y = [Y yk];
R = [R rk];
K = [K k];
%update u and y for next iteration
ukm1 = uk;
ykm1 = yk;
yk = ykp1;
k = k + 1;
end
%plot tracking error
plot(K,Y, 'ko' ,K,R, 'ksq' ),grid plot(K,Y, 'ko' ,K,R, 'ksq' ,'markersize' ,10, 'linewidth' ,3),grid
plot(K,Y - R, 'ko', 'markersize' ,10, 'linewidth' ,3),grid legend( '\ity(t)' ,'\itr(t)' ) axis([0 20 - 0.6 1.2])
