#include<stdio.h>
int main(){

int n,i,j;
float x[20],y[20], sumx=0, sumy=0, sumxy=0,sumx2=0,a0,a1;
printf("Enter the value of number of terms:");
scanf("%d",&n);
printf("\nEnter the value of x:\n");
    for(i=0;i<n;i++)
    scanf("%f",&x[i] );
  printf("\nEnter the value of y:\n");
    for(i=0;i<n;i++)
    scanf("%f",&y[i]);
      for(i=0;i<n;i++){

        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i]*y[i]);
        sumx2=sumx2+(x[i]*x[i]);
      }

        a1=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
        a0=(sumy-(a1*sumx))/n;

printf("\nThe line is:Y=%f+%fx",a0,a1);
}
