#include<stdio.h>
void disp(int arg[5],int s);
main()
{
    int arg[5],i;
    printf("Enter five values :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arg[i]);
    }

    disp(arg,5);
}

void disp( int arg[5],int s)
{

    int i;
    printf("Element are \n");
    for(i=0;i<s;i++)
    {

    printf("\t %d",arg[i]);
}
}
