#include<stdio.h>
int sum(int x)
{
    if(x/10==0)
    {
        return(x);
    }
    return(x%10+sum(x/10));
}
main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("\nsum of digits is : %d",sum(x));
}
