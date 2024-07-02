//may name is pollob =4
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *remove_extra_spaces(char *s);
void count_words(char* s);
main()
{
    char str[100];
    printf("Enter a sentense:");
    gets(str);
    strcpy(str,remove_extra_spaces(str));
    //printf("\n string length: %d",strlen(str));
    count_words(str);
}
char *remove_extra_spaces(char *s)
{
    char *p;
    p=malloc(strlen(s)+1);
    int i=0,j=0;
    while(*(s+i))
    {
    while(*(s+i)==' ')
    {
        i++;
    }
    while(*(s+i)!=' ' && *(s+i)!='\0')
    {
        *(p+j)=*(s+1);
        i++;
        j++;
    }
    if(*(s+i)=='\0' && *(p+j-1)==' ')
        j--;
    *(p+j)=*(s+i);
    j++;
}
}
void count_words(char* s)
{
    int i=0,count=0;
    while(*(s+i))
    {
        if(*(s+i)==' ')
            count++;
        i++;
    }
    printf("Your number of words: %d",count+1);
}
