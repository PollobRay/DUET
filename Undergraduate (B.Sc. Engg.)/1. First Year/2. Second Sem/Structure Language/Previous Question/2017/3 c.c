//
// Created by Ray on 8/16/2021.
//
// find largest from array
#include <stdio.h>

int findLargest(int ar[],int n)
{
    int largest=-99999;
    for (int i = 0; i < n; ++i)
    {
        if (ar[i]>largest)
            largest=ar[i];
    }
    return largest;
}
/*
int main()
{
    int ar[]={10,5,6,50,8};
    printf("%d",findLargest(ar,5));

    return 0;
}
 */