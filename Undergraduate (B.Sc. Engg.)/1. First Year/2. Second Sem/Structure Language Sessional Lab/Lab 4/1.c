#include<stdio.h>

int main()
{
    int array[100],size,i;
    printf("Enter Array size: ");
    scanf("%d",&size);

    printf("Input array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Array elements :\n");
   for(i=0;i<size;i++)
    {
        printf("%d  ",array[i]);
    }
    return 0;
}
