
//
// Created by Ray on 1/1/2022.
//

#include<iostream>
#include <cmath>
#include <fstream>
/*
using namespace std;

void calc(float M[][21],int m,float r[],float r1[])
{
    float sum=0;

    for (int j = 1; j <=m; ++j)
    {
        sum=M[j][m+1]; //d(j,m+1)

        for (int k = 1; k <=m ; ++k)
        {
            if(k==j)
                continue;
            sum=sum-M[j][k]*r1[k];
        }
        r[j]=sum/M[j][j];
    }
}

bool isFindRoot(float r[],float r1[],float e,int m)
{
    for (int i = 1; i <=m ; ++i)
    {
        if(abs(r1[i]-r[i])>e)
            return false;
    }
    return true;
}

bool isApplicableJacobiMethod(float M[][21],int m)
{
    float sum;

    for (int i = 1; i <=m; ++i)
    {
        sum=0;
        for (int j = 1; j <=m ; ++j)
        {
            if(j==i)
                continue;
            sum=sum+abs(M[i][j]);
        }

        if(abs(M[i][i])<=sum)
        {
            return false;
        }
    }
    return true;
}

void printRoots(float r[],int m)
{
    for (int i = 1; i <=m ; ++i)
    {
        cout<<"X"<<i<<" : "<<r[i]<<endl;
    }
    cout<<endl<<endl;
}

int  main()
{
    float Mat[20][21];
    float root[20],root1[20];
    float e;
    int m=0;

    fstream file("C:\\Users\\Ray\\CLionProjects\\DUET\\Academic\\2nd Year\\2nd Semester\\Numerical Method\\input.txt");


    file>>m;

    //from file
    for (int i = 1; i <=m; ++i)
    {
        for (int j = 1; j <=m+1 ; ++j)
        {
            file>>Mat[i][j];
        }
        root1[i]=0; //initially set to zero
    }
    file.close();

    if(!isApplicableJacobiMethod(Mat,m))
    {
        cout<<"These equation can not solve using Jacobi method\n";
        exit(1);
    }
    cout<<"Enter error : ";
    cin>>e;


    for (int i = 1; i <=1000 ; ++i)
    {
        calc(Mat,m,root,root1);

        cout<<"Iteration :"<<i<<endl;
        printRoots(root,m);

        if(isFindRoot(root,root1,e,m))
            break;
        copy(root,root+m+1,root1);
    }

    cout<<"Roots are: \n";
    for (int i = 1; i <=m ; ++i)
    {
        cout<<"X["<<i<<"] : "<<root[i]<<endl;
    }

    return 0;
}

*/