function dzdt=myfunc(t,z)
m=1;
F=-1;
dzdt_1=z(2);
dzdt_2=F/m;
dzdt=[dzdt 1;dzdt 2];