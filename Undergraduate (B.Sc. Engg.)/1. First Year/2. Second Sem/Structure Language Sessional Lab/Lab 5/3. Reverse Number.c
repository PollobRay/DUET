#include<stdio.h>

int reverse(int n);
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r=reverse(n);
    printf("\nReverse of %d is= %d",n,r);

    return 0;
}
int reverse(int n)
{
    int reverse=0,rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    return reverse;
}
