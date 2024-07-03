//
// Created by Ray on 8/16/2021.
//
//string compare
#include <stdio.h>

int stringCompare(char *s1,char *s2)
{
    int i;
    for (i = 0; s1[i]!='\0'; ++i)
    {
        if (s1[i]!=s2[i])
            return s1[i]-s2[i];
    }
    if (s1[i]==s2[i])
        return 0;
    else
        return 1;
}
/*
int  main()
{
    char s1[20],s2[20];

    gets(s1);
    gets(s2);

    printf("%d ",stringCompare(s1,s2));

    return 0;
}
*/