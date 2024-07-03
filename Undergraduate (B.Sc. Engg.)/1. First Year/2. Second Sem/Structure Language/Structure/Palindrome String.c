//
// Created by Ray on 8/14/2021.
//

#include<stdio.h>


int length(char *str)
{
    int len=0;

    for(;str[len]!='\0';len++);

    return len;
}

void checkPalindrome(char *str)
{
    int i,len,isPalindrone=1;


    len=length(str);

    for (i = 0; i < len/2; ++i)
    {
        if (str[i]!=str[len-i-1])
        {
            isPalindrone=0;
            break;
        }
    }

    if (isPalindrone==1)
        printf("Palindrome \n");
    else
        printf("Not palindrome \n");
}

void checkPalindrome2(char *str)
{
    int left,right;

    right=length(str)-1;
    left=0;

    while (left<right)
    {
        if (str[left++]!=str[right--])
            break;
    }

    if (length(str)%2==0)
    {
        if (left==right+1)
            printf("Palindrome \n");
    }
    else
    {
        if (left==right)
            printf("Palindrome \n");
    }
}

/*
int main()
{
    char str[20];

    scanf("%[^\n]s",str);

    //checkPalindrome(str);

    checkPalindrome2(str);

    return 0;
}
 */