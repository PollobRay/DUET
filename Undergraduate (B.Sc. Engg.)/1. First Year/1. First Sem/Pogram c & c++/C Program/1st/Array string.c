#include<stdio.h>
main()
{
int i=0;
char name[10];
printf("Enter Name :");
scanf("%s",name);
while(name[i]!='\0')
{
    printf("%c stored at  %u\n",name[i],&name[i]);
    i++;
}

}
