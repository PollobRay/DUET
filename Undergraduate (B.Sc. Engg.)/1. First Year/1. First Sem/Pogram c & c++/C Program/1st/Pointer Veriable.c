#include<stdio.h>
main()
{
    int a=100;
    int* p;
    p=&a;
    printf("%d",a);//Print Value
    printf("\n%d",*p);//Print pointer veriable Value
    printf("\n%p",&a);//Print veriable address
    printf("\n%p",p);//Print pointer veriable value (Address)
    printf("\n%p",&p);//Print pointer veriable Address
}
