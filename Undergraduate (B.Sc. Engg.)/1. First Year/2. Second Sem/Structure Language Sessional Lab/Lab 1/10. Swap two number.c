#include<stdio.h>

int main()
{
    int num1,num2,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    temp=num2;
    num2=num1;
    num1=temp;
    printf("\nNum1=%d num2=%d",num1,num2);

    num1=(num2+num1)-(num2=num1);
    printf("\n\nNum1=%d Num2=%d",num1,num2);

    return 0;
}
