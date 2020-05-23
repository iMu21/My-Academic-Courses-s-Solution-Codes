#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int l=s.size();
    for(int i=0;i<l/2;i++){
        swap(s[i],s[l-i-1]);
    }
    cout<<"\nReversed string of the given string:  "<<s<<endl;
}
