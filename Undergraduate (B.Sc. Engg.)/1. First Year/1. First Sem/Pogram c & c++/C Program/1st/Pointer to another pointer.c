#include<stdio.h>
main()
{
    int a=100;
    int* p;//pointer
    int** p1;//For pointer   Or one star(*) pointer
    p=&a;
    p1=&p;
    printf("Value of a: %d",a);//100
    printf("\nValue of pointer: %d",*p);//100
    printf("\nValue of pointer to pointer: %d",**p1);//100
}
