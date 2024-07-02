#include<stdio.h>
int main()
{
    int a,b,c,d;
    FILE *fptr;
    fptr=fopen("test1.txt","w");
    if(fptr!=NULL)
    {
        printf("Enter two integer values: ");
        scanf("%d %d",&a,&b);

        fprintf(fptr,"%d %d\n",a,b);
        printf("\nSuccessfully written");
    }
    fclose(fptr);

    fptr=fopen("test1.txt","r");

    if(fptr!=NULL)
    {
        fscanf(fptr,"%d %d",&c,&d);// same as write
        printf("\nYour entered value is: %d %d",c,d);
    }
    fclose(fptr);

    return 0;
}
