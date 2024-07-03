//
// Created by Ray on 8/23/2022.
//
/*
#include<iostream>
#include<vector>
#include <set>
using namespace std;

void initialize_singple_source(vector<int> &vertices,vector<int> &d,vector<int> &p,int s)
{
    for (int v:vertices)
    {
        d[v]=INT32_MAX;
        p[v]=NULL;
    }
    d[s]=0;
}

void relax(int u,int v,vector<vector<int> >&weight,vector<int> &d,vector<int> &p)
{
    if(d[v]>d[u]+weight[u][v])
    {
        d[v]=d[u]+weight[u][v];
        p[v]=u;
    }
}

int findsMin(set<int> &Q,vector<int> &d)
{
    int pos=-1;
    int cost=INT32_MAX;
    for (int v:Q)
    {
        if(cost>d[v])
        {
            cost=d[v];
            pos=v;
        }
    }
    return pos;
}

vector<int> findAdjancent(vector<vector<int> >&weight,int u)
{
    vector<int> adj;
    for (int i = 0; i < weight[u].size(); ++i)
    {
        if(weight[u][i]!=0)
            adj.push_back(i);
    }
    return adj;
}

void printValue(int s,int e,vector<int> &p)
{
    if(s==e)
    {
        return;
    }
    printValue(s,p[e],p);
    cout<<" -> "<<e;
}

void dijkstra(vector<int> &vertices,vector<vector<int> >&weight,vector<int> &d,vector<int> &p,int s)
{
    initialize_singple_source(vertices,d,p,s);

    set<int>Q(vertices.begin(),vertices.end());

    while(!Q.empty())
    {
        int u= findsMin(Q,d);
        Q.erase(u);

        for (int v : findAdjancent(weight,u))
        {
            relax(u,v,weight,d,p);
        }
    }
}

int main()
{
    int verticesNumber;
    int directedEdgeList;
    int start;
    int end;
    int w;


    cout<<"Vertices Number: ";
    cin>>verticesNumber;

    cout<<"Directed list: ";
    cin>>directedEdgeList;

    vector<int> vertices(verticesNumber);
    vector<int> d(verticesNumber);
    vector<int> p(verticesNumber);

    for (int i = 0; i <verticesNumber ; ++i)
    {
        vertices[i]=i;
    }

    vector<vector<int> >weight(verticesNumber);

    for (int i = 0; i < verticesNumber; ++i)
    {
        for (int j = 0; j < verticesNumber; ++j)
        {
            weight[i].push_back(0);
        }
    }

    cout<<"Enter "<<directedEdgeList<<" edge weight: \n";
    cout<<"Start end weight\n";

    for (int i = 0; i < directedEdgeList; ++i)
    {
        cin>>start>>end>>w;

        weight[start][end]=w;
    }

    cout<<"Starting vertix: ";
    cin>>start;
    cout<<"End Vertix :";
    cin>>end;

    dijkstra(vertices,weight,d,p,start);

    cout<<start;
    printValue(start,end,p);
    cout<<endl;

    cout<<"Cost : "<<d[end]<<endl;

    return 0;
}
*/