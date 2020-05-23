#include<bits/stdc++.h>
using namespace std;

int Partition(int a[],int low,int high){

int pivot=a[high]; //take the last value of the partition as the pivot
int i = (low - 1);

/*loop for putting the greater value from the pivot behind the pivot
and put the smaller value from the pivot before the pivot */
for(int j=low;j<high;j++){
    if(a[j]<pivot){
        i++;
        int c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}
    i++;
    int c=a[i];
    a[i]=a[high];
    a[high]=c;
    return i; //return the position of the pivot value after positioning the values of this partition
}

void quickSort(int a[],int low,int high){

  if(low<high){
    int pi= Partition(a,low, high); //function to make partition of the given array
    quickSort(a,low,pi-1); //calling quickSort functions to both of the partitions
    quickSort(a,pi+1,high);
  }

}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int Array[n]; //creating a n sized array
    cout<<"Enter the values of the array:\n";
    for(int i=0;i<n;i++){
        cin>>Array[i]; //reading values of the array
    }
    quickSort(Array,0,n-1); //calling quickSort function and passing value to quickSort function

    cout<<"Ascending ordered sorted array by quick sort:\n";
    for(int i=0;i<n;i++){
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
