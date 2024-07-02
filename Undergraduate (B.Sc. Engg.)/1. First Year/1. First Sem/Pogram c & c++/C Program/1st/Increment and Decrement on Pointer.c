#include<stdio.h>
main()
{
    int a=100;
    int* p;//pointer
    //int** p1;//For pointer   Or one star(*) pointer
    p=&a;

    printf("\nValue of a: %d",a);//100
    printf("\nValue of pointer: %d",*p);//100
    printf("\nAddress of veriable a: %p",a);//a veriable address
    printf("\nAddress of pointer veriable a: %p",p);//a printer veriable address
    p++;
    printf("\n\np++\n\n");

    printf("\nValue of a: %d",a);//100
    printf("\nValue of pointer: %d",*p);//100
    printf("\nAddress of veriable a: %p",a);//a veriable address
    printf("\nAddress of pointer veriable a: %p",p);//a printe

    a++;
    printf("\n\na++\n\n");

    printf("\nValue of a: %d",a);//100
    printf("\nValue of pointer: %d",*p);//100
    printf("\nAddress of veriable a: %p",a);//a veriable address
    printf("\nAddress of pointer veriable a: %p",p);//a printe

    *p++;
    printf("\n\n*p++\n\n");

    printf("\nValue of a: %d",a);//100
    printf("\nValue of pointer: %d",*p);//100
    printf("\nAddress of veriable a: %p",a);//a veriable address
    printf("\nAddress of pointer veriable a: %p",p);//a printe

}

