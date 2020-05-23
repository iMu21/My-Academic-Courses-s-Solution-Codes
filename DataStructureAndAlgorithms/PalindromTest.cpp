#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int l=s.size();
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            cout<<"\nThis is not a palindrome"<<endl;
            return 0;
        }
    }
    cout<<"\nThis is a palindrome"<<endl;
}
