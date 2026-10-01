% Programa para introducir una matriz 
clc;clear all;
disp('bienvenido ala matriz');
tam=input('Dar tamaño de las filas de una matriz:');
tam2=input('Dar tamaño de las columnas de la matriz ');
for k=1:tam
  for  i=1:tam2
    L(k,i)=input(' introduzca el dato ');
  end
end
L