//
// Created by Ray on 10/11/2022.
//
/*
#include<iostream>
using namespace std;

int x[200];
int solution;

bool place(int k,int i)
{
    for (int j = 1; j <=k-1 ; ++j)
    {
        if(x[j]==i || (abs(x[j]-i)==abs(j-k)))
            return false;
    }
    return true;
}
void display(int n)
{
    solution++;
    cout<<"Solution no : "<<solution<<endl;
    for (int i = 1; i <=n ; ++i)
    {
        for (int j = 1; j <=n ; ++j)
        {
            if(x[i]==j)
                cout<<" Q |";
            else
                cout<<"   |";
        }
        cout<<endl;
    }
}
void NQueen(int k,int n)
{
    for (int i = 1; i <=n ; ++i)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                display(n);
            }
            else
            {
                NQueen(k+1,n);
            }

        }
    }
}

int main()
{
    NQueen(1,5);


    return 0;
}
 */