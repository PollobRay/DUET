#include<stdio.h>
main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel",ch);

        default:
            printf("%c character is not vowel",ch);
    }
}
