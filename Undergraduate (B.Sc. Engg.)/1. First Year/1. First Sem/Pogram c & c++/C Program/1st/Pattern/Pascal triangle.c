#include<stdio.h>
main()
{
    int row,cal,space,n,no;
    printf("Enter the Number of row:");
    scanf("%d",&no);
    for(row=0;row<no;row++)
    {
        for(space=0;space<(no-row);space++)
        {
            printf(" ");
        }
        n=1;
        for(cal=0;cal<=row;cal++)
        {
            printf("%d ",n);
            n=n*(row-cal)/(cal+1);// Main Logic
        }
        printf("\n");
    }
}
