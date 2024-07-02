//insert element in shorted array
#include<stdio.h>

int main()
{
    int arr[100],n,i,d,temp1,temp2,find=0;
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("\nEnter element of array:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter data to insert to array: ");
    scanf("%d",&d);

    for(i=0;i<n;i++)
    {

        if(d<=arr[i])
        {
            if(find==0)
            {
                temp1=arr[i];
                arr[i]=d;
            }

            temp2=arr[i+1];
            arr[i+1]=temp1;
            temp1=temp2;
            find++;
        }

    }
    n++;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
