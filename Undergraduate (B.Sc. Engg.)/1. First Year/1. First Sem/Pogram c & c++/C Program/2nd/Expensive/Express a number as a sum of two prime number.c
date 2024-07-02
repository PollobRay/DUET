#include<stdio.h>
int nextprime(int n)
{
    do
    {
        n++;
    }
    while(!isprime(n));
    return(n);
}
int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return (0);

    }
    return (1);
}
main()
{
    int i,x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=3;i<=(x-1);i=nextprime(i))
    {
        if(isprime(x-1))
        {
            printf("%d + %d = %d\n",i,x-i,x);
        }
    }
}
