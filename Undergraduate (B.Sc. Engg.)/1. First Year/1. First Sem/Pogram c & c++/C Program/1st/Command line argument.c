#include<stdio.h>
main(int argc,char *argv[])
{
    int i;
    printf("Number of Argument : %d",argc);
    for(i=1;i<=argc;i++)
    {
        printf("Argument %d=%s",i,argv[i]);
    }
}
