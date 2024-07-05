// Copyright (c) Ray

//
// Created by Ray on 17-Jan-23.
//
/*
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    string re;
    vector<string> aIp;
    vector<string> bIp;
    vector<string> eIp;

    cin>>re;

    if(re.at(1)=='*')
    {
        if(re.size()==2) //loop
        {
            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("1");
            if (re.at(0) == 'a') // a
            {
                aIp.push_back("2");
                bIp.push_back("-");
            }
            else //b
            {
                bIp.push_back("2");
                aIp.push_back("2");
            }
            eIp.push_back("2");

            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("1, 3");

            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("-");


        }
        else
        {
            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("1");

            if(re.at(0)=='a')
            {
                aIp.push_back("2");
                bIp.push_back("-");
            }
            else
            {
                bIp.push_back("2");
                aIp.push_back("-");
            }
            eIp.push_back("-");

            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("3");

            if(re.at(2)=='a')
            {
                aIp.push_back("4");
                bIp.push_back("-");
            }
            else
            {
                bIp.push_back("4");
                aIp.push_back("-");
            }
            eIp.push_back("-");

            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("5");

            aIp.push_back("-");
            bIp.push_back("-");
            eIp.push_back("-");


        }
    }
    else // |
    {
        aIp.push_back("-");
        bIp.push_back("-");
        eIp.push_back("1, 3");

        if(re.at(0)=='a')
        {
            aIp.push_back("2");
            bIp.push_back("-");
        }
        else // b
        {
            bIp.push_back("2");
            aIp.push_back("-");
        }
        eIp.push_back("-");

        aIp.push_back("-");
        bIp.push_back("-");
        eIp.push_back("5");

        if(re.at(2)=='a')
        {
            aIp.push_back("4");
            bIp.push_back("-");
        }
        else // b
        {
            bIp.push_back("4");
            aIp.push_back("-");
        }
        eIp.push_back("-");

        aIp.push_back("-");
        bIp.push_back("-");
        eIp.push_back("5");

        aIp.push_back("-");
        bIp.push_back("-");
        eIp.push_back("-");
    }

    cout<<setw(10)<<" "<<setw(10)<<"a"<<setw(10)<<"b"<<setw(10)<<"e"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    for (int i = 0; i < aIp.size(); ++i)
    {
        cout<<setw(10)<<i<<setw(10)<<aIp[i]<<setw(10)<<bIp[i]<<setw(10)<<eIp[i]<<endl;

    }



    return 0;
}
*/