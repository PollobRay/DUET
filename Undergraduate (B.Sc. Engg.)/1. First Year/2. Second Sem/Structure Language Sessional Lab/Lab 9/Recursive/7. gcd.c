#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n1==n2)
        return n1;
    else
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;

        return gcd(n1,n2);
    }
}
int main()
{
    printf("%d",gcd(10,45));
}
