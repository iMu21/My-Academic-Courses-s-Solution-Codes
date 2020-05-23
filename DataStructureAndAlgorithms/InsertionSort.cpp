#include<bits/stdc++.h>
using namespace std;


int main(){

int n;
cout<<"Enter the size of the array: ";
cin>>n;
int Array[n];
cout<<"Enter the values of the array:\n";
for(int i=0;i<n;i++){
    cin>>Array[i];
}

for(int i=0;i<n;i++){
    int key_value = Array[i];
    int j = i-1;

    while(j>=0 && Array[j]>key_value){
        Array[j+1] = Array[j];
        j=j-1;
    }
    Array[j+1] = key_value;
}

cout<<"Ascending ordered sorted array by insertion sort:\n";
for(int i=0;i<n;i++){
    cout<<Array[i]<<" ";
}
cout<<endl;

}
