#include<stdio.h>
main()
{
    int n,r,x,s;
    printf("Armstrong number are: ");
    for(n=1;n<=100;n++)
    {
        s=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            s=s+(r*r*r);
            x=x/10;
        }
        if(s==x)
        {
            printf("%d",n);
        }
    }
}
