%prueba de estabilidad de lyponound

K1 =[7.997223999999999   0.000079980120000]
 A1=  [-0.002786000000000  -0.000000019880000;
         1.000000000000000                   0]
  B1=[1;0]
 G=[.005 0;0 .005]
 D1=0;
C1= [1 0];

 M2=(A1-B1*K1)'*G*(A1-B1*K1)-G  %prueba del segundo modelo 100
 
 %primer  modelo prueba 200
 K = [8.997598430000000   0.008999983770000]
 A= [-0.003401570000000  -0.000000016230000;
   1.000000000000000                   0]
B=[1;0]
G=[.005 0;0 .005]
C = [1 0];
D=0;
M1=(A-B*K)'*G*(A-B*K)-G
%prueba tres
M3=(A-B*K1)'*G*(A-B*K1)-G
%prueba cuatro
M4=(A1-B1*K)'*G*(A1-B1*K)-G

%el sistema es globalmente estable
