#include<stdio.h>
int main()
{
    int arr[100],n,i,first;
    printf("Enter the value of the n = ");
    scanf("%d",&n);

    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // cyclically permute technique
    first=arr[0];
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            arr[i]=first;
        else
            arr[i]=arr[i+1];
    }

    printf("Cyclically permuted numbers are given below");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
