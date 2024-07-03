//
// Created by Ray on 7/16/2022.
//
/*
#include<iostream>
#include<set>
#include <vector>
using namespace std;

void make_set(vector<int> &parent,vector<int> &rank)
{
    for(int i=0;i<parent.size();i++)
    {
        parent[i]=i;
        rank[i]=0;
    }
}
int find_set(vector<int> &parent,int x)
{
    if(x!=parent[x])
        parent[x]= find_set(parent,parent[x]);
    return parent[x];
}
void link(vector<int> &parent,vector<int> &rank,int x,int y)
{
    if(rank[x]>rank[y])
        parent[y]=x;
    else
    {
        parent[x]=y;
        if(rank[x]==rank[y])
            rank[y]++;
    }
}
void make_union(vector<int>&parent,vector<int> &rank,int x,int y)
{
    link(parent,rank, find_set(parent,x), find_set(parent,y));
}
vector<pair<int,int> > MSTKruskal(set<pair<int,pair<int,int> > > &G,int vertices) //weight, starting,ending point
{
   vector<pair<int,int> >A;
   vector<int> parent(vertices);
   vector<int>  rank(vertices);

   make_set(parent,rank);

   //sorted

    for (pair<int,pair<int,int> > value:G)
    {
        pair<int,int> edge=value.second;
        if(find_set(parent,edge.first)!= find_set(parent,edge.second))
        {
            A.push_back(edge);
            make_union(parent,rank,edge.first,edge.second);
        }
    }
    return A;
}

int main()
{
    int edges,vertices;
    int s,e,w;
    vector<pair<int,int> >result;
    set<pair<int,pair<int,int> > > G;

    cin>>vertices>>edges;
    for (int i = 0; i <edges ; ++i)
    {
        cin>>s>>e>>w;
        G.insert(make_pair(w, make_pair(s,e))); //so sort by their weight
    }

    result= MSTKruskal(G,vertices);

    for (pair<int,int> edge:result)
    {
        cout<<edge.first<<"  "<<edge.second<<endl;
    }

    return 0;
}

*/