import random
print("Enter the value of mean = ")
Lemda=float(input())
print("Enter the number of variants to be generated = ")
NumberOfVariants=int(input()) 
l=[]
for i in range(NumberOfVariants):
    Fact=float(1);x=int(1);CumulativeProbability=0
    while random.randint(0.0,32768.0)/32768.0>CumulativeProbability:
        CumulativeProbability+=pow(2.718282,Lemda*(-1.0))*pow(Lemda,x)/Fact
        x+=1
        Fact=Fact*x
    l.append(str(x))
print("Value of variants: ",' '.join(l))
