#include<stdio.h>

main()
{
int x,y;
printf("Enter Two value:");
scanf("%d%d",&x,&y);
printf("\nValue before swapping is: x=%d y=%d",x,y);

x=x+y;
y=x-y;
x=x-y;
printf("\nValue after swapping is: x=%d y=%d",x,y);
}
