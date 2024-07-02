#include<stdio.h>
#include<string.h>
main()
{
char str[10];
int i,len;
printf("Enter a string :");
scanf("%s",&str);
len=strlen(str);
printf("\n");
for(i=len-1; i>=0;i--)
{
    printf("%c",str[i]);
}

}
