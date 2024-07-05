// Copyright (c) Ray

//
// Created by Ray on 05-Aug-23.
//

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N=8,i=2,j=1,k;
    int AT[1000]={0,0,10,15,35,30,10,5,5};
    int ST[1000]={0,20,15,10,5,15,15,10,10};
    int CAT[1000]={0},WT[1000],IDT[1000]={0},QL[1000]={0};
    int CDT[1000]={0};
    for(int m=2;m<=N;m++){
        CAT[m]=CAT[m-1]+AT[m];
    }
    int NAT,NDT,CLK,DIF;
    NAT=CAT[2],NDT=ST[1],CDT[1]=ST[1],CLK=0;
    while(1)
    {
        if(i>N){
            CLK=NDT;
            CDT[j+1]=CDT[j]+ST[j+1];
            NDT=CDT[j+1];
            j++;
        }
        else{
            DIF=NAT-NDT;
            if(DIF<0){
                CLK=NAT;
                NAT=CAT[i+1];
                QL[i]=i-j;
                i++;
                continue;
            }
            if(DIF>0){
                if(i-j > 1){
                    CLK=NDT;
                    CDT[j+1]=CDT[j]+ST[j+1];
                    NDT=CDT[j+1];
                    j++;
                }
                else{
                    IDT[i]=DIF;
                    CLK=NAT;
                    NAT=CAT[i+1];
                    CDT[j+1]=CAT[i]+ST[j+1];
                    NDT=CDT[j+1];
                    j++,i++;
                }
            }
            else if(DIF==0){
                QL[i]=QL[i-1];
                CLK=NAT;
                NAT=CAT[i+1];
                CDT[j+1]=CAT[i]+ST[j+1];
                NDT=CDT[j+1];
                j++;i++;
            }
        }
        if(j>=N) break;

    }
    cout<<"Cumulative Departure time : ";
    for(int m=1;m<=N;m++){
        cout<<CDT[m]<<" ";
    }
    cout<<endl;
    cout<<"Queue length after each arrival : ";
    for(int m=1;m<=N;m++){
        cout<<QL[m]<<" ";
    }
    cout<<endl;
    cout<<"Idle time : ";
    for(int m=1;m<=N;m++){
        cout<<IDT[m]<<" ";
    }
    cout<<endl;

}*/
