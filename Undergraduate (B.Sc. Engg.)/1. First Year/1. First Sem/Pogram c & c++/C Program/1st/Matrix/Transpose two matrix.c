#include<stdio.h>
main()
{
    int mat[3][3],trans[3][3],i,j;
    printf("Enter elsement of array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nTranspose matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
}
}
