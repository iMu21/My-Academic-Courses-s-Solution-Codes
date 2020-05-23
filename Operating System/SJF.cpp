#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NumberOfProcess;
    cout<<"Enter the number of process: ";
    cin>>NumberOfProcess;
    pair<int,int> BurstTime[NumberOfProcess+1];
    int WaitingTime[NumberOfProcess+1];
    BurstTime[0].first=0;
    BurstTime[0].second=0;
    int ConsecutiveSum=0;
    int burst;
    cout<<"\nEnter the burst time for"<<endl;
    for(int i=1;i<=NumberOfProcess;i++){
        cout<<"Process "<<i<<" : ";
        cin>>burst;
        BurstTime[i].first=burst;
        BurstTime[i].second=i;
    }
    sort(BurstTime+1,BurstTime+NumberOfProcess+1);
    int wait=0;
    cout<<"\nScheduling chart: ";
    for(int i=1;i<=NumberOfProcess;i++){
         WaitingTime[BurstTime[i].second]=wait;
         ConsecutiveSum+=wait;
         cout<<"Process "<<BurstTime[i].second<<" ("<<wait<<",";
         wait+=BurstTime[i].first;
         cout<<wait<<") ";
    }
    cout<<"\n\nWaiting time for"<<endl;
    for(int i=1;i<=NumberOfProcess;i++){
        cout<<"Process "<<i<<" "<<WaitingTime[i]<<endl;
    }
    cout<<"\nAverage waiting time is "<<float(ConsecutiveSum)/float(NumberOfProcess)<<endl;
}

