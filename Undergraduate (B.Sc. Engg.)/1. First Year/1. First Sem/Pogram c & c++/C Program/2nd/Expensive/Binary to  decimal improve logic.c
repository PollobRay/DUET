#include<stdio.h>
int BtD(char s[]);
main()
{
    char st[20];
    printf("Enter a binary number:");
    gets(st);
    printf("\nDecimal value = %d",BtD(st));
}
int BtD(char s[])
{
    int i,d=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='0')
        {
            d=d*2+0;
        }
        else
        {
            d=d*2+1;
        }
    }
    return (d);
}
