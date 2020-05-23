#include<bits/stdc++.h>
using namespace std;


float determinant( float matrix[20][20], int n) {
   float det = 0;
   float submatrix[20][20];
   if (n==2)
      return ((matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1])); /*base of this recursion*/
   else {
      for (int x=0;x<n;x++) {
            int subi=0;
            for (int i=1;i<n;i++) {
               int subj=0;
               for (int j=0;j<n;j++) {
                  if (j==x)
                  continue;
                  submatrix[subi][subj]=matrix[i][j];
                  subj++;
               }
               subi++;
            }
            det=det+(pow(-1, x)*matrix[0][x]*determinant(submatrix,n-1));
      }
   }
   return det;
}





int main()
{
   float matrix[20][20],val_matrix[20][20]; /* "val_matrix" is taken so that we can work with "matrix" without changing its value. */
   int n; /*Number of unknowns or equations*/
   cin>>n;
   float value[n+1]; /* To save the value of determinant of different matrixes. */

   /* Input the values of the co-efficients of X1 to Xnth unknowns and the constant of every single equation respectively. */
   for(int i=0;i<n;i++){
    for(int j=0;j<n+1;j++){
    cin>>matrix[i][j];
   }
   }

   /* Calculate determinants.*/
   for(int k=0;k<n+1;k++){
   for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
            val_matrix[i][j]=matrix[i][j];
    }
   }
   if(k!=0){
    for(int i=0;i<n;i++){
            val_matrix[i][k-1]=matrix[i][n];
    }
   }
   value[k]=determinant(val_matrix,n);
   }

   /*Calculate the unknowns.*/
   for(int i=0;i<n;i++){
    cout<<"x"<<i+1<<" = "<<value[i+1]/value[0]<<endl;
   }
      /*Happy coding :) */
   return 0;
}

