#include<stdio.h>
#include<string.h>
int index(char str[],char s[])
{
int i,j,k,l;
l=strlen(s);
for(i=0;str[i+l-1];i++)
{
    k=i;
}
    for(j=0;j<=l-1;j++)
    {
        if(str[k]!=s[j]);
        break;
        k++;
    }
    if(j==l)
    {
        return (i);
    }
    return (-1);
}

main()
{
    int i;
    i=index("abababbbaaabbbababbbbaa","ab");
    if(i==-1)
        printf("Substring not found");
    else
        printf("Substring at index  %d ",i);
}
