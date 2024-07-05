// Copyright (c) Ray

//
// Created by Ray on 05-Mar-23.
//

/*
#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int timeQuantum;

    cout<<"Enter Number of Processes : ";
    cin>>n;

    cout<<"Enter Time Quantum : ";
    cin>>timeQuantum;

    vector<int> AT(n);
    vector<int> BT(n);
    vector<int> BTCopy(n);
    vector<int> CT(n);
    vector<int> TAT(n);
    vector<int> WT(n);
    deque<int> ReadyQueue;

    cout<<"Enter Arrival Time & Burst Time"<<endl;
    for (int i = 0; i <n ; ++i)
    {
        cin>>AT[i]>>BT[i];
        BTCopy[i]=BT[i];
        if(AT[i]==0)
            ReadyQueue.push_back(i);
    }

    for(int time=0; ;)
    {
        int process=-1;

        if(ReadyQueue.empty())
        {
            for (int i = 0; i < n; ++i)
            {
                if(AT[i]==time)
                    ReadyQueue.push_back(i);
            }
        }

        //still empty
        if(ReadyQueue.empty())
        {
            time=time+1;
        }
        else
        {
            process=ReadyQueue.front();
            ReadyQueue.pop_front();

            int slice=min(BT[process],timeQuantum);

            BT[process]=BT[process]-slice;
            CT[process]=time+slice;

            for (int i = 0; i <n ; ++i)
            {
                for (int j = time+1; j <time+slice ; ++j)
                {
                    if(AT[i]==j)
                        ReadyQueue.push_back(i);
                }
            }
            time=time+slice;
        }
        for (int i = 0; i <n ; ++i)
        {
            if(AT[i]==time)
                ReadyQueue.push_back(i);
        }
        if(process!=-1 && BT[process]!=0)
            ReadyQueue.push_back(process);

        // Breaking the loop
        int i;
        for (i = 0; i <n ; ++i)
        {
            if(BT[i]!=0)
                break;
        }
        if(i==n)
            break;
    }


    //calculating TAT & WT
    cout<<setw(10)<<"AT"<<setw(10)<<"BT"<<setw(10)<<"TAT"<<setw(10)<<"WT"<<endl;
    for (int i = 0; i < n; ++i)
    {
        TAT[i]=CT[i]-AT[i];
        WT[i]=TAT[i]-BTCopy[i];
        cout<<setw(10)<<AT[i]<<setw(10)<<BTCopy[i]<<setw(10)<<TAT[i]<<setw(10)<<WT[i]<<endl;
    }



    return 0;
}

 */