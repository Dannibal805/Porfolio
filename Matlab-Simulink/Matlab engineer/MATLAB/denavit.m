function[heigthemberg]= denavit (theta,d,a,alfa)  
  
 heigthemberg=[cos(theta) -cos(alfa)*sin(theta) sin(alfa)*sin(theta) a*cos(theta);       
               sin(theta) cos(alfa)*cos(theta) -sin(alfa)*cos(theta) a*sin(theta);
               0              sin(alfa)          cos(alfa)                      d;
               0                 0                     0                        1];
end

 
 %Theta   el angulo alrededor de z anterior  para que  x quede paralelo 
 %d como la distancia  z anterior  para que  x anterior y actual queden
 %complanares 
 %a  como la distancia   de x actual  que abria que desplazar para  que
 %sistema actual   y anterior coinsidieran
 %alpha como el angulo alrededor de  actual  para  que nuestros sistemas
 %queden ideanticos actual y anterior 