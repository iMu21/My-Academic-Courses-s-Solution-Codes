#include<bits/stdc++.h>
using namespace std;

double f(double a){
     return ((9.8*68.1)/a)*(1.0-exp((-1.0)*((a*10.0)/68.1)))-40.0;
}

int main(){
double a=1,b=10;
while ((f(a)*f(b))>=0){ a-=2;b+=2; }
double r=1;
while ((int)(a*10000)!=(int)(b*10000)){
    r=(a+b)/2;
    if (f(a)*f(r)<0) b=r;
    else if (f(a)*f(r)>0) a=r;
    else break; }
cout<<"The root is "<<r<<endl;
}
