// Copyright (c) Ray

//
// Created by Ray on 25-Dec-22.
//
/*
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int T;
    string sequence;
    int length;

    cin>>T; //test case

    for (int i = 1; i <=T ; ++i)
    {
        cin>>sequence; // circular sequence

        set<string> storage;

        //finding length of sequence
        for (length=0;sequence[length]!='\0';length++);

        //forming sequence using various start position
        for (int start = 0; start < length; ++start)
        {
            int pos=start;
            string str;
            for (int j = 0; j < length; ++j)
            {
                str.push_back(sequence.at(pos));
                pos=(pos+1)%length; //for circular properties
            }

            storage.insert(str);
        }

        cout<<*(storage.begin())<<endl; //set's first item

    }


    return 0;
}
 */
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    string str;

    cin>>t;

    while(t--)
    {
        cin>>str;

        vector<string> vec;

        for (int i = 0; i <str.length() ; ++i)
        {
            int point=i;
            string temp;

            for (int j = 0; j < str.length(); ++j)
            {
                   temp.push_back(str.at(point));
                   point=(point+1)%str.length();
            }
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end());

        cout<<vec[0]<<endl;
    }



    return 0;
}
 */