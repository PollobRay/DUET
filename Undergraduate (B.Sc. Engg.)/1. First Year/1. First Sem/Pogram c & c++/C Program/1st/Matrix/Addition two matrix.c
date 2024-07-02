#include<stdio.h>
main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
    printf("Enter the value of Frist matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
     printf("\nEnter the value of Second matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);

        }

    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nAddition of two matrix\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }


    }
