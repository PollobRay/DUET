#include<stdio.h>
int fun();
main()
{
    while(fun());//4 3 2 1
}
int fun()
{
   static int x=4;
    printf("%d ",x);
    return(--x);
}
