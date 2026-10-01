g=zpk(-.7181,[1 .3679],.3679,1)
gd=zpk(.3679,-.418,1.582,1)
y=feedback(g*gd,1)
step(y)