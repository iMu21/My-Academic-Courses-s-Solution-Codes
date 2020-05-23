#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //Size of the array
    cout<<"Enter the size of the array: ";
    cin>>n; //Reading the size of the array from the user
    int a[n]; //Creating a n sized array
    cout<<"Enter the values of the array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i]; // reading value for the ith index of the array
    }


    // nested for loop for bubble sort in ascending order
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){  // use a[i]>a[j] for descending order sort
                int c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }

    cout<<"The Ascending Ordered Sorted Array By Bubble Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
