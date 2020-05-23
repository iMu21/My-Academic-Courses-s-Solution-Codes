import math

def f(a):
    return ((9.8*68.1)/a)*(1-math.exp((-1)*((a*10)/68.1)))-40

a=float(1)
b=float(10)

while (f(a)*f(b))>=0:
    a-=2;b+=2
r=(float)(1.0)
while (int)(a*1000)!=(int)(b*1000):
    r=(a+b)/2
    #print(round(a,5),round(b,5),round(r,5))
    if f(a)*f(r)<0:
        b=r
    elif f(a)*f(r)>0:
        a=r
    else:
        break

print("The root is ",round(r,5))
