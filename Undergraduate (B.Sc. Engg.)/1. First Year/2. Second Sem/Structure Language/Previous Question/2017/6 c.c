//
// Created by Ray on 8/16/2021.
//
// check prime
#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i <n ; ++i)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}
/*
int  main()
{
  int n;

  scanf("%d",&n);

  printf("%d",isPrime(n));


    return 0;
}
 */