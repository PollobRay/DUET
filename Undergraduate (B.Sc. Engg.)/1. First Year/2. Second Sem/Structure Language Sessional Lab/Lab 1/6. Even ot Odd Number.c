#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    printf(number%2==0?"Even":"Odd");
    return 0;
}
