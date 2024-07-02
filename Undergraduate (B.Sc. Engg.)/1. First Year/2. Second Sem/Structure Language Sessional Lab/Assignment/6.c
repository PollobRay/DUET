#include<stdio.h>
void swap(int *n1,int *n2);
int main()
{
    int n1,n2;
    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);

    printf("\nBefore swap");
    printf("\nNumber1= %d Number2=%d",n1,n2);
    swap(&n1,&n2);
    printf("\n\nAfter swap");
    printf("\nNumber1= %d Number2=%d",n1,n2);

    return 0;
}
void swap(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

