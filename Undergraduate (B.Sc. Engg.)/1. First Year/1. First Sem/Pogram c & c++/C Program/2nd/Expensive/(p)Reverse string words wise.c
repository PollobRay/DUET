#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct word
{
    char word[20];
};
char* remove_extra_spaces(char *s)
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
       while (*(s+i)!=' ' && *(s+i)!='\0')
       {
           *(p+j)=*(s+i);
           i++;
           j++;
       }
       if(*(s+i)=='\0' && *(p+j-1)==' ')
        j--;
       *(p+j)=*(s+i);
       j++;
   }
}
char* reverse(struct word *ptr,char *s)
{
    char temp[20],*q;
    int i=0,j,k=0;
    while(*(s+i))
    {
        j=0;
        while(*(s+i)!=' ' && *(s+i)!='\0')
        {
            temp[j]=*(s+i);
            i++;
            j++;
        }
        if( *(s+i)==' ')
        {
            i++;
        }
        temp[j]='\0';
        strcpy(ptr[k].word,temp);
        k++;
    }
    q=(char*)malloc(strlen(s)+1);
    *(q+0)='\0';
    k--;
    while(k)
    {
    strcat(q,ptr[k].word);
    strcat(q," ");
    k--;
    }
    strcat(q,ptr[0].word);
    return (q);
}

void main()
{
    int no_of_words;
    char str[99];
    struct word *ptr;
    printf("Enter a string:");
   scanf("%s",&str);
    strcpy(str,remove_extra_spaces(str));
    printf("\n String length : %d",strlen(str));
    no_of_words=count_words(str);
    printf("\n number of words:%d",no_of_words);
    ptr=(struct word*)calloc(no_of_words,sizeof(struct word));
    strcpy(str,reverse(ptr,str));
    printf("\n string reverse is:\n %s",str);

}
