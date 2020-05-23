import random
print("Enter the number of trials= ")
NumberOfTrials=int(input())
print("Enter the probability of success= ")
ProbabilityOfSuccess=float(input())
print("Enter the number of variants to be generated= ")
NumberOfVariants=int(input())
print("values of variants: ")
for i in range(NumberOfVariants):
    x=int(0)
    for j in range(NumberOfTrials):
        if random.randint(0.0,32768)/32768.0<ProbabilityOfSuccess:
            x+=1
    print(x)
