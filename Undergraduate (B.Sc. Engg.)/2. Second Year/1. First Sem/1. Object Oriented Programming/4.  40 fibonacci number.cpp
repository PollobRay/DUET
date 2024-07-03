/*
//
// Created by pollo on 5/21/2021.
//

#include <stdio.h>

int main()
{
    long f0,f1,fibo,n=20,op=0;
    f0=0;
    f1=1;
    fibo=f0+f1;

    for (int i = 1; i <=n; ++i)
    {
        printf("%ld ",fibo);
        op++;
        fibo=f0+f1;
        f0=f1;
        f1=fibo;


        if (op==4)
        {
            printf("\n");
            op=0;
        }
    }

    return 0;
}
*/
