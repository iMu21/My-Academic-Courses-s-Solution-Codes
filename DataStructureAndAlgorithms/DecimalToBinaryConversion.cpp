#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    string ans="";
    int m=n;
    while(m!=0){
        if (m%2==1){
            ans="1"+ans;
        }
        else{
            ans="0"+ans;
        }
        m/=2;
    }
    cout<<"The binary value of the decimal number "<<n<<" is "<<ans<<endl;
}
