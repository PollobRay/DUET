#include<stdio.h>
int main()
{
    int f1=1,f2=1,fibo,i,n;

    printf("enter term no: ");
    scanf("%d",&n);

    for(i=3;i<=n;i++)
    {
        fibo=f2+f1;

        f1=f2;
        f2=fibo;


    }
printf("%d\n",fibo);
    return 0;
}
