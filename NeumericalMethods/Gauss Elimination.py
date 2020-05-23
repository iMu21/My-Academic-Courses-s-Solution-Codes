n=(int)(input())
a=[[0 for i in range(0)] for j in range (n)]
for i in range(n):
    a[i]=list(map(float,input().split()))
    
mark=int(0)
for i in range (n):
  for j in range (n):
    v=[]
    var=(float)(0)
    
    if i!=j:
      for k in range (n+1):
            v.append(a[i][k]/a[j][k])
            if k==n:
                var=a[i][k]/a[j][k]
      v.sort()
      if v[0]==v[n]:
        mark=1;
      else:
          if v[0]==v[n-1]:
               if v[n]==var:
                 mark=2
          elif v[1]==v[n]:
               if v[0]==var:
                 mark=2;
      v.clear()
    


if mark==1:
        print("There was 2 or more equations which explain same line\n");
        
elif mark==2:
         print("There was 2 or more equations which explain parallel lines\n");
         
else:
     for i in range(n):
      for j in range(n):
       if i<j:
         t=a[j][i]/a[i][i]
         for k in range (n+1):
          a[j][k]-=a[i][k]*t
     ans=[0 for i in range(n+1)]
     ans[n-1]=a[n-1][n]/a[n-1][n-1]
     for i in range(n-2,-1,-1):
         sum=float(0)
         for j in range(i+1,n,1):
             sum+=a[i][j]*ans[j]
         ans[i]=(a[i][n]-sum)/a[i][i]
     print("Unknowns are:\n")
     ans1=""
     for i in range(n):
         ans1+="X"+str(i+1)+" = "+str(ans[i])+"\n"
     print(ans1)
    
