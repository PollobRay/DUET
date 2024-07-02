#include<stdio.h>
#include<string.h>
main()
{
int i;
char name[10];
printf("Enter a string :");
scanf("%s",name);

i=strlen(name);//For string Length using strlen()

printf("your string length is : %d",i);

}
