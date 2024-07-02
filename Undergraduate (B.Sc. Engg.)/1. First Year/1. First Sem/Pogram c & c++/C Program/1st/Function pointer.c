#include<stdio.h>
void add(int x,int y)
{
    printf("\n Value of x: %d",x);
    printf("\n Value of y: %d",y);
    printf("\n X+Y : %d",x+y);
}
main()
{
    int a,b;
    void (*ptr)(int,int);// calling pointer function
    ptr=add;// ptr()=add() initilize
    a=10;
    b=20;
    ptr(a,b);
}
