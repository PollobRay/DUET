#include<stdio.h>
#include<string.h>
main()
{
char one[10],two[10];
int cmp;
printf("Enter a string :");
scanf("%s",one);

strcpy(two,one);// copy two string value from one veriable

strrev(one);

cmp=strcmp(one,two);//strcmp() for one,two veriable compare  if one & two is palindrome  to is return 0 else not palinmdrome

if(cmp==0)
{
    printf("\n The string is palindrome");

}
else
{
printf("The string is not palindrome");
}
}
