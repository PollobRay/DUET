// Copyright (c) Ray

//
// Created by Ray on 05-Mar-23.
//
/*
#include <iostream>
#include <vector>
using namespace std;

int selectProcess(int time, vector<int> &AT,vector<int> & BT)
{
    int bt=INT32_MAX;
    int process=-1;
    for (int i = 0; i <AT.size() ; ++i)
    {
        if(time>=AT[i] && (BT[i]!=0 && bt>BT[i]))
        {
            bt=BT[i];
            process=i;
        }
    }
    return process;
}
int main()
{
    int n;

    cout<<"Enter the total Number of Processes :";
    cin>>n;

    vector<int> AT(n,-1);
    vector<int> BT(n,-1);
    vector<int> CT(n,-1);
    vector<int> TAT(n,-1);
    vector<int> WT(n,-1);
    vector<int> BTCopy(n,0);

    cout<<"Enter Arrival time & Brust time"<<endl;
    for (int i = 0; i <n ; ++i)
    {
        cin>>AT[i]>>BT[i];
        BTCopy[i]=BT[i];
    }

    for (int i = 0; ;)
    {
        int process= selectProcess(i,AT,BT);

        if(process==-1)
        {
            i=i+1;
        }
        else
        {
            CT[process]=i+BT[process];
            i=i+BT[process];
            BT[process]=0;
        }

        //checking all taken or not
        int j;
        for (j = 0; j <n ; ++j)
        {
            if(BT[j]!=0)
            {
                break;
            }
        }
        if(j==n)
        {
            break;
        }
    }
    //calculating TAT,WT;

    for (int i = 0; i <n ; ++i)
    {
        TAT[i]=CT[i]-AT[i];
        WT[i]=TAT[i]-BTCopy[i];
    }

    //printing
    cout<<"AT "<<"BT "<<"CT "<<"TAT "<<"WT "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<AT[i]<<" "<<BTCopy[i]<<" "<<CT[i]<<" "<<TAT[i]<<" "<<WT[i]<<endl;
    }

    return 0;
}*/