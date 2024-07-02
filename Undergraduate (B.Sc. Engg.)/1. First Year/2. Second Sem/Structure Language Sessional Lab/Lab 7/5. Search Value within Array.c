#include<stdio.h>

int main()
{
    int ar[20],n,i=0,v;
    printf("Enter length of the array: ");
    scanf("%d",&n);

    printf("Enter array element \n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("\nEnter a value to search: ");
    scanf("%d",&v);

    for(i=0;i<n;i++)
    {
        if(ar[i]==v)
            break;
    }
    if(i==0 || i==n)
        printf("\nThe array not contain the value");
    else
        printf("the value %d is in the array index: %d",v,i);

    return 0;
}
