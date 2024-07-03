//
// Created by Ray on 8/14/2021.
//

#include <stdio.h>

int arr[20];
int size;

void insertItem(int d,int n)
{
    int temp1,temp2;

    for (int i = 0; i <=size ; ++i)
    {
        if (n<=i)
        {
            temp2=arr[i];
            arr[i]=temp1;
            temp1=temp2;
        }
        if (n==i+1)
        {
            temp1=arr[i];
            arr[i]=d;
        }
    }

    size++;
}

/*
int main()
{
    int d,n;

    scanf("%d",&size);

    for (int i = 0; i <size ; ++i)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    scanf("%d %d",&d,&n);

    insertItem(d,n);

    for (int i = 0; i < size; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
 */