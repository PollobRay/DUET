//
// Created by Ray on 8/16/2021.
//
//symetric matrix
#include <stdio.h>

int isSymmetric(int a[][4],int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j]!=a[j][i])
            {
                printf("%d   %d   %d   %d\n",i,j,a[i][j],a[j][i]);
                return 0;
            }
        }
    }

    return 1;
}
/*
int main()
{
    int arr[10][10];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    //printf("%d",isSymmetric(arr,n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j]!=arr[j][i])
            {
                //printf("%d   %d   %d   %d\n",i,j,a[i][j],a[j][i]);
                printf("No\n");
            }
        }
    }
    printf("Yes\n");

    return 0;
}
 */