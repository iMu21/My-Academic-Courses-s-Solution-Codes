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

    for(int gap = n/2;0<gap;gap/=2){
        for(int i=gap;i<n;i++){
            int curr= arr[i];
            int j;
            for(j=i;gap<=j && curr<arr[j-gap];j-=gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=curr;
        }
    }
cout<<"Ascending ordered array by shell sort:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
