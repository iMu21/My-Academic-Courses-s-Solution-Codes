import random
import math
print("Enter the values of Mean: ")
Mean=float(input())
print("Enter the value of parameter k: ")
k=int(input())
print("Enter the number of variants to be generated: ")
NumberOfVariants=int(input())
l=[]
for i in range(NumberOfVariants):
    prod=float(1.0)
    for j in range(k):
        prod*=random.randint(0.0,32768.0)/32768
    l.append(str(round((Mean*((-1)/k)*math.log(prod)),6)))
print("Values of variate x: ",'  '.join(l))
