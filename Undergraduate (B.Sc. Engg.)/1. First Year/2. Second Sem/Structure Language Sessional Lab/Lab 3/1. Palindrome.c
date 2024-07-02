#include<stdio.h>
int main()
{
    int N,N1,N2=0,rem;
    printf("Enter a number: ");
    scanf("%d",&N);

    N1=N;
    while(N1!=0)
    {
        rem=N1%10;
        N2=N2*10+rem;
        N1/=10;

    }
    if(N==N2)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
