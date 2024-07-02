#include<stdio.h>
int main()
{

    int n;
    FILE *fptr;

    printf("Enter integer values\n");

    fptr=fopen("test6.txt","w");

    if(fptr==NULL)
        return 0;//same as exit(0)

    do{
        scanf("%d",&n);
        if(n!=-1)
            putw(n,fptr);

    }while(n!=-1);
    fclose(fptr);

    fptr=fopen("test6.txt","r");
    if(fptr==NULL)
        return; // same as return 0;

    printf("\nPrinting integer values from file\n");

    while((n=getw(fptr))!=EOF)
    {
        printf("%d ",n);
    }
    fclose(fptr);

    return 0;
}
