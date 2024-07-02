#include<stdio.h>

void ReplaceCharacter(char str[], char search_char, char new_char);

int main()
{
    char new_char,search_char,str[100];

    printf("Enter a string: ");
    fgets(str,99,stdin);

    printf("Enter which character want to replace: ");
    scanf("%c",&search_char);

    fflush(stdin);//flush input buffer because buffer is enter (taken new) line from previous input

    printf("\nEnter new character to replace: ");
    scanf("%c",&new_char);

    ReplaceCharacter(str,search_char,new_char);

    printf("\nAfter replace the string becomes:\n%s",str);


    return 0;
}

void ReplaceCharacter(char str[], char search_char, char new_char)
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==search_char)
        {
            str[i]=new_char; // replacing character
        }
    }
}
