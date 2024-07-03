//
// Created by Ray on 8/2/2022.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeSet(vector<int> &r,vector<int> &p)
{
    for (int i = 0; i < p.size(); ++i)
    {
        p[i]=i;
        r[i]=0;
    }
}

int findSet(int x,vector<int> &p)
{
    if(x!=p[x])
        p[x]= findSet(p[x],p);
    return p[x];
}

void link(int x,int y,vector<int> &r,vector<int> &p)
{
    if(r[x]>r[y])
        p[y]=x;
    else
    {
        p[x]=y;
        if(r[x]==r[y])
            r[y]++;
    }
}

void unionE(int x,int y,vector<int> &r,vector<int> &p)
{
    link(findSet(x,p), findSet(y,p),r,p);
}

bool compare(pair<pair<int,int>,int>a, pair<pair<int,int>,int>b)
{
    if(a.second<=b.second)
        return true;
    return false;
}

vector<pair<int,int>> MSTKruskal(vector<pair<pair<int,int>,int>> &G) //start,end, weight
{
    vector<pair<int,int>> A;
    vector<int> parent(G.size());
    vector<int> rank(G.size());

    makeSet(rank,parent);

    sort(G.begin(),G.end(), compare);

    for (int i=0;i<G.size();i++)
    {
        pair<int,int>edge=G[i].first;

        if(findSet(edge.first,parent)!= findSet(edge.second,parent))
        {
            A.push_back({edge.first,edge.second});
            unionE(edge.first,edge.second,rank,parent);
        }
    }

    //finding root
    int maxR=-1;
    int root=0;
    for (int i=0;i<rank.size();i++)
    {
        if(maxR<rank[i])
        {
            root=i;
            maxR=rank[i];
        }
    }
    cout<<"Root : "<<root<<endl;

    return A;
}

int main()
{
    int edges;

    cin>>edges;

    vector<pair<pair<int,int>,int>> G(edges);

    for (int i = 0; i < edges; ++i)
    {
        cin>>G[i].first.first>>G[i].first.second>>G[i].second;   //starting, ending, weight
    }

    vector<pair<int,int>> result= MSTKruskal(G);

    for (int i = 0; i < result.size(); ++i)
    {
        cout<<result[i].first<<" "<<result[i].second<<endl;
    }

    return 0;
}

 */