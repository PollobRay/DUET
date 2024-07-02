#include<stdio.h>
int main()
{
    int array[100],size,i,min,max;
    printf("Enter size of array: ");
    scanf("%d",&size);

    min=999999;// initial maximum value
    max=-999999;// initial minimum value

    printf("Input array Elements ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];
    }
    printf("\nLargest value= %d",max);
    printf("\nSmallest value= %d",min);

    return 0;
}
