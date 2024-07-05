// Copyright (c) Ray

//
// Created by Ray on 08-Jan-23.
//

/*
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

bool isAllocable(int need[],int avl[],int res)
{
    for(int i=1;i<=res;i++)
    {
        if(avl[i-1]<need[i-1])
            return false;
    }

    return true;
}
int main()
{
    int process,resource;
    process=5;
    resource=4;

    int allocated[][10]={
            {0,0,1,2},
            {2,0,0,0},
            {1,1,3,4},
            {2,3,5,4},
            {0,3,3,2}
    };
    int maxNeed[][10]={
            {0,0,1,2},
            {2,7,5,8},
            {6,6,5,6},
            {4,3,5,6},
            {0,6,5,2}
    };
    int available[10][10]={
            {1,0,0,0}
    };
    int currentNeed[10][10];

    vector<int> resultSequence;
    vector<int> isTaken(process);


    //calculating need
    for(int i=1;i<=process;i++)
    {
        for(int j=1;j<=resource;j++)
        {
            currentNeed[i-1][j-1]=maxNeed[i-1][j-1]-allocated[i-1][j-1];
        }
    }


    int currentAvlPtr=0;
    int currentPos=0;
    for(int i=1;i<=(2*process);i++)
    {
        if(!isTaken[currentPos] && isAllocable(currentNeed[currentPos],available[currentAvlPtr],resource))
        {
            currentAvlPtr++;

            //update Avl
            for(int j=1;j<=resource;j++)
            {
                available[currentAvlPtr][j-1]=available[currentAvlPtr-1][j-1]+allocated[currentPos][j-1];
            }
            resultSequence.push_back(currentPos);
            isTaken[currentPos]=1;

        }
        if(i<process)
        {
            currentPos++;
        }
        else
        {
            currentPos--;
        }
    }
    for(int i=1;i<=process;i++)
    {
        if(!isTaken[i-1] && isAllocable(currentNeed[i-1],available[currentAvlPtr],resource))
        {
            currentAvlPtr++;
            //update Avl
            for(int j=1;j<=resource;j++)
            {
                available[currentAvlPtr][j-1]=available[currentAvlPtr-1][j-1]+allocated[i-1][j-1];
            }
            resultSequence.push_back(i-1);
            isTaken[i-1]=1;
        }
    }
    cout<<"\n  Process  "<<"Max Need     "<<"Allocation      "<<"Current Need    "<<"Available"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;

    for(int i=1;i<=process;i++)
    {
        cout<<"  P"<<i<<" "<<setw(7);
        //printing max need
        for(int j=1;j<=resource;j++)
        {
            cout<<maxNeed[i-1][j-1]<<" ";
        }
        cout<<setw(6);
        //printing allocated
        for(int j=1;j<=resource;j++)
        {
            cout<<allocated[i-1][j-1]<<" ";
        }
        cout<<setw(10);
        //printing current Nedd
        for(int j=1;j<=resource;j++)
        {
            cout<<currentNeed[i-1][j-1]<<" ";
        }
        cout<<setw(8)<<" ";
        //printing available
        for(int j=1;j<=resource;j++)
        {
            cout<<available[i-1][j-1]<<" ";
        }

        cout<<endl;

    }

    if(resultSequence.size()==process)
    {
        cout<<"\n   The System is in Safe state"<<endl;

        cout<<"\n\n  Process Execution Sequence "<<endl<<"  ";
        for(int a:resultSequence)
            cout<<"P"<<a+1<<" -> ";
        cout<<endl;
    }
    else
    {
        cout<<"\n   The System is in Unsafe state"<<endl;
        cout<<"\n\n Safe Process Sequence "<<endl<<"  ";
        for(int a:resultSequence)
            cout<<"P"<<a+1<<" -> ";
    }

    return 0;
}
*/