//
// Created by Ray on 8/16/2021.
//
//cheak a string is a sub string or not
#include <stdio.h>

int issubString(char *s1,char *s2)
{
    int j=0;
    for (int i = 0; s1[i]!='\0'; ++i)
    {
        if (s1[i]==s2[j])
        {
            j++;
        }
        else
            j=0;
        if (s2[j]=='\0')
            return 1;
    }
    return 0;
}
/*
int main()
{
    char s1[20],s2[20];
    gets(s1);
    gets(s2);

    printf("%d",issubString(s1,s2));

    return 0;
}
 */