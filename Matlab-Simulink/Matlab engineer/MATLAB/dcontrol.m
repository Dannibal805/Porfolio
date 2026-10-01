G=zpk(-.3,[.2 .7],1,.1)
Gd=zpk(.7,.85,.33,.1)
y=feedback(G*Gd,1)
step(y)

