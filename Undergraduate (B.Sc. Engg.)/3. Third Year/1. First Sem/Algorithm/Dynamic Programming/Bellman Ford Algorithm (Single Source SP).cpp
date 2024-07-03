//
// Created by Ray on 8/23/2022.
//
/*

#include<iostream>
#include<vector>
using namespace std;

void initialize_singple_source(vector<int> &vertices,vector<int> &d,vector<int> &p,int s)
{
    for (int v:vertices)
    {
        d[v]=INT32_MAX;
        p[v]=-1;
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

bool bellman_ford(vector<int> &vertices,vector<vector<int> >&weight,vector<int> &d,vector<int> &p,int s)
{
    initialize_singple_source(vertices,d,p,s);

    for (int i = 1; i <=vertices.size()-1 ; ++i)
    {
        //for each edge
        for (int v:vertices)
        {
            for (int e: findAdjancent(weight,v))
            {
                relax(v,e,weight,d,p);
            }
        }
    }
    for (int v:vertices)
    {
        for (int e: findAdjancent(weight,v))
        {
            if(d[e]>d[v]+weight[v][e])
            {
                cout<<"Contains negative cycle ";
                return false;
            }

        }
    }
    return true;
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

    if(bellman_ford(vertices,weight,d,p,start))
    {
        cout<<start;
        printValue(start,end,p);
        cout<<endl;

        cout<<"Cost : "<<d[end]<<endl;
    }



    return 0;
}
*/
