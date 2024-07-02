#include<stdio.h>

int TestPalindrome(char str[]);
int main()
{
    char str[100];
    int test;
    printf("Enter a string: ");
    fgets(str,99,stdin);
    test=TestPalindrome(str);

    if(test==1)
    {
        printf("\nThe string %s is palindrome",str);
    }
    else
    {
        printf("\nThe string %s is not palindrome",str);
    }
    return 0;
}

int TestPalindrome(char str[])
{
    int t=1;
    int i,j,n;

    //finding length of string
    for(i=0;str[i]!='\0';i++);

    n=i;//storing length to n
    str[n-1]='\0'; // storing null because fgets() function also store enter(newline) value

    for(i=0,j=n-2;i<(n-1)/2;i++,j--)
    {
       if(str[i]!=str[j])
       {
           t=0;
           break;
       }
    }

    return t;

}
