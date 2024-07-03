//
// Created by Ray on 10/11/2022.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class job
{
public:
    int jobNo;
    int profit;
    int deadline;
};

bool sortTechnique(job j1,job j2)
{
    if(j1.profit>=j2.profit)
        return true;
    return false;
}

int main()
{
    int n;

    cin>>n;

    vector<job>jobs(n);
    vector<int>jSequence(n+1,0);
    int totalProfit=0;

    for (int i = 0; i <n ; ++i)
    {
        cin>>jobs[i].profit>>jobs[i].deadline;
        jobs[i].jobNo=i+1;
    }

    sort(jobs.begin(),jobs.end(), sortTechnique);

    for (int i = 0; i <n ; ++i)
    {
        int profit=jobs[i].profit;
        int jobNo=jobs[i].jobNo;
        int deadline=jobs[i].deadline;

        for (int j = deadline; j >=1 ; j--)
        {
            if(jSequence[j]==0)
            {
                jSequence[j]=jobNo;
                totalProfit+=profit;
                break;
            }
        }
    }

    cout<<totalProfit<<endl;

    for (int i = 1; i <=n; ++i)
    {
        cout<<jSequence[i]<<" ";
    }


    return 0;
}
 */