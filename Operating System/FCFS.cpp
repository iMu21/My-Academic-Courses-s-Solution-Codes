#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NumberOfProcess;
    cout<<"Enter the number of process: ";
    cin>>NumberOfProcess;
    int BurstTime[NumberOfProcess+1];
    int WaitingTime[NumberOfProcess+1];
    int wait=0;
    BurstTime[0]=0;
    int ConsecutiveSum=0;
    cout<<"\nEnter the burst time for"<<endl;
    for(int i=1;i<=NumberOfProcess;i++){
        cout<<"Process "<<i<<" : ";
        cin>>BurstTime[i];
    }
    cout<<"\n";
    cout<<"\nScheduling chart: ";
    for(int i=1;i<=NumberOfProcess;i++){
        WaitingTime[i]=wait;
        ConsecutiveSum+=WaitingTime[i];
        cout<<"Process "<<i<<" ("<<wait<<",";
        wait+=BurstTime[i];
        cout<<wait<<") ";
    }
    cout<<"\n\nWaiting time for: "<<endl;
    for(int i=1;i<=NumberOfProcess;i++){
        cout<<"Process "<<i<<" "<<WaitingTime[i]<<endl;
    }
    cout<<"\nAverage waiting time is "<<float(ConsecutiveSum)/float(NumberOfProcess)<<endl;
}
