//
// Created by Ray on 9/28/2022.
//
// solve n queen problem with lc branch and bound method and design a heuristic function that will minimize node generation
/*
#include <iostream>
#include <queue>
using namespace std;

int x[200];
int sol=0;
int numOfNodeGenerate=0;

typedef struct queen
{
    int x;
    int functionValue;
}queen;

class comp{
public:
    bool operator()(queen a,queen b)
    {
        return a.functionValue>b.functionValue;

    }
};

void display(int n)
{
    cout<<"Solution : "<<endl;
    for (int j = 1; j <=n+1 ; ++j)
    {
        cout<<"----";
    }
    for (int k=1; k <=n ; ++k)
    {
        cout<<endl;
        for (int j = 1; j <=n ; ++j)
        {
            if(j==1)
            {
                cout<<"| ";
            }

            if(x[k] != j)
            {
                cout<<"   |";
            }
            else
            {
                cout<<" Q |";
            }
        }
        cout<<endl;
        for (int j = 1; j <=n+1 ; ++j)
        {
            cout<<"----";
        }
    }
    cout<<endl<<endl;
}

int heuristicValueFinder(int k,int i)
{
    int value=0;
    for (int j = 1; j <=k-1 ; ++j)
    {
        if(x[j]==i) //same column
            value++;
        if(abs(x[j]-i)==abs(j-k))// same diagoonal
            value++;
    }
    return value;
}

void NQueen(int k,int n)
{
    priority_queue<queen,vector<queen>,comp> pq;
    queen current;
    for (int i = 1; i <=n ; ++i)
    {
        current.functionValue= heuristicValueFinder(k,i);
        current.x=i;
        pq.push(current);
        if(current.functionValue==0)
        {
            numOfNodeGenerate++;
        }

    }
    while(!pq.empty())
    {
        if(sol>0) //found solution
            break;
        current=pq.top();
        pq.pop();
        if(current.functionValue>0)
        {
            continue;
        }
        x[k]=current.x;

        if(k==n)
        {
            sol++;
            display(n);
            break;
        }
        else
        {
            NQueen(k+1,n);
        }
    }
}

int main()
{
    NQueen(1,16);
    if(sol==0)
        cout<<"No solution found"<<endl;

    cout<<"Number of Node Generated : "<<numOfNodeGenerate<<endl;

    return 0;
}
*/