main()
{
char s[20];
int i;
printf("Enter a string:");
gets(s);//scanf("%s",&s)
for(i=0;s[i]!='\0';i++);
printf("\nyour string length is: %d",i);
}
