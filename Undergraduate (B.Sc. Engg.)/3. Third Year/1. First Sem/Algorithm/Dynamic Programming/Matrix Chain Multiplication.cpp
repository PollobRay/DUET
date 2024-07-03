//
// Created by Ray on 8/23/2022.
//
/*
#include<iostream>
#include<vector>
using namespace std;

int M[50][50];
int S[50][50];

int operation=0;

void Matrix_Chain_order(vector<int> p)
{
    int n=p.size()-1;

    for(int i=1;i<=n;i++)
    {
        M[i][i]=0;
    }
    for(int l=2;l<=n;l++)
    {
        for(int i=1;i<=n-l+1;i++)
        {
            int j=i+l-1;
            M[i][j]=INT32_MAX;

            for(int k=i;k<=j-1;k++)
            {
                int q=M[i][k]+M[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(q<M[i][j])
                {

                    M[i][j]=q;

                    S[i][j]=k;
                }
            }
        }
    }
}

void Print_Optimal_Parens(int i,int j)
{
    if(i==j)
    {
        cout<<" A"<<i<<" ";
    }
    else
    {
        cout<<"(";
        Print_Optimal_Parens(i,S[i][j]);
        Print_Optimal_Parens(S[i][j]+1,j);
        cout<<")";
    }
}

int main()
{
    int mat;
    cout<<"Enter number of Matrixes :";
    cin>>mat;
    vector<int> p(mat+1);
    cout<<"Enter " <<mat+1<<" Dimension "<<endl;
    for(int i=0;i<mat+1;i++)
    {
        cin>>p[i];
    }
    Matrix_Chain_order(p);
    cout<<"Optimal Operation is : "<<endl;
    Print_Optimal_Parens(1,p.size()-1);
    cout<<endl;

    return 0;
}
*/