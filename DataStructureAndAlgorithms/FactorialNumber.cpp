#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    cout<<"The factorial value of the number "<<n<<" is "<<ans<<endl;
}
