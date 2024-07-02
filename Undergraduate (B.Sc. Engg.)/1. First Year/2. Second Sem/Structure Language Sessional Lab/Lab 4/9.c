#include<stdio.h>
int main()
{
    int array[10][10],row,column,i,j;
    printf("Enter Rows:");
    scanf("%d",&row);
    printf("Enter Columns:");
    scanf("%d",&column);

    printf("Enter array elements: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("\nArray elements: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%3d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
