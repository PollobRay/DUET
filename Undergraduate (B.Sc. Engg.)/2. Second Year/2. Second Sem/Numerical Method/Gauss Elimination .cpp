//
// Created by Ray on 12/27/2021.
//

#include<iostream>
using namespace std;

/*
void printMatrix(float mat[][20],int m)
{
    for (int i = 1; i <=m ; ++i)
    {
        for (int j = 1; j <=m+1 ; ++j)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{

    float A[20][20];
    float roots[20];
    int m;

    cin>>m;

    for (int i = 1; i <=m ; ++i)
    {
        for (int j = 1; j <=m+1 ; ++j)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Printing Matrix...\n";
    printMatrix(A,m);

   for (int i = 1; i <m ; ++i)
    {
        for (int j = i+1; j <=m ; ++j)
        {
            float ratio = A[j][i]/A[i][i];

            for (int k = 1; k <=m+1 ; ++k)
            {
              A[j][k]=A[j][k]-(ratio*A[i][k]);
            }

        }
    }

   cout<<"\nAfter Forward Elimination\n";
    printMatrix(A,m);

    roots[m] = A[m][m+1]/A[m][m];

    for(int i=m-1;i>=1;i--)
    {
        roots[i] = A[i][m + 1];
        for (int j = i + 1; j <= m; j++) {
            roots[i] = roots[i] - A[i][j] * roots[j];
        }
        roots[i] = roots[i] / A[i][i];
    }

    cout<<"\nPrinting Roots .... \n";

    for (int i = 1; i <=m ; ++i)
    {
        cout<<"X ["<<i<<"] :"<<roots[i]<<endl;
    }

    return 0;
}
*/