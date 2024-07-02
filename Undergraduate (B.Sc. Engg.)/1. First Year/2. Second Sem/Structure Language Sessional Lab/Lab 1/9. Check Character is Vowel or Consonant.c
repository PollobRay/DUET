#include<stdio.h>

int main()
{
  char C;
  printf("Enter a character :");
  scanf("%c",&C);

  if((C>='a'&&C<='z')||(C>='A'&&C<='Z'))
  {
      if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U')
        printf("Vowel");
      else
        printf("Constant");
  }
  else if(C>='0'&&C<='9')
    printf("Number");
  else
    printf("Neither Charecter nor Number ");
}
