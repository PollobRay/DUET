//
// Created by Ray on 7/2/2022.
//
/*
#include<iostream>
#include<set>
#include<vector>
using namespace std;

int greedyAlgorithm(vector<int> fruits,int x)
{
    set<pair<int,int> >fruitsList;// cost, order
    vector<int> takenOrder(fruits.size()+1); // to store total number of element store
    int TotalCost=0;
    for(int i=0;i<fruits.size();i++)
    {
        fruitsList.insert(make_pair(fruits[i],i+1));
    }
    set<pair<int,int> >::iterator it;
    it=fruitsList.begin();
    cout<<"Sorted Order"<<endl;
    for(;it!=fruitsList.end();it++)
    {
        cout<<"Cost :  "<<(*it).first<<"  Position: "<<(*it).second<<endl;
    }
    cout<<endl<<endl;;
    it=fruitsList.begin();
    for(int i=1;i<=x;i++)
    {
        if(i>2)
        {
            it=fruitsList.begin();
        }
        TotalCost+=(*it).first;
        takenOrder[(*it).second]=takenOrder[(*it).second]+1;
        it++;
    }

    cout<<"\nFruits Taken with order: "<<endl;
    for(int i=1;i<takenOrder.size();i++)
    {
        cout<<i<<" : "<<takenOrder[i]<<endl;
    }
    cout<<endl;
    return TotalCost;
}
int main()
{
    int X,A,B,C,T;
    vector<int> cost;
    cin>>T;

    for(int i=1;i<=T;i++)
    {

        cin>>X>>A>>B>>C;
        cost.push_back(A);
        cost.push_back(B);
        cost.push_back(C);
        cout<<endl;
        cout<<greedyAlgorithm(cost,X)<<endl<<endl;

        cost.clear(); // delete all element of vector
    }

    return 0;
}
*/

