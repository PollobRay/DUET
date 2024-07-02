#include<stdio.h>

int main()
{
    int mat[10][10],transMat[10][10],i,j,row,column;

    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&column);

    printf("Input elements of the matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d],[%d] :",i,j);
            scanf("%d",&mat[i][j]);

            //process of transpose
            transMat[j][i]=mat[i][j];
        }
    }

    printf("\nThe matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose of the matrix is :\n");
    // swap column and row no for transpose matrix
    column=column+row;
    row=column-row;
    column=column-row;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",transMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
