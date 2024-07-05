// Copyright (c) Ray

//
// Created by Ray on 06-Mar-23.
//
/*
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int totalProcess,totalResources;

    cout<<"Enter Total Processes : ";
    cin>>totalProcess;
    cout<<"Enter Total Resources : ";
    cin>>totalResources;

    vector<int> Resources(totalResources);
    vector<int> MAX_NEED[100];
    vector<int> ALLOCATED_RES[100];
    vector<int> CURRENT_NEED[100];
    vector<int> AVAILABLE_RES[100];
    vector<int> takenList(totalProcess,0);
    vector<int> sequence;

    cout<<"Enter total each Resources "<<endl;
    for(int i=0;i<totalResources;i++)
    {
        cout<<"R"<<i+1<<" : ";
        cin>>Resources[i];
    }

    cout<<"Enter MAX Need & Allocated Resource"<<endl;
    for (int i = 0; i <totalProcess ; ++i)
    {
         cout<<"Process P"<<i<<endl;
        for (int j = 0; j <totalResources ; ++j)
        {
            int v;
            cin>>v;
            MAX_NEED[i].push_back(v);
        }
        for (int j = 0; j <totalResources ; ++j)
        {
            int v;
            cin>>v;
            ALLOCATED_RES[i].push_back(v);
        }

    }

    //calculating current need
    for (int i = 0; i <totalProcess ; ++i)
    {

        for (int j = 0; j <totalResources ; ++j)
        {
             CURRENT_NEED[i].push_back(MAX_NEED[i][j]-ALLOCATED_RES[i][j]);
        }
    }

    //calculating Available
    for (int i = 0; i < totalResources; ++i)
    {
        int sum=0;
        for (int j = 0; j <totalProcess ; ++j)
        {
            sum+=ALLOCATED_RES[j][i];
        }
        AVAILABLE_RES[0].push_back(Resources[i]-sum);
    }

    //printing
    cout<<setw(10)<<"Process"<<setw(20)<<"MAX Need"<<setw(20)<<"Allocated"<<setw(20)<<"Current Need"<<setw(20)<<"Available"<<endl;
    for (int i = 0; i <totalProcess ; ++i)
    {
        string p="P";
        p.push_back(i+'0');

        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<MAX_NEED[i][j]<<" ";
        }
        cout<<setw(10)<<" ";

        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<ALLOCATED_RES[i][j]<<" ";
        }
        cout<<setw(10)<<" ";
        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<AVAILABLE_RES[0][j]<<" ";
        }
        cout<<setw(10)<<" ";
        cout<<endl;
    }

    //selecting Processes
    int curAvail=0;
    int processNo=0;
    bool up=true;
    for(int times=0;times<=3*totalProcess;times++)
    {
        processNo=times%totalProcess;
        if(takenList[processNo]==1)
            continue;

        int j;
        for(j=0;j<totalResources;j++)
        {
            if(CURRENT_NEED[processNo][j]>AVAILABLE_RES[curAvail][j])
                break;
        }
        if(j==totalResources) //satisfy
        {
            takenList[processNo]=1;
            sequence.push_back(processNo);

            for (int k = 0; k <totalResources ; ++k)
            {
                AVAILABLE_RES[curAvail+1].push_back(AVAILABLE_RES[curAvail][k]+ALLOCATED_RES[processNo][k]);
            }
            curAvail=curAvail+1;
        }
        if(sequence.size()==totalProcess)
            break;

    }

    //printing
    cout<<setw(10)<<"Process"<<setw(20)<<"MAX Need"<<setw(20)<<"Allocated"<<setw(20)<<"Current Need"<<setw(20)<<"Available"<<endl;
    for (int i = 0; i <totalProcess ; ++i)
    {
        string p="P";
        p.push_back(i+'0');

        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<MAX_NEED[i][j]<<" ";
        }
        cout<<setw(10)<<" ";

        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<ALLOCATED_RES[i][j]<<" ";
        }
        cout<<setw(10)<<" ";
        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<CURRENT_NEED[i][j]<<" ";
        }
        cout<<setw(10)<<" ";

        for (int j = 0; j <totalResources ; ++j)
        {
            cout<<AVAILABLE_RES[i][j]<<" ";
        }
        cout<<setw(10)<<" ";
        cout<<endl;
    }

    cout<<endl<<"Printing Sequence "<<endl;
    for (int i :sequence)
    {
        cout<<"P"<<i<<" -> ";
    }
    cout<<endl;


    return 0;
}*/