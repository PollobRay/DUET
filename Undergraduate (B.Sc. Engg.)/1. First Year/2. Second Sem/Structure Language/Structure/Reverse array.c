//
// Created by Ray on 8/14/2021.
//

#include <stdio.h>

int arr[20];

void reverse1(int n)
{
    for (int i = 0; i <n/2 ; ++i)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

void reverse2(int n)
{
    int temp,i,j;
    for (i = 0,j=n-1; i <n/2 ; ++i,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

/*
int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 0; i <n ; ++i)
    {
       scanf("%d",&arr[i]);
    }

    reverse1(n);

    for (int i = 0; i <n ; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    reverse2(n);

    for (int i = 0; i <n ; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
 */