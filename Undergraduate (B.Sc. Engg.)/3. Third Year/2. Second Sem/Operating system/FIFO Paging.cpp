// Copyright (c) Ray

//
// Created by Ray on 12-Feb-23.
//

/*
#include <iostream>
#include <vector>
using namespace std;

int getFreePosition(vector<int> &page,int res)
{
    for (int i = 0; i <page.size() ; ++i)
    {
        if(page[i]==res)
            return i;
        if(page[i]==-1)
            return i;
    }

    return -1; //Miss & page is full
}

int main()
{
    int n,pageSize;
    int totalHit=0,totalMiss=0;

    cout<<"Number of resource strings :";
    cin>>n;

    vector<int> resourceStr(n);

    cout<<"Enter "<<n<<" Resource Strings :";
    for (int i = 0; i <n ; ++i)
    {
          cin>>resourceStr[i];
    }

    cout<<"Page Size :";
    cin>>pageSize;

    vector<int> page(pageSize,-1);
    int pagePtr=0;



    for (int i = 0; i <n ; ++i)
    {
        cout<<"For "<<resourceStr[i]<<endl;
        int pos=getFreePosition(page,resourceStr[i]);
        string pStatus="";
       if(pos==-1) //full ,have to replace
       {
           page[pagePtr]=resourceStr[i];
           totalMiss++;
           pagePtr=(pagePtr+1)%pageSize;
           pStatus="Miss";
       }
       else if(page[pos]==resourceStr[i]) //hit
       {
           totalHit++;
           pStatus="Hit";
       }
       else //miss, but no need to replace
       {
           page[pos]=resourceStr[i];
           totalMiss++;
           pStatus="Miss";
       }

        for (int j = 0; j <pageSize ; ++j)
        {
            if(page[j]==-1)
                break;
            cout<<page[j]<<"  ";
        }
        cout<<pStatus<<endl<<endl;
    }

    cout<<"Total Hit :"<<totalHit<<endl;
    cout<<"Total Miss :"<<totalMiss<<endl;

    return 0;
}*/
