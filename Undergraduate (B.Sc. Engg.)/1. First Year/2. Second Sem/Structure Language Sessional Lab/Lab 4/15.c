#include<stdio.h>
int main()
{
    int arr[100],n,i,j,k,t=0;
    int singleValue[100],n1=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);

    for(i=0,k=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&arr[i]);

        //insert single value
        for(j=0;j<n1;j++)
        {
            if(singleValue[j]==arr[i])
                t++;
        }
        if(t==0)
        {
            singleValue[k++]=arr[i];
            n1++;
        }
        t=0;

    }

    printf("\nThe frequency of all elements of an array :");
    for(j=0;j<n1;j++)
    {
        for(i=0;i<n;i++)
        {
            if(singleValue[j]==arr[i])
                t++;
        }
        printf("\n%d occurs %d times",singleValue[j],t);
        t=0;
    }

    return 0;
}
