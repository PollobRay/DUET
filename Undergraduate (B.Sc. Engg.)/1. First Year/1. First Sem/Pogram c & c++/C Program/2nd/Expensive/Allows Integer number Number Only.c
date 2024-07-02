#include<stdio.h>
int getIntegerOnly(void);
main()
{
    int x=0;
    x=getIntegerOnly();
    printf("Your Value is:");
}
int getIntegerOnly()
{
    int num=0,ch;

    do{
        ch=getch();
        if(ch>=48 && ch<=57)
        {
            printf("%d",ch);
            num=num*10+(ch-48);
        }
        if(ch==13)
        {
            break;
        }
    }
    while(1);

    return (num);
}
