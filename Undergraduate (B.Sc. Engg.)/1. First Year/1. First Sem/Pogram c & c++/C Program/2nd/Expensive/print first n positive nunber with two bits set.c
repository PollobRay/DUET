#include<stdio.h>
main()
{
    int n,x=3,y,count;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n)
    {
        y=x;
        count=0;
        while(y)
        {
            if(y%2==1)
                count++;
            y=y/2;
        }
        if(count==2)
        {
            printf("\n%d",x);
            n--;
        }
        n++;
    }
}
