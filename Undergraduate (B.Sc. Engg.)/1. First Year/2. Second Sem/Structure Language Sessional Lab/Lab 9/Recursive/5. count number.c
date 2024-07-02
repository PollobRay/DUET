#include<stdio.h>

int count(int n)
{
   // static int c=0;
    if(n==0)
        return 0;
    else
        return 1+count(n/10);
}
int main()
{
    printf("%d",count(2458));
}
