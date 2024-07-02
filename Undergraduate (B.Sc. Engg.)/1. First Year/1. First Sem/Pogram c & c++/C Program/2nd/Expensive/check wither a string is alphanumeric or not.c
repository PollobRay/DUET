#include<stdio.h>
main()
{
    char s[20];
    int i,A=0,D=0;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            A=1;
        }
        if(s[i]>='0' && s[i]<='9')
        {
            D=1;
        }
    }
    if(A==1 && D==1)
        printf("\n%s is alphanumeric",s);
    else
        printf("\n%s is not alpha numeric",s);
}
