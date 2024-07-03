/*
//
// Created by pollo on 5/21/2021.
//

#include<stdio.h>

int main()
{
    int n,m,i,j,count=0;
    n=100;
    m=200;
    for (i = n; i <=m ; ++i)
    {
        for (j = 2; j <i ; ++j)
        {
            if (i%j==0)
                break;
        }
        if (i==j)
        {
            printf("%d ",i);
            count++;
        }
        if (count==5)
        {
            printf("\n");
            count=0;
        }
    }

    return 0;
}*/
