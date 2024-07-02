#include<stdio.h>
main()
{
FILE *fp;
int no,i;
fp=fopen("Pollob3.txt","w");
for(i=1;i<=20;i++)
{
    putw(i,fp);//for write integer value
}
fclose(fp);
fp=fopen("Pollob3.txt","r");
while((no=getw(fp))!=EOF)//getw() for read integer value
{
    printf("%d",no);
}
fclose(fp);
}
