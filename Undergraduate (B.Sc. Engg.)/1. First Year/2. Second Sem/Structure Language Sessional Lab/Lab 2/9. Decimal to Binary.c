#include<stdio.h>

int main()
{
    int number,i=1,set=0,rem;
    long int binary=0;
    printf("Enter Decimal number: ");
    scanf("%d",&number);
    while(number!=0)
    {
        rem=number%2;
        binary=(rem*i)+binary;
        number/=2;
        i*=10;
        if(rem)
            set++;
    }
   // printf("\nBinary: %ld",binary);
   printf("number of bits sets: %d",set);
    return 0;
}
