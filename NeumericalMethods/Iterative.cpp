#include<bits/stdc++.h>
using namespace std;

double g(double x,double a,double b,double c){
    return (-c-(x*x*a))/b;}
bool check(double w,double a,double b,double c){
double    x=g(w,a,b,c);double y=g(x,a,b,c);double z=g(y,a,b,c);
    if (abs(x-y)>abs(y-z))
        return true;
    else
        return false;
}

int main(){
printf("Assuming the equation as aX2+bX+c=0\nEnter the value of a,b and c correspondingly:\n");
double a,b,c;
cin>>a>>b>>c;
float x=2,y=3;
while (1){
     if (check(x,a,b,c))
         break;
     else if (check(y,a,b,c)){
         x=y;
         break;}
     else
         x-=1;y+=1;
}
y=g(x,a,b,c);
while (int(x*1000000)!=int(y*1000000)){
    x=y;y=g(y,a,b,c);
}
printf("The root of this equation is %.6lf",x);
}
