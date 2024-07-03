//
// Created by Ray on 8/2/2022.
//
/*
#include<iostream>
using namespace std;

int w[50];
int x[50];
int m;

void printSubset(int k)
{
    for (int i = 1; i <=k ; ++i)
    {
        if(x[i]==1)
            cout<<w[i]<<" ";
    }
    cout<<endl;
}

void sumOfSubset(int s,int k,int r)
{
    x[k]=1; //taken

    if(s+w[k]==m)
    {
        printSubset(k);
    }
    else if(s+w[k]+w[k+1]<=m)
    {
        sumOfSubset(s+w[k],k+1,r-w[k]);
    }

    if(s+r-w[k]>=m && s+w[k+1]<=m)
    {
        x[k]=0;
        sumOfSubset(s,k+1,r-w[k]);
    }
}

int main()
{
    int n;
    int sum=0;

    cin>>n>>m;

    for (int i = 1; i <= n; ++i)
    {
        cin>>w[i];
        sum+=w[i];
    }

    sumOfSubset(0,1,sum);

    return 0;
}
*/