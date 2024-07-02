#include<stdio.h>
int main()
{
    int i,j,array[100],size,temp;
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Input array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(array[j+1]>array[j])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }

    printf("elements after sort in descending order\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
