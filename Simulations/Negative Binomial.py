import random
print("Enter the ProbabilityOfSuccess in a trials= ")
ProbabilityOfSuccess=float(input())
print("Enter the Number of success = ")
NumberOfSuccess=int(input())
print("Enter the number of variants to be generated = ")
NumberOfVariants=int(input())
print("values of variants: ")
for i in range(NumberOfVariants):
    x=int(0);s=int(0)
    while s<NumberOfSuccess:
        if random.randint(0.0,32768)/32768.0<ProbabilityOfSuccess:
            s+=1
        x+=1
    print(x)
