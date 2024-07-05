// Copyright (c) Ray

//
// Created by Ray on 14-Mar-23.
//

/*

#include <iostream>
#include <map>
#include <queue>
#include <iomanip>
using namespace std;

string getString(deque<char> &q)
{
    string s=" ";
    for(char c:q)
    {
        s.push_back(c);
    }
    return s;
}

int main()
{
    map<char,int> hash;
    hash.insert({'i',0});
    hash.insert({'*',1});
    hash.insert({'+',2});
    hash.insert({'$',3});

    map<int,char> relHash;
    relHash.insert({1,'>'});
    relHash.insert({2,'<'});

    int precedenceTable[4][4]={
            {0,1,1,1},
            {2,1,1,1},
            {2,2,1,1},
            {2,2,2,0}
    }; // 1 means .>  ,    2 means <.

    deque<char> stackSymbol;
    deque<char> inputSymbol;
    deque<char>stackSign;
    stackSymbol.push_back('$');
    stackSign.push_back('$');

    inputSymbol.push_back('i');
    inputSymbol.push_back('+');
    inputSymbol.push_back('i');
    inputSymbol.push_back('*');
    inputSymbol.push_back('i');
    inputSymbol.push_back('$');

    cout<<setw(15)<<"Stack"<<setw(10)<<"relation"<<setw(15)<<"input"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;

    while(true)
    {
        cout<<setw(15)<<getString(stackSymbol)<<setw(10)<<relHash[precedenceTable[hash[stackSign.back()]][hash[inputSymbol.front()]]]<<setw(15)<<getString(inputSymbol)<<endl;

        if(relHash[precedenceTable[hash[stackSign.back()]][hash[inputSymbol.front()]]]=='<')//shift
        {
            stackSymbol.push_back(inputSymbol.front());
            if(inputSymbol.front()=='i' || inputSymbol.front()=='+' || inputSymbol.front()=='*')
                stackSign.push_back(inputSymbol.front());
            inputSymbol.pop_front();
        }
        else if(relHash[precedenceTable[hash[stackSign.back()]][hash[inputSymbol.front()]]]=='>') //reduce
        {
            if(stackSign.back()=='i')
            {
                stackSymbol.pop_back();
                stackSymbol.push_back('E');
                stackSign.pop_back();
            }
            else //reduce 3
            {
                stackSign.pop_back();
                stackSymbol.pop_back();
                stackSymbol.pop_back();
            }
        }
        else // Error
        {
            break;
        }
    }

    if((stackSign.size()==1 &&stackSign.back()=='$')&&(inputSymbol.size()==1&& inputSymbol.back()=='$'))
        cout<<"\n\nAccepted"<<endl;

    return 0;
}

 */