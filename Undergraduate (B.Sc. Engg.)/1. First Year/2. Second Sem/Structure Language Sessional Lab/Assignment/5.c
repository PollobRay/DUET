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
    if(base==0)
        return 0;
    if(power==0)
        return 1;
    else
        return base*integerPower(base,power-1);

}

