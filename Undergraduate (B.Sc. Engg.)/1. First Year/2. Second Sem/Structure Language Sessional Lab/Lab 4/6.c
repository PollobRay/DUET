// REverse array

#include<stdio.h>
int main()
{
    int array[100],size,i,temp;
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Input array Elements ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

   for(i=0;i<size/2;i++)
   {
       temp=array[i];
       array[i]=array[size-1-i];
       array[size-1-i]=temp;
    }
    printf("\narray Elements after reverse \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}

