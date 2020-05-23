#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cout<<"How many value you want to search?\n";
    cin>>m;
    while(m--){
        int x;
        bool findingStatus=false;
        cout<<"\nEnter a value to search: ";
        cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<" has been founded in the index number "<<i+1<<" of the array."<<endl;
            findingStatus=true;
            break;
        }
    }
    if(findingStatus==false){
        cout<<x<<" is not in the array."<<endl;
    }
    }
}
