// Delete array specific location data

#include<stdio.h>

int main()
{
    int array[100],size,i,loc;
    printf("Enter Array size: ");
    scanf("%d",&size);

    printf("Input array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Location: ");
    scanf("%d",&loc);

    if(loc>0&&loc<=size)
    {
        for(i=0;i<size-1;i++)
        {
            if(loc<=i+1)
                array[i]=array[i+1];
        }
        array[i]=-1;//insert negative value in the last location of the array
        size--;//decrease size by 1
    }
    else
        printf("Delete not possible");


    printf("\nElements after delete\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",array[i]);
    }
    return 0;
}


