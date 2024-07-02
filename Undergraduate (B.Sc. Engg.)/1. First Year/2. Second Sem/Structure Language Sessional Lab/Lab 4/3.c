#include<stdio.h>

int main()
{
    int array[100],size,i,sum=0;
    float average;

    printf("Enter Array size: ");
    scanf("%d",&size);

    printf("Input array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }

    average=(float)sum/size;

    printf("\nAverage value of Elements: %.2f",average);
    return 0;
}

