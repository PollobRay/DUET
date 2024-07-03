//
// Created by Ray on 10/11/2022.
//

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edge;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge.push_back({u,v,w});
    }

    int source;
    cin>>source;
    vector<int>dis(n);
    for(int i=0;i<n;i++) dis[i]=INT_MAX;

    dis[source]=0;
    for(int it=0;it<n-1;it++){
        for(auto e:edge){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            dis[v]=min(dis[v],dis[u]+w);
        }
    }
    cout<<"vertex\t\tdistance\n";
    for(int i=0;i<n;i++){

        cout<<i<<"\t\t"<<dis[i]<<endl;
    }

}
*/