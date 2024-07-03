//
// Created by Ray on 8/15/2021.
//

#include<stdio.h>

void boubleSort(int arr[],int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <n-i-1 ; ++j)
        {
            if (arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

/*
int main()
{
    int arr[10],n;

    scanf("%d",&n);

    for (int i = 0; i <n ; ++i)
    {
        scanf("%d",&arr[i]);
    }

    boubleSort(arr,n);

    for (int i = 0; i < n; ++i)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

 */