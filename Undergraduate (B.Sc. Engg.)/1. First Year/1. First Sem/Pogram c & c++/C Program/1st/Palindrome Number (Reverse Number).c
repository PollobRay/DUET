#include<stdio.h>
main()
{
int n,temp,rev=0,re;
printf("Enter a Number :");
scanf("%d",&n);
temp=n;

while(temp>0)
{
    re=temp%10; //divite number by number
    rev=(rev*10)+re;
    temp=temp/10;//number divite by one number
}
if(n==rev)
{
    printf("\nIt is palindrome number");
}
else{
    printf("\nIt is not Palindrome");
}

}
