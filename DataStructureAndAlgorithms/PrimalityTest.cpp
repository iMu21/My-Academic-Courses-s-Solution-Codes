#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    if(n==1){
        cout<<"The number 1 is not a prime number"<<endl;
    }
    for (int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"The number "<<n<<" is not a prime number"<<endl;
            return 0;
        }
    }
    cout<<"The number "<<n<<" is a prime number"<<endl;
}
