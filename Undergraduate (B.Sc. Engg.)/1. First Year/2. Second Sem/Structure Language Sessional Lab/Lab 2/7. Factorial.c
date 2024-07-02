#include<stdio.h>

int main()
{
    int N,i;
    long int fact(int n);


   printf("Enter value of start: ");
    scanf("%d",&N);

    for(i=N;i<N+10;i++)
    {
        printf("\n%10s %3d! : %ld","",i,fact(i));
    }
    return 0;
}
long int fact(int n)
{
    long int f=1;
    int i;
    for(i=2;i<=n;i++)
    {
        f*=i;
    }

    return f;
}
