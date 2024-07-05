// Copyright (c) Ray

//
// Created by Ray on 19-Mar-23.
//
/*
#include <iostream>
#include <vector>
using namespace std;

void printTrans(vector<int> aTrans[100],vector<int> bTrans[100],vector<int> eTrans[100],int startT,int endT)
{
    cout<<"   a     |         b          |         e       "<<endl;
    for (int i = startT; i <=endT ; ++i)
    {
        if(aTrans[i].size()==0)
        {
            cout<<"    ";
        }
        for (int j :aTrans[i])
        {
            cout<<j<<" ";
        }
        cout<<" | ";

        if(bTrans[i].size()==0)
        {
            cout<<"    ";
        }
        for (int j :bTrans[i])
        {
            cout<<j<<" ";
        }
        cout<<" | ";

        if(eTrans[i].size()==0)
        {
            cout<<"    ";
        }
        for (int j :eTrans[i])
        {
            cout<<j<<" ";
        }
        cout<<" | ";
        cout<<endl;
    }
}

void makePlusTrans(vector<int> aTrans[100],vector<int> bTrans[100],vector<int> eTrans[100],char symbol1,char symbol2,int &startT,int &endTrans)
{
    int posS=startT+1;
    int postTS=posS+1;
    if(symbol1=='a')
    {
        aTrans[postTS].push_back(++postTS);
    }
    else
    {
        bTrans[postTS].push_back(++postTS);
    }
    if(symbol2=='a')
    {
        aTrans[++postTS].push_back(++postTS);
    }
    else
    {
        bTrans[++postTS].push_back(++postTS);
    }

    //assign to start
    eTrans[posS].push_back(posS+1);
    eTrans[posS].push_back(postTS-1);
    //assign to the end
    eTrans[posS+2].push_back(postTS+1);
    eTrans[postTS].push_back(postTS+1);

    startT=posS;
    endTrans=postTS+1;
}

void makeDotTrans(vector<int> aTrans[100],vector<int> bTrans[100],vector<int> eTrans[100],char symbol1,char symbol2,int &startT,int &endTrans)
{
    int posS=startT+1;
    int postTS=posS+1;
    startT=posS;
    if(symbol1=='a')
    {
        aTrans[posS++].push_back(postTS++);
    }
    else
    {
        bTrans[posS++].push_back(postTS++);
    }

    eTrans[posS++].push_back(postTS++);

    if(symbol2=='a')
    {
        aTrans[posS++].push_back(postTS);
    }
    else
    {
        bTrans[posS++].push_back(postTS);
    }

    endTrans=postTS;
}

void makeRepeatTrans(vector<int> eTrans[100],int &startT,int &endTrans)
{
    eTrans[startT].push_back(endTrans);
    eTrans[endTrans].push_back(startT);
}
int main()
{
    vector<int> aTransition[100];
    vector<int> bTransition[100];
    vector<int> eTransition[100];

    int currentTransition=0;
    int startTransition=0;
    int endTransition=0;
    int prevTransition=0;



    prevTransition=currentTransition;
    makeDotTrans(aTransition,bTransition,eTransition,'a','b',currentTransition,endTransition);
    eTransition[prevTransition].push_back(currentTransition);
    eTransition[endTransition].push_back(++endTransition);
    prevTransition=currentTransition;
    currentTransition=endTransition;

    printTrans(aTransition,bTransition,eTransition,startTransition,endTransition);

    cout<<endl<<endl;

    makeRepeatTrans(eTransition,prevTransition,currentTransition);
    printTrans(aTransition,bTransition,eTransition,startTransition,endTransition);




    return 0;
}
*/