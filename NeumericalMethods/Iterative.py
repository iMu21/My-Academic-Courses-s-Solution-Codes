def g(x,a,b,c):
    return (-c-(x*x*a))/b
def check(w,a,b,c):
    x=g(w,a,b,c);y=g(x,a,b,c);z=g(y,a,b,c)
    if abs(x-y)>abs(y-z):
        return True
    else:
        return False

print("Assuming the equation as aX2+bX+c=0\nEnter the value of a,b and c correspondingly:")
a,b,c=map(int,input().split())
if (b*b-4*a*c)>=0:
   x=float(2);y=float(3)
   while 1:
        if check(x,a,b,c):
            break
        elif check(y,a,b,c):
            x=y
            break
        else:
            x-=1;y+=1
   y=g(x,a,b,c)
   while round(x,6)!=round(y,6):
       x=y;y=g(y,a,b,c) 
   print("The root of this equation is",round(x,6))
else:
    print("The equation has no root of real number.")
