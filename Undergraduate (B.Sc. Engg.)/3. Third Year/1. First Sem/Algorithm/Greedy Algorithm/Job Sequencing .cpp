//
// Created by Ray on 8/2/2022.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
    if(a.first.first>b.first.first) //sort by profit
        return true;

    return false;
}
void Jobsequencing(vector<pair<pair<int,int>,int>> job) //profit, deadline, no
{
    sort(job.begin(),job.end(), compare);
    vector<int> S(job.size()+1,0);

    int profit=0;

    for (int i = 0; i < job.size(); ++i)
    {
        int deadline=job[i].first.second;
        int jobno=job[i].second;
        for (int j = deadline; j >0 ; j--)
        {
            if(S[j]==0)
            {
                S[j]=jobno;
                profit+=job[i].first.first;
                break;
            }
        }
    }
    cout<<"Total Profits: "<<profit<<endl;

    for (int i=1;i<S.size();i++)
    {
        cout<<S[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;

    cin>>n;

    vector<pair<pair<int,int>,int>> job(n);


    for (int i = 0; i <n ; ++i)
    {
        cin>>job[i].first.first>>job[i].first.second;
        job[i].second=i+1;
    }

    Jobsequencing(job);

    return 0;
}

*/