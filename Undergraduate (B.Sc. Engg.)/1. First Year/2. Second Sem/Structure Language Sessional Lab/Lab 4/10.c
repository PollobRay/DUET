
#include<stdio.h>
int main()
{
    int array1[10][10],array2[10][10],mat[10][10];
    int row1,column1,row2,column2,row,column,i,j,k,sum=0;

    printf("Enter Matrix1 Rows:");
    scanf("%d",&row1);
    printf("Enter Matrix1 columns:");
    scanf("%d",&column1);
     printf("Enter Matrix 1 elements: \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }

    printf("\nEnter Matrix2 Rows:");
    scanf("%d",&row2);
    printf("Enter Matrix2 columns:");
    scanf("%d",&column2);
    printf("Enter Matrix 2 elements: \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }


    if(column1==row2)
    {
        row=row1;
        column=column2;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<column2;j++)
            {
                for(k=0;k<column1;k++)
                {
                    sum+=array1[i][k]*array2[k][j];
                }
            mat[i][j]=sum;
            sum=0;
            }

        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
        exit(0);
    }


    printf("\nMatrix 1 is: \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("%4d",array1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 is: \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%4d",array2[i][j]);
        }
        printf("\n");
    }

    printf("\nmultiplication result \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%4d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
