//
// Created by Ray on 2/10/2022.
//


#include<stdio.h>

int main()
{
    int size=0;
    int flag=1;
    char str[10];

    scanf("%s",str);

    for (int i = 0; str[i]!='\0'; ++i)
    {
         size++;
    }
    for (int i = 0; i < size/2; ++i)
    {
        if(str[i]!=str[size-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
