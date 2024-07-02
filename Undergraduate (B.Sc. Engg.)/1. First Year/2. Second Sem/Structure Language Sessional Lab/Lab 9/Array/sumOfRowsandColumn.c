// sum of rows and column and store in the array
/* n=2
    1 2
    3 4

    o/p:
    1 2   3
    3 4   7

    4 6
*/
#include<stdio.h>
int main()
{
    int arr[10][10]={0},i,j,sum1=0,n;
    printf("Enter length of an square array: ");
    scanf("%d",&n);
    printf("\nEnter elements of a %d x %d array\n",n,n);
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&arr[i][j]);
        }
        //sum of rows
     for(i=0;i<n;i++)
      {
          for(j=0;j<n+1;j++)
        {
            if(j<n)
              sum1+=arr[i][j];
            else
                arr[i][j]=sum1;
        }
        sum1=0;
      }
      for(i=0;i<n;i++)
      {
          for(j=0;j<n+1;j++)
        {
            if(j<n)
             sum1+=arr[j][i];
           else
               arr[j][i]=sum1;
        }
        sum1=0;
      }
//printing
     for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==n&&j==n)
                    continue;
                printf("%4d",arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}
