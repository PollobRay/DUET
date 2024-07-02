//insert element
#include<stdio.h>

int main()
{
    int array[100],size,i,loc,d,temp1=0,temp2=0;
    printf("Enter Array size: ");
    scanf("%d",&size);

    printf("Input array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Location: ");
    scanf("%d",&loc);
    printf("Data: ");
    scanf("%d",&d);

    if(loc>0&&loc<=size)
    {
        for(i=0;i<=size;i++)
        {

            if(loc<=i)
            {
                temp2=array[i];
                array[i]=temp1;
                temp1=temp2;
            }
            if(loc==i+1)
            {
               temp1=array[i];
               array[i]=d;
            }

        }
        size++;
    }
    else
        printf("insert not possible");

    printf("\nElements after insert\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",array[i]);
    }

    return 0;
}



