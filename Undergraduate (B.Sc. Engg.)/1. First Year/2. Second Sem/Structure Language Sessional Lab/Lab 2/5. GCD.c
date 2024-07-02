// GCD,HCF
#include<stdio.h>
 int main()
 {
     /*
    //      solution 1
    int n1,n2,GCD=1,i;
    printf("Enter two number:");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
            GCD=i;
    }
    printf("GCD= %d",GCD);
    */

    //      solution 2
    int n1,n2;
    printf("Enter two number:");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    printf("\nGCD= %d",n1);

     return 0;
 }
