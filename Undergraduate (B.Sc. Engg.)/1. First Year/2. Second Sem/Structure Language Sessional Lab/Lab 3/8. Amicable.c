#include<stdio.h>

int main()
{
    int n1,n2,sum1=0,sum2=0,i;
    printf("Enter two numbers :");
    scanf("%d %d",&n1,&n2);

    for(i=1;i<=n1/2;i++)
    {
        if(n1%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(i=1;i<=n2/2;i++)
    {
        if(n2%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(sum1==n2&&sum2==n1)
        printf("Amicable");
    else
        printf("Not amicable");
}
