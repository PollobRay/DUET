#include<stdio.h>
main()
{
    int arr[5],i,total=0;
    int* p;
    printf("Enter 5 value :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;//or  p=arr[0] b  same address
    printf("\nElement are :");
    for(i=0;i<5;i++)
    {
        printf("\n%d",*p);
        total=total+ *p;
        p++;
    }
    printf("Toatal are: %d",total);
    }
