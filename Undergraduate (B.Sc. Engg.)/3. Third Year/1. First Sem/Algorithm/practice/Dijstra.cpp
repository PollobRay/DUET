//
// Created by Ray on 10/11/2022.
//
/*
#include <bits/stdc++.h>
#define N 6
using namespace std;

int findMin(int distance[N],bool visited[N])
{
    int minimum=INT_MAX;
    int min_vx;
    for(int i=0;i<N;i++){
        if(visited[i]==false && distance[i]<=minimum)
        {
            minimum=distance[i];
            min_vx=i;
        }
    }
    return min_vx;
}
void DijstraAlgo(int graph[N][N],int source)
{
    int distance[N];
    bool visited[N];
    for(int i=0;i<N;i++){
        distance[i]=INT_MAX;
        visited[i]=false;
    }
    distance[source]=0;
    for(int i=0;i<N;i++){
        int m= findMin(distance,visited);
        visited[m]=true;
        for(int k=0;k<N;k++){
            if(!visited[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k])
                distance[k]=distance[m]+graph[m][k];
        }

    }
    cout<<"Vertex"<<"\t\t"<<"distance from source\n";
    cout<<"--------------------------------------------------"<<endl;
    for(int i=0;i<N;i++){
        char ch=i+65;
        if(distance[i]==INT_MAX)
            cout<<ch<<"\t\t"<<"Not Possible"<<endl;
        else cout<<ch<<"\t\t"<<distance[i]<<endl;
    }
}
int main()
{
    int source;
    cout<<"Enter the source : ";
    cin>>source;
    cout<<endl;
    int graph[N][N]={
            {0,2,4,0,0,0},
            {0,0,1,4,2,0},
            {0,0,0,0,3,0},
            {0,0,0,0,0,2},
            {0,0,0,3,0,2},
            {0,0,0,0,0,0}
    };
    DijstraAlgo(graph,source);
}
 */