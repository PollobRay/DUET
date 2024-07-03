//
// Created by Ray on 8/15/2021.
//

#include <stdio.h>

void insertItem1(int arr[],int n,int d)
{
    int firstpos=0,find=0;

    for (int i = 0; i < n; ++i)
    {
        if (d<=arr[i])
        {
            firstpos=i;
            find=1;
            break;
        }
    }

    if (find==1)
    {
        for (int i = n; i >=firstpos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[firstpos]=d;
    }
    else
        arr[n]=d;

    find=0;
}

void show(int arr[],int n)
{
    printf("\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ",arr[i]);
    }
}

/*
int main()
{
    int arr[100],n=0,d,limit=0;

    scanf("%d",&n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&d);

        insertItem1(arr,limit++,d);

        show(arr,limit);
    }

    return 0;
}
 */