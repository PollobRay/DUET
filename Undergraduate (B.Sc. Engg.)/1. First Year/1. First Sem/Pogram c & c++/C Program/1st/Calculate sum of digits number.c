#include<stdio.h>
main()
{
int n,re,sum=0;
printf("Enter a Number :");
scanf("%d",&n);
while(n>0)
{
    re=n%10;//divite nunber by number
    sum=sum+re;
    n=n/10;
}
printf("\nSum of given number : %d",sum);
}
