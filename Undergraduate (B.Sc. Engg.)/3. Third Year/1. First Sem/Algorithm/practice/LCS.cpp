//
// Created by Ray on 10/11/2022.
//
/*
#include<iostream>
using namespace std;

int C[100][100];
int B[100][100];

void LCS_LENGTH(string X,string Y)
{
    int m=X.length();
    int n=Y.length();

    for (int i = 1; i <=m ; ++i)
    {
        C[i][0]=0;
    }
    for (int i = 1; i <=n ; ++i)
    {
        C[0][i]=0;
    }
    for (int i = 1; i <=m ; ++i)
    {
        for (int j = 1; j <=n ; ++j)
        {
            if(X.at(i-1)==Y.at(j-1))
            {
                C[i][j]=C[i-1][j-1]+1;
                B[i][j]=1;
            }
            else if(C[i-1][j]>=C[i][j-1])
            {
                C[i][j]=C[i-1][j];
                B[i][j]=2;
            }
            else
            {
                C[i][j]=C[i][j-1];
                B[i][j]=3;
            }
        }
    }
}

void print_LCS(string X,int i,int j)
{
    if(i==0||j==0)
        return;

    if(B[i][j]==1)
    {
        print_LCS(X,i-1,j-1);
        cout<<X.at(i-1)<<" ";
    }
    else if(B[i][j]==2)
    {
        print_LCS(X,i-1,j);
    }
    else
        print_LCS(X,i,j-1);
}

int main()
{
    string X;
    string Y;

    cin>>X;
    cin>>Y;

    LCS_LENGTH(X,Y);
    print_LCS(X,X.length(),Y.length());

    return 0;
}
*/