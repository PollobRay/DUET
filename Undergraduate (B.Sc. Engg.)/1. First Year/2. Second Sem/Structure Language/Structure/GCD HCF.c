//
// Created by Ray on 8/14/2021.
//

#include <stdio.h>

int gcd1(int n1,int n2)
{
    int gcd=1;

    for (int i = 1; i <=n1&&i<=n2 ; ++i)
    {
        if (n1%i==0&&n2%i==0)
            gcd=i;
    }

    return gcd;
}

int gcd2(int n1,int n2)
{
    while (1)
    {

        n2=n2/n1;
        n1=n2;
    }
}

int gcd3(int n1,int n2)
{
    while (n1!=n2)
    {
        if (n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }

    return n1;
}
/*
int main()
{
    int n1,n2;

    scanf("%d %d",&n1,&n2);

    printf("%d\n",gcd3(n1,n2));

    return 0;
}
 */