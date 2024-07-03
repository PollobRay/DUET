//
// Created by Ray on 8/16/2021.
//
// number in stricly ordered
#include <stdio.h>

int isStrictlyOrder(int n)
{
    int n1,n2=10;
    while (n!=0)
    {
        n1=n%10;
        n=n/10;
        if (n2<=n1)
            return 0;
        n2=n1;
    }

    return 1;
}
/*
int main()
{
    int n;

    scanf("%d",&n);

    printf("%d",isStrictlyOrder(n));

    return 0;
}
 */