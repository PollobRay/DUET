// Copyright (c) Ray

//
// Created by Ray on 29-Aug-23.
//

/*
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<pair<int,int>> g[1000];
int sum=0;
int  dijkstra(int source,int N)
{
    vector<int> vis(N,0);
    vector<int> dist(N,INT32_MAX);

    multiset<pair<int,int>> st; //weight, node

    st.insert(make_pair(0,source));
    dist[source]=0;

    while(st.size()>0)
    {
        auto node= *st.begin();
        int v=node.second;
        st.erase(st.begin());
        if(vis[v]==1)//visit
            continue;
        vis[v]=1;

        for(auto child:g[v])
        {
            int child_v=child.first;
            int wt=child.second;

            if(dist[v]+wt<dist[child_v] )
            {
                dist[child_v]=dist[v]+wt;
                st.insert(make_pair(dist[child_v],child_v));
                sum+=dist[child_v];
            }
        }

    }
    return sum;
}

int main()
{
    int N=5;
    int city[5][5]={{0, 1, 2, 3, 4},
                  {1, 0, 5, 0, 7},
                  {2, 5, 0, 6, 0},
                  {3, 0, 6, 0, 0},
                  {4, 7, 0, 0, 0}};

    for(int i=0;i<N;i++)
    {
        for (int j = i; j <N ; ++j)
        {
            if(city[i][j]!=0)
            {
                g[i].push_back(make_pair(j,city[i][j]));
            }
        }
    }

    cout<<"Total cost: "<<dijkstra(0,N)<<endl;

    return 0;
}

*/
