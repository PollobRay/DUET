//
// Created by Ray on 8/9/2022.
//
/*
#include<iostream>
#include<vector>
using namespace std;

int n;
int m;
int G[30][30];
int x[30];
int sol=0;

void NextValue(int k)
{
    while(true)
    {
       x[k]=(x[k]+1)%(m+1);
       if(x[k]==0)
           return;
       int j;
        for ( j = 1; j <=n ; ++j)
        {
            if(G[k][j]==1&&(x[k]==x[j]))
            {
                break;
            }
        }
        if(j==n+1)
            return;
    }
}
void printColor()
{
    cout<<"Solution "<<++sol<<endl<<endl;
    for (int i = 1; i <=n ; ++i)
    {
        cout<<"Vertix : "<<i<<" Color : "<<x[i]<<endl;
    }
    cout<<endl<<endl;
}
void mColoring(int k)
{
    while(true)
    {
        NextValue(k);
        if(x[k]==0)
            return;
        if(k==n)
            printColor();
        else
            mColoring(k+1);
    }
}

int main()
{
    int edge;
    cin>>n>>m;
    cin>>edge;

    for (int i = 1; i <=edge; ++i)
    {
        int s,e;
        cin>>s>>e;

        G[s][e]=1;
        G[e][s]=1;
    }
    mColoring(1);

    if(sol==0)
        cout<<"Not coloring possible with "<<m<<" color"<<endl;

    return 0;
}
*/