//
// Created by Ray on 8/23/2022.
//
/*
#include<iostream>
using namespace std;

int C[50][50];
int B[50][50];


void LCS_Length(string X,string Y)
{
    int m=X.length();
    int n=Y.length();

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
                C[i][j]=0;
            else if(X.at(i-1)==Y.at(j-1))
             {
                C[i][j]=C[i-1][j-1]+1;
                B[i][j]=1;
             }
            else if(C[i-1][j]>=C[i][j-1])
            {
                C[i][j]=C[i-1][j];
                B[i][j]=3;
            }
            else
            {
                C[i][j]=C[i][j-1];
                B[i][j]=2;
            }

        }
    }
}

void Print_LCS(string X,int i,int j)
{
    if(i==0||j==0)
       return;
    if(B[i][j]==1)
    {
        Print_LCS(X,i-1,j-1);
        cout<<X.at(i-1);
    }
    else if(B[i][j]==3)
    {
        Print_LCS(X,i-1,j);
    }
    else
        Print_LCS(X,i,j-1);
}

int main()
{

    string X;//="ABCDEFG";
    string Y;//="XZACKDFWGH";

    cout<<"Enter 1st String : ";
    cin>>X;
    cout<<"Enter 2nd String : ";
    cin>>Y;


    LCS_Length(X,Y);
    cout<<"\nLongest Common Subsequence length is : "<<C[X.length()][Y.length()]<<endl<<endl;

    cout<<"Longest common Subsequence is : ";
    Print_LCS(X,X.length(),Y.length());

    cout<<endl<<endl;

    return 0;
}
*/