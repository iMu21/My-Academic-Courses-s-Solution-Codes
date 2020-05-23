import math
def determinant(n,matrix):
    submatrix=[[0 for i in range(n-1)] for j in range(n-1)]
    det=int(0)
    if n==2:
        return((matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]))
    else:
        for x in range(n):
            subi=int(0)
            for i in range(1,n,1):
                subj=int(0)
                for j in range(n):
                    if j!=x:
                       submatrix[subi][subj]=matrix[i][j]
                       subj+=1
                subi+=1
            det=det+(pow(-1,x)*matrix[0][x]*determinant(n-1,submatrix))
        return det
("Enter the number of equations:")
n=int(input())
("Enter the co-efficients of X1 to Xn and constants correspondingly")
matrics=[[0 for i in range (0)] for j in range (n)]
for i in range(n):
    matrics[i]=list(map(int,input().split()))

val_matrix=[[0 for i in range (n)] for j in range (n)]
value=[0]*(n+1)
for k in range(n+1):
    for j in range(n):
        for i in range(n):
            val_matrix[i][j]=matrics[i][j]
    if k!=0:
        for l in range(n):
            val_matrix[l][k-1]=matrics[l][n]
    value[k]=determinant(n,val_matrix)
ans=""
for i in range (n):
    ans+="X"+str(i+1)+" = "+str(round(value[i+1]/value[0],4))+"\n"
print(ans)
