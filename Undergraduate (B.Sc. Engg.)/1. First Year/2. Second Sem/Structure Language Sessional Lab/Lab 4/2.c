#include<stdio.h>

int main()
{
    int array[100],size,i,sum=0;
    printf("Enter Array size: ");
    scanf("%d",&size);

    printf("Input array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }

    printf("\nSummation of Elements: %d",sum);
    return 0;
}

