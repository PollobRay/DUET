
#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter number :");
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%i!=0)
        {
            if(i==2)
                i++;
            else
                i=i+2;
        }
        else
        {
            printf("%d  ",i);
            n=n/i;
            i=2;
        }
    }
}
