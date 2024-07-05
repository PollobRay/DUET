// Copyright (c) Ray

//
// Created by Ray on 26-Feb-23.
//
/*
#include<iostream>
#include<vector>
using namespace std;

int findSJFProcess(vector<int> & arrival,vector<int> & burst, vector<int> &taken,int total,int AT)
{
    int processNo=-1;
    int BT=9999999;

    for(int i=1;i<=total;i++ )
    {
        if( !taken[i] && arrival[i]<=AT && burst[i]<BT)
        {
            processNo=i;
            BT=burst[i];
        }
    }

    return processNo;
}

int main()
{
    vector<int> arrivalTime(100,-1);
    vector<int> burstTime(100,-1);
    vector<int> processTaken(100,0);
    vector<int> processStartTime(100,0);
    vector<int> processExeSeq;
    vector<int> TAT(100,0);

    int totalProcess,taken;

    cout<<"Enter Total Number of Processes :";
    cin>>totalProcess;

    cout<<"Enter Arrival Time & Burst Time:"<<endl;
    for(int i=1;i<=totalProcess;i++)
    {
        cout<<"For process "<<i<<endl;
        cin>>arrivalTime[i]>>burstTime[i];
    }

    taken=0;
    int time=0;
    while(taken<totalProcess)
    {
        int avlProcess=findSJFProcess(arrivalTime,burstTime,processTaken,totalProcess,time);

        if(avlProcess==-1)
        {
            time=time+1;
            continue;
        }

        processStartTime[avlProcess]=time;
        processTaken[avlProcess]=1;
        time=time+burstTime[avlProcess];
        processExeSeq.push_back(avlProcess);
        taken++;
    }


    cout<<"\n\nGantt Chart :"<<endl;
    cout<<"| ";
    for(int p:processExeSeq)
    {
        int com=processStartTime[p]+burstTime[p];
        cout<<processStartTime[p]<<"  P"<<p<<"  "<<com<<"  |  ";
        TAT[p]=com-arrivalTime[p];
    }

    cout<<"\n\nProcesses Turn Around Time :"<<endl;
    for(int p:processExeSeq)
    {
        cout<<"P"<<p<<" : "<<TAT[p]<<endl;
    }

    cout<<"\nProcesses Waiting Time :"<<endl;
    for(int p:processExeSeq)
    {
        cout<<"P"<<p<<" : "<<TAT[p]-burstTime[p]<<endl;
    }

    return 0;
}
*/