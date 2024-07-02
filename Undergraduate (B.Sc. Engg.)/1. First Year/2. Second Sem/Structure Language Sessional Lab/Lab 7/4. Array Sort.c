#include<stdio.h>

int main()
{
    int ar[20],i,j,n,temp;
    int *p1;
    p1=ar;

    printf("Enter length of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);

    printf("\nPrinting array element...\n");

    for(i=0;i<n;i++)
        printf("%d ",ar[i]);


    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {

            if(*(p1+i)> *(p1+j))
            {
                temp= *(p1+i);
                *(p1+i)= *(p1+j);
                *(p1+j)=temp;
            }


        }
    }
    printf("\nAfter sort \n");
    for(i=0;i<n;i++)
        printf("%d ",*(p1+i));

    return 0;
}
