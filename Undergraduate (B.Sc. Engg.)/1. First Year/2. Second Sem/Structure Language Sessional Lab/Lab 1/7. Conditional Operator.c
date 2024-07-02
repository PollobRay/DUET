#include<stdio.h>
int main()
{

    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    y=x==0?0:(x>0?1: -1);
    printf("Y: %d",y);



    return 0;
}
