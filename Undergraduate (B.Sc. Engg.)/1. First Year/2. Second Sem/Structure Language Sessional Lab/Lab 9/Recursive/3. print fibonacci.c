#include<stdio.h>

void fibo(n)
{
    static int i=1,f1=0,f2=1,fib=1;
    printf("%d ",fib);
    fib=f1+f2;
    f1=f2;
    f2=fib;

    if(i++==n)
        return;
    else
        fibo(n);

}
int main()
{
    fibo(10);
}
