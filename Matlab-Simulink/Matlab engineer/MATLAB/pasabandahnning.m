hd_pbn=pb_ideal(67,31*pi/320)-pb_ideal(67,57*pi/80);
h=hd_pbn.*blackman(67)';
freqz(h);
load handel;
y1=filter(h,[1],y);
sound(y1);

