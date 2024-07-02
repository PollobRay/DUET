#include<stdio.h>
struct student //struct keyword
{
    int roll;
    char name[10];
}std1={101,'P'};// structure end   and std1 is structure veriable
main()
{
    struct student std2;//std2 structure veriable
    printf("\nRoll is : %d",std1.roll);
    printf("\nName is : %c",std1.name);

    printf("\nEnter Roll no for std2: ");
    scanf("%d",&std2.roll);
    printf("\nEnter name for std2: ");
    scanf("%c",&std2.name);

   printf(" \nstd2 Roll is : %d",std2.roll);
    printf("\nstd2 Name is : %c",std2.name);
}
