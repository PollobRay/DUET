#include<stdio.h>

void number(int n)
{   static int i=1;
    printf("%d ",i);
    if(i++==n)
       {
          return;
       }
    else
    {
        number(n);
    }
}

int main()
{
    int n=10;
    number(10);

    return 0;
}
