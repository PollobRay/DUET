#include<stdio.h>

void sortArray(int arr[],int size)
{
    int i,j,temp;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int a[100],b[100],mergeArr[200],n1,n2,n,i,j,k;
    printf("Enter size of 1st array: ");
    scanf("%d",&n1);

    printf("Enter %d element for 1st array:\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of 2nd array: ");
    scanf("%d",&n2);

    printf("Enter %d element for 2nd array:\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    //sort array
    sortArray(a,n1);
    sortArray(b,n2);

    n=n1+n2;// merge array size
    for(i=0,j=0,k=0;i<n;i++)
    {
        if(j<n1&&k<n2)
        {
            if(a[j]<b[k])
                mergeArr[i]=a[j++];

            else if(a[j]>b[k])
                mergeArr[i]=b[k++];

            else //when two elements are equal
                mergeArr[i]=a[j++];
        }
        else if(j+1>n1)
            mergeArr[i]=b[k++];

        else if(k+1>n2)
            mergeArr[i]=a[j++];
    }

    printf("Merge array elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",mergeArr[i]);
    }
    return 0;
}
