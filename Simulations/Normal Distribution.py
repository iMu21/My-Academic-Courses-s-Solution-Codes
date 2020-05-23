import random
print("Enter the values of MUE: ")
Mue=float(input())
print("Enter the values of SIGMA: ")
Sigma=float(input())
print("Enter the number of variants to be generated: ")
NumberOfVariants=int(input())
l=[]
for i in range(NumberOfVariants):
    sum=0
    for j in range(12):
        sum+=random.randint(0.0,32768.0)/32768.0
    l.append(str(round((Mue+Sigma*(sum-6)),6)))
print("Values of variants: ",' '.join(l))
