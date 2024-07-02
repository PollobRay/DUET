#include<stdio.h>
int main()
{
    int arr[100],n,i,j,t=0,element;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&arr[i]);
    }

    printf("The unique elements found in the array are:\n");
    for(i=0;i<n;i++)
    {
        element=arr[i];
        for(j=0;j<n;j++)
        {
            if(element==arr[j])
                t++;
        }
        if(t==1)
            printf("%d ",element);
        t=0;
    }

    return 0;
}
