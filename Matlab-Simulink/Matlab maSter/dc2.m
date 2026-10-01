%% tipo 0
sys=zpk([],-1,2)
y=feedback(sys,1)
step(y)

%% Tipo 1 
sys=zpk([],[0 -1],2)
y=feedback(sys,1)
t=[0:.01:20];
figure 
step(y)
figure 
lsim(y,t,t)

%% Tipo 2
sys=zpk([],[-1 0 0],2)
y=feedback(sys,1)
figure
step(y)
figure
lsim(y,t,t)
figure
lsim(y,t.^2,t)

%% otro ejerciscio 

sys=zpk([-.1 -.5],[1 1 .3],0,.5)
y=feedback(sys,1)
step(y)

