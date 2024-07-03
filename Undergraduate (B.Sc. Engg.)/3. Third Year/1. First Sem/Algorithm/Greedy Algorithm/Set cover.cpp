//
// Created by Ray on 8/2/2022.
//
/*
#include<iostream>
#include<vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> GreedySetCover(vector<int> X,vector<set<int>> S)
{
    set<int> U(X.begin(),X.end());
    set<int> C;

    vector<int> setCoverIndex;

    while(!U.empty())
    {
        //finding set that cover most
        int setNo=0;
        int maxElmt=0;
        set<int> dummy;
        for (int i = 0; i < S.size(); ++i)
        {
            dummy.clear();
            set_difference(S[i].begin(), S[i].end(), C.begin(), C.end(),inserter(dummy, dummy.end()));
            if (maxElmt<dummy.size())
            {
                maxElmt=dummy.size();
                setNo=i;
            }
        }

        for (int a:S[setNo]) // C = C U S
        {
            C.insert(a);
            U.erase(a); // U = U - {Si}
        }
        setCoverIndex.push_back(setNo+1);
    }

    return setCoverIndex;
}
int main()
{
   vector<set<int>>S {{1,2,3},{2,4},{3,4},{4,5}};
   vector<int> x={1,2,3,4,5};

   vector<int> index=GreedySetCover(x,S);

    for (int i :index)
    {
        cout<<i<<endl;
    }

    return 0;
}
*/