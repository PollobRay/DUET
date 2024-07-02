#include<stdio.h>
int factorial(int);
main()
{
    int no,ans;
    printf("Enter a Number:");
    scanf("%d",&no);
    ans=factorial(no);
    printf("\nFactorial value is :%d",ans);
}
int factorial(int x)
{
    int f;
    if(x==0)
    {
        return 1;
    }
    else
    {
        f=x*factorial(x-1);//Recursion
        return f;
    }
}
