#include<stdio.h>
main()
{
    int sub[2][3],i,j,sum=0;
    printf("Enter 6 Values:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&sub[i][j]);
        }
    }
    printf("Values are\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",sub[i][j]);
        }
        printf("\n");
    }
}
