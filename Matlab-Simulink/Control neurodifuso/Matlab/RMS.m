Fr=dinnegc12(:,4);
F1sc=f1c(:,1);
F1sc1=f1c1(:,1);
F2sc=f2c(:,1);
F2sc1=f2c1(:,1);
F3sc=f3c(:,1);
F3sc1=f3c1(:,1);
F4sc=f4c(:,1);
F4sc1=f4c1(:,1);
F5sc=f5c(:,1);
F5sc1=f5c1(:,1);
F6sc=F6c(:,1);
F6sc1=F6c1(:,1);

 eproma1= 0;
%Calculando ECM (Constant)
clc

n=578;
N = n-1;
%dim= sum((Fr-F1sc)/578)
Sd = sum(Fr);
Sr = sum(F1sc);
Sr1 = sum(F1sc1);
S2r = sum(F2sc);
S2r1 = sum(F2sc1);
S3r = sum(F3sc);
S3r1 = sum(F3sc1);
S4r = sum(F4sc);
S4r1 = sum(F4sc1);
S5r = sum(F5sc);
S5r1 = sum(F5sc1);
S6r = sum(F6sc);
S6r1 = sum(F6sc1);

ea1= (Sd-Sr)/578 %error promedio
for i= 1:578
    eproma1=eproma1+(Fr(i)-F1sc(i))^2;
end
vari1= eproma1/N % varianza
ecm222 = ((((n-1)/(n+1))*eproma1-eproma1^2)^2); % Error cuadratico medio 

prom1c= Ep(Sd,Sr1);
K1c=ECM(Sd,Sr1,n);
M1c=VAR(Fr,F1sc1,N);

prom2c= Ep(Sd,S2r);
K2c=ECM(Sd,S2r,n);
M2c=VAR(Fr,F2sc,N);

prom2c1= Ep(Sd,S2r1);
K2c1=ECM(Sd,S2r1,n);
M2c1=VAR(Fr,F2sc1,N);

prom3c= Ep(Sd,S3r);
K3c=ECM(Sd,S3r,n);
M3c=VAR(Fr,F3sc,N);

prom3c1= Ep(Sd,S3r1);
K3c1=ECM(Sd,S3r1,n);
M3c1=VAR(Fr,F3sc1,N);

prom4c= Ep(Sd,S4r);
K4c=ECM(Sd,S4r,n);
M4c=VAR(Fr,F4sc,N);

prom4c1= Ep(Sd,S4r1);
K4c1=ECM(Sd,S4r1,n);
M4c1=VAR(Fr,F4sc1,N);

prom5c= Ep(Sd,S5r);
K5c1=ECM(Sd,S5r,n);
M5c1=VAR(Fr,F5sc,N);

prom5c1= Ep(Sd,S5r1);
K5c1=ECM(Sd,S5r1,n);
M5c1=VAR(Fr,F5sc1,N);

prom6c= Ep(Sd,S6r);
K6c=ECM(Sd,S6r,n);
M6c=VAR(Fr,F6sc,N);

prom6c1= Ep(Sd,S6r1);
K6c1=ECM(Sd,S6r1,n);
M6c1=VAR(Fr,F6sc1,N);

F1sl=f1l(:,1);
F1sl1=f1l1(:,1);
F2sl=f2l(:,1);
F2sl1=f2l1(:,1);
F3sl=f3l(:,1);
F3sl1=f3l1(:,1);
F4sl=f4l(:,1);
F4sl1=f4l1(:,1);
F5sl=f5l(:,1);
F5sl1=F5l1(:,1);
F6sl=F6l(:,1);
F6sl1=F6l1(:,1);

Sd = sum(Fr);
Slr = sum(F1sl);
Slr1 = sum(F1sl1);
Sl2r = sum(F2sl);
Sl2r1 = sum(F2sl1);
Sl3r = sum(F3sl);
Sl3r1 = sum(F3sl1);
Sl4r = sum(F4sl);
Sl4r1 = sum(F4sl1);
Sl5r = sum(F5sl);
Sl5r1 = sum(F5sl1);
Sl6r = sum(F6sl);
Sl6r1 = sum(F6sl1);


prom1l= Ep(Sd,Slr);
K1l=ECM(Sd,Slr,n);
M1l=VAR(Fr,F1sl,N);

prom1l1= Ep(Sd,Slr1)
K1l1=ECM(Sd,Slr1,n)
M1l1=VAR(Fr,F1sl1,N)

prom2l= Ep(Sd,Sl2r);
K2l=ECM(Sd,Sl2r,n);
M2l=VAR(Fr,F2sl,N);

prom2l1= Ep(Sd,Sl2r1)
K2l1=ECM(Sd,Sl2r1,n)
M2l1=VAR(Fr,F2sl1,N)

prom3l= Ep(Sd,Sl3r);
K3l=ECM(Sd,Sl3r,n);
M3l=VAR(Fr,F3sl,N);

prom3l1= Ep(Sd,Sl3r1)
K3l1=ECM(Sd,Sl3r1,n)
M3l1=VAR(Fr,F3sl1,N)

prom4l= Ep(Sd,Sl4r);
K4l=ECM(Sd,Sl4r,n);
M4l=VAR(Fr,F4sl,N);

prom4l1= Ep(Sd,Sl4r1);
K4l1=ECM(Sd,Sl4r1,n);
M4l1=VAR(Fr,F4sl1,N);

prom5l= Ep(Sd,Sl5r);
K5l=ECM(Sd,Sl5r,n);
M5l=VAR(Fr,F5sl,N);

prom5l1= Ep(Sd,Sl5r1)
K5l1=ECM(Sd,Sl5r1,n)
M5l1=VAR(Fr,F5sl1,N)

prom6l1= Ep(Sd,Sl6r);
K6l=ECM(Sd,Sl6r,n);
M6l=VAR(Fr,F6sl,N);

prom6l11= Ep(Sd,Sl6r1)
K6l1=ECM(Sd,Sl6r1,n)
M6l1=VAR(Fr,F6sl1,N)