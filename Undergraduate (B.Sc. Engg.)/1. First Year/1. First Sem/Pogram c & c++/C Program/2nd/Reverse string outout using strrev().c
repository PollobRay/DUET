main()
{
char s[20],ch;
int l,i;
printf("Enter a string:");
gets(s);
for(l=0;s[l];l++);
for(i=0;i<l/2;i++)
{ch=s[i];
s[i]=s[(l-1)-i];
s[(l-1)-i]=ch;

}
printf("\nYour string is:%s",s);
}
