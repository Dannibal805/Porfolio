from math import pi, tan

def area_poligon_reg(n,s):
    area = n* s**2/ (4*tan(pi/4))
    return  area


num_l = 5
long_l = 12

print(area_poligon_reg(num_l,long_l))