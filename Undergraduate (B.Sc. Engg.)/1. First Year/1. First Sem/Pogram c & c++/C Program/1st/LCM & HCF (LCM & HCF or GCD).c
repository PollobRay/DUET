#include<stdio.h>
main()
{
    int n1,n2,x,y,gcd,lcm;
    printf("Enter two integers :");
    scanf("%d%d",&n1,&n2);
    x=n1;
    y=n2;
    while(n1 !=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    printf("\nGCD : %d",n1);
    gcd=n1;
    lcm=(x*y)/gcd;
    printf("\nLCM : %d",lcm);
}
