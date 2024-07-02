#include<stdio.h>
#define f1(a,b) a+b
main()
{
    printf("%d",f1(2,3)*f1(2,3));//11
    /*
    f1(2,3)*f1(2,3)
    2+3*2+3
    2+6+3
    11


    */
}
