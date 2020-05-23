import random
def throw():
    n1=random.randint(0.0,6.0)
    n2=random.randint(0.0,6.0) 
    return n1+n2
    
print("Number of game to paly: ")
NumberOfGame=int(input())
win=int(0)
loss=int(0)
for i in range (NumberOfGame):
    score1=throw()
    print("Score1 = ",score1)
    if score1==7 or score1==11:
        win+=1
        print("It is a win")
    elif score1==2 or score1==3 or score1==12:
        loss+=1
        print("It is a loss")
    else:
        score2=throw()
        print("Score2 = ",score2)
        while score2!=score1 and score2!=7:
            score2=throw()
            print("Score2 = ",score2)
        if score2==score1:
            win+=1
            print("Win by matching first score")
        else:
            loss+=1
            print("Lose due to falling to match first score")
print("Win = ",win,"  Loss = ",loss)
