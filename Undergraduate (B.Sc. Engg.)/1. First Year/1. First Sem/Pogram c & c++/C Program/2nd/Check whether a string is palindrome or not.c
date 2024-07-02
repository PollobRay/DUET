#include<stdio.h>
int ispalindrome(char s[])
{
    int l,i;
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
            return (0);
        else
            return (1);
    }
}
main()
{
    char str[20];
    printf("Enter a string:");
    gets(str);
    if(ispalindrome(str))
    {
        printf("\nPalindrome");
    }
    else
        printf("Not palindrome");
}
