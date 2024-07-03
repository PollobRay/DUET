//
// Created by Ray on 8/14/2021.
//

#include <stdio.h>

int prime[25];
int limit;

void primeGenerator()
{
    int i,j;

    limit=0;

    for (i = 1; i <100 ; ++i)
    {
        for (j = 2; j <i ; ++j)
        {
            if (i%j==0)
                break;
        }

        if (i==j)
            prime[limit++]=i;
    }
}

void primeFactorization(int n)
{
    primeGenerator();

    int i=0;

    while (n!=1)
    {
        if (n%prime[i]==0)
        {
            printf("%d ",prime[i]);
            n=n/prime[i];
            i=0;
        }
        else
            i++;
    }
}

/*
int main()
{
    int n;

    scanf("%d",&n);

    primeFactorization(n);

    return 0;
}
 */