#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n; // size of the array
    int a[n]; //create a n sized array

    cout<<"Enter the values of the array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i]; //reading value of the
    }


    /* dividing the given array into two parts
    Array1 and Array2 */
    int size1 = n/2; //Array1 array Size
    int size2 = n-n/2; //Array2 array Size
    int Array1[size1]; //crating Array1 as the first portion of a
    int Array2[size2]; //creating Array2 as the second portion of a

    for(int i=0;i<size1;i++){
         Array1[i]=a[i]; //inserting the value of Array1 from a
    }

    for(int j=size1,i=0;i<size2;i++,j++){
        Array2[i]=a[j]; //inserting the value of Array2 from a
    }


    /* sorting Array1*/
    for(int i=0;i<size1;i++){
        for(int j=i+1;j<size1;j++){
            if(Array1[i]>Array1[j]){  //use Array1[i]<Array1[j] for descending order
                int c=Array1[i];
                Array1[i]=Array1[j];
                Array1[j]=c;
            }
        }
    }


    /*sorting Array2 */
    for(int i=0;i<size2;i++){
        for(int j=i+1;j<size2;j++){
            if(Array2[i]>Array2[j]){  //use Array2[i]<Array2[j] for descending order
                int c=Array2[i];
                Array2[i]=Array2[j];
                Array2[j]=c;
            }
        }
    }


    /*merging two sorted array Array1 and Array2 in a */
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(Array1[i]<Array2[j]){ //use Array1[i]>Array1[j] for descending order
            a[k]=Array1[i];
            i++;
            k++;
        }
        else{
            a[k]=Array2[j];
            j++;
            k++;
        }
    }
    while(i<size1){
        a[k]=Array1[i];
        i++;
        k++;
    }
    while(j<size2){
        a[k]=Array2[i];
        j++;
        k++;
    }

    /*sorted array a */
    cout<<"Ascending Ordered Sorted Array:\n";
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


}
