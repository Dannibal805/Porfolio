function M=VAR(Fr,Fsc,n)
M=0;
for i= 1:578
    M=M+(Fr(i)-Fsc(i))^2;
end
M= M/n ;% varianza
end