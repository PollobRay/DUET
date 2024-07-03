//
// Created by Ray on 8/15/2021.
//

#include <stdio.h>
/*
int main()
{
    int arr[10][10]={0},sum=0,n;

    scanf("%d",&n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    //sum of row
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n+1; ++j)
        {
            if (j<n)
                sum+=arr[i][j];
            else
                arr[i][j]=sum;
        }
        sum=0;
    }

    //sum of column
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n+1; ++j)
        {
            if (j<n)
                sum+=arr[j][i];
            else
                arr[j][i]=sum;
        }
        sum=0;
    }

    //printing
    printf("\n\n");
    for (int i = 0; i < n+1; ++i)
    {
        for (int j = 0; j <n+1 ; ++j)
        {
            if (i==n&&n==j)
                continue;
            printf("%4d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 */