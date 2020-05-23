import random
n=5
x=[1.5,2.5,4.0,5.5,6.0]
p=[0.0,0.1,0.25,0.65,0.90,1.0]
print("Enter the number of variants to be generated: ")
NumberOfVariants=int(input())
l=[]
y=float(0.0)
for i in range(NumberOfVariants):
    rnd=random.randint(0.0,32768.0)/32768.0
    for j in range(n):
        k=j+1
        if rnd>p[j] and rnd<=p[k]:
            y=x[j]
    l.append(str(y))
print("Values of variants x: ",'  '.join(l))
