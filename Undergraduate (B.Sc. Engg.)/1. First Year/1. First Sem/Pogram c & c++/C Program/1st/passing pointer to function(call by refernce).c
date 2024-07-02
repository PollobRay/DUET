#include<stdio.h>
void swp(int*,int*);
main()
{

int a,b;
printf("\nEnter value of a:");
scanf("%d",&a);
printf("\nEnter value of b:");
scanf("%d",&b);
printf("\nvalue Before swaping:");
printf("\nEnter value of a: %d",a);
printf("\nEnter value of a: %d",b);
swp(&a,&b);
printf("\nvalue After swaping:");
printf("\nEnter value of a: %d",a);
printf("\nEnter value of a: %d",b);

}
void swp(int* x,int* y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
