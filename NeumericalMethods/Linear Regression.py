print("Enter the number of terms:")
n=int(input())
sumx=sumy=sumxy=sumx2=int(0)
for i in range(n):
    x,y=map(int,input().split())
    sumx+=x
    sumy+=y
    sumxy+=x*y
    sumx2+=x*x
a1=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx))
a0=(sumy-(a1*sumx))/n
ans="y="+str(round(a1,2))+"x"
if a0>=0:
    ans+="+"
ans+=str(round(a0,2))
print(ans)
print("Enter the value of x: ")
x=int(input())
y=a0+(a1*x)
print("y= ",round(y,2))

