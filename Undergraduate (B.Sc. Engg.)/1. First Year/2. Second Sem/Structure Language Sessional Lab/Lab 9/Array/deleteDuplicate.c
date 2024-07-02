// delete duplicate value of array
#include<stdio.h>
void deleteData(int ar[],int len,int position);
int main()
{
    int arr[20],i,j,n,k,t=0;

    printf("Enter array length:");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            /* If any duplicate found */
            if(arr[i] == arr[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k<n; k++)
                {
                    arr[k] = arr[k + 1];
                }

                /* Decrement size after removing duplicate element */
                n--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }

    printf("\nAfter remove duplicate");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}


void deleteData(int ar[],int len,int loc)
{
    int i,j;
    printf("\nloc=% d=%d",loc,len);
    if(loc-1==len)
        ar[loc-1]=-1;

    for(i=0;i<len-1;i++)
        {
            if(loc<=i+1)
                ar[i]=ar[i+1];
        }
    ar[i]=-1;
}
