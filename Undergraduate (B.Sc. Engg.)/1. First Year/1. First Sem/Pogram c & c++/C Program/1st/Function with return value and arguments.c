#include<stdio.h>
int val(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
main()
{
    int a,b,c;
    printf("Enter 2 value :");
    scanf("%d%d",&a,&b);
    c=val(a,b);
    printf("summation is : %d",c);
}


