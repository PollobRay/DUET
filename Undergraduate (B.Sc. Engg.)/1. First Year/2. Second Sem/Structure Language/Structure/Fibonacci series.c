//
// Created by Ray on 8/14/2021.
//

#include <stdio.h>

int fibo1(int n)
{
    int fibo=0,f1,f2;
    f1=0;
    f2=1;

    for (int i = 1; i <=n-2 ; ++i)
    {
        fibo=f1+f2;
        f1=f2;
        f2=fibo;
    }

    return fibo;
}

int fibo2(int n)
{
    if (n==0||n==1||n==2)
        return 1;

    else
        return fibo2(n-1)+fibo2(n-2);
}
/*
int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",fibo2(n));

    return 0;
}
 */