#include<stdio.h>
long integerPower(int base,int power);

int main()
{
    int base,exponent;
    long result;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);
    if(exponent>0)
    {
        result=integerPower(base,exponent);
        printf("\n%d to the power %d is= %ld",base,exponent,result);
    }
    else
        printf("\nExponent must be positive non-zero integer");


    return 0;
}

long integerPower(int base,int power)
{
    long result=1;
    int i;
    for(i=1;i<=power;i++)
        result=result*base;
    if(base==0)
        result=0;
    return result;
}

