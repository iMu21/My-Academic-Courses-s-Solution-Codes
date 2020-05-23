#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NumberOfProcess;
    cout<<"Enter the number of process: ";
    cin>>NumberOfProcess;
    pair<int,pair<int,int> >Priority[NumberOfProcess+1];
    int WaitingTime[NumberOfProcess+1];
    Priority[0].first=0;
    Priority[0].second.first=0;
    Priority[0].second.second=0;
    int ConsecutiveSum=0;
    int burst;
    int pri;
    cout<<"\nEnter the burst time and priority for"<<endl;
    for(int i=1;i<=NumberOfProcess;i++){
        cout<<"Process "<<i<<" : ";
        cin>>burst>>pri;
        Priority[i].first=pri;
        Priority[i].second.first=burst;
        Priority[i].second.second=i;

    }
    sort(Priority+1,Priority+NumberOfProcess+1);
    int wait=0;
    cout<<"\nScheduling chart: ";
    for(int i=1;i<=NumberOfProcess;i++){
         WaitingTime[Priority[i].second.second]=wait;
         ConsecutiveSum+=wait;
         cout<<"Process "<<Priority[i].second.second<<" ("<<wait<<",";
         wait+=Priority[i].second.first;
         cout<<wait<<") ";
    }
    cout<<"\n\nWaiting time for"<<endl;
    for(int i=1;i<=NumberOfProcess;i++){
        cout<<"Process "<<i<<" "<<WaitingTime[i]<<endl;
    }
    cout<<"\nAverage waiting time is "<<float(ConsecutiveSum)/float(NumberOfProcess)<<endl;
}

