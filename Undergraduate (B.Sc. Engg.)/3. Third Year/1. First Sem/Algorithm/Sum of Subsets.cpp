//
// Created by Ray on 7/26/2022.
//

#include<iostream>
using namespace std;
/*
int w[50]; // values of universe set
int x[50]; // indicates that x[i] i'th elment is taken or not
int n;// total number of element;
int m; // sum needed

void printSet(int k)
{
    for (int i = 1; i <=k ; ++i)
    {
        if(x[i]==1) //if i'th element is taken then print i'th element
            cout<<w[i]<<" ";
    }
    cout<<endl;
}
void sum(int s,int k,int r)//taken set sum, k'th element, remining set summation
{
    x[k]=1; // k'th element is taken

    if(s+w[k]==m) //if sum is equal to desired with taken k'th element
    {
        printSet(k);

    }
    else if(s+w[k]+w[k+1]<=m) //is sum with taken k'th and (k+1)'th elememnt is equal or less than m
    {
        sum(s+w[k],k+1,r-w[k]);
    }

    if(s+r-w[k]>=m && s+w[k+1]<=m)// if ignore k'th element and there is still chance to make m
    {
        x[k]=0; // ignore k'th elemenet
        sum(s,k+1,r-w[k]);
    }


}

int main()
{
    w[0]=0;
    w[1]=5;
    w[2]=7;
    w[3]=10;
    w[4]=12;
    w[5]=15;
    w[6]=18;
    w[7]=20;
    n=7;
    m=35;

    sum(0,1,87);

    return 0;
}
*/