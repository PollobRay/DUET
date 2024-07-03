//
// Created by Ray on 8/2/2022.
//

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
bool compare(pair<int,int> a,pair<int,int> b)
{
    if(((float)a.first/a.second)>((float)b.first/b.second))
        return true;
    return false;
}
float GreedyKnapsack(vector<pair<int,int>> & pw,vector<float> &x,int m,int n)
{
    sort(pw.begin(),pw.end(), compare); //

    float profit=0;
    int U=m;
    int i;
    for (i = 0; i <n ; ++i)
    {
            if(pw[i].second>U)
                break;
            x[i]=1.0;
            U=U-pw[i].second;
            profit+=pw[i].first;
    }
    if(i<n)
    {
        x[i]=(float)U/pw[i].second;
        profit+=x[i]*pw[i].first;
    }
    return profit;
}
int main()
{

    int n,m;
    float profit;

    cin>>n>>m;

    vector<pair<int,int>> pw(n);
    vector<float> x(n);

    for (int i = 0; i <n ; ++i)
    {
        cin>>pw[i].first;
    }
    for (int i = 0; i <n ; ++i)
    {
        cin>>pw[i].second;
    }

    profit=GreedyKnapsack(pw,x,m,n);

    for (int i = 0; i < n; ++i)
    {
        cout<<x[i]<<" ";

    }
    cout<<"\nProfit :"<<profit<<endl;

    return 0;
}
 */