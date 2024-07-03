//
// Created by Ray on 7/22/2022.
//
/*
#include <iostream>
#include <vector>
#include<set>
#include <iomanip>
using namespace std;

void JobScheduling()
{
    int noOfJob;
    int profit,deadline;
    multiset<pair<int,pair<int,int> > >jobs; // -profit, deadline, job no
    int totalProfit=0;

    cout<<"Total no of jobs: ";
    cin>>noOfJob;

    vector<int> takenList(noOfJob+1); //initialize with zero

    //input
    for (int i = 1; i <=noOfJob ; ++i)
    {
        cin>>deadline>>profit;

        pair<int,int> pd= make_pair(deadline,i); //deadline, job no
        profit=profit*(-1); //making negative
        pair<int,pair<int,int> > job= make_pair(profit,pd); // profit ,deadline, no of job
        jobs.insert(job);
    }
    //output
    cout<<setw(10)<<"Job No"<<setw(10)<<"Deadline"<<setw(10)<<"Profit"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    for (pair<int,pair<int,int> > j:jobs)
    {
        int profit=j.first*(-1);
        pair<int,int> p=j.second;
        int deadline=p.first;
        int jobNo=p.second;

        for (int i = deadline; i >=1 ; i--)
        {
            if(takenList[i]==0)
            {
                cout<<setw(10)<<jobNo<<setw(10)<<deadline<<setw(10)<<profit<<endl<<endl;
                takenList[i]=jobNo;
                totalProfit+=profit;
                break;
            }
        }
    }
    cout<<"Total Profits : "<<totalProfit<<endl;
}

int main()
{
    JobScheduling();

    return 0;
}
*/