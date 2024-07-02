#include<stdio.h>
main()
{
    int num,loop,fact,re,sum=0,temp;
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        loop=1;
        fact=1;
        re=num%10;
        while(loop<=re)
        {
            fact=fact*loop;
            loop++;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==temp)
    {
        printf("%d it is a Strong Number",temp);
    }
    else
        {
        printf("%d is not a strong number",temp);
    }
}
