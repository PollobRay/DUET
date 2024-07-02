#include<stdio.h>
char* remove_duplicate(char *s);
main()
{
    char s[]="AABBCCDAB";
    printf("%s",remove_duplicate(s));
}
char* remove_duplicate(char *s)
{
    int i,j;
    for(i=0;s[i];i++)
    {
        if(s[i]==s[i+1])
        {
            for(j=i;s[j];j++)
                s[j]=s[j+1];
            i--;
        }
    }
    return(s);
}
