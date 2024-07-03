//
// Created by Ray on 10/11/2022.
//
/*
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sorttechnique(pair<int,int> a,pair<int,int>b)
{
    if((float)a.first/a.second>(float)b.first/b.second)
        return true;
    return false;
}
int main()
{
    int n,m,u;
    int i;
    float profit=0;
    cin>>n>>m;
    vector<float> x(n+1);
    vector<pair<int,int> >knap(n+1);

    for (i = 1; i <= n; ++i)
    {
        cin>>knap[i].first>>knap[i].second;
    }
    sort(knap.begin()+1,knap.end(), sorttechnique);

    u=m;
    for (i = 1; i <=n ; ++i)
    {
        if(knap[i].second>u)
            break;
        x[i]=1.0;
        u=u-knap[i].second;
        profit+=knap[i].first;
    }
    if(i<=n)
    {
        x[i]=(float)u/knap[i].second;
        profit+=x[i]*knap[i].first;
    }
    cout<<"Profit: "<<profit<<endl;
    for (int j = 1; j <=n ; ++j)
    {
        cout<<x[j]<<" ";
    }

    return 0;
}
*/