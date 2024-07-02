#include<stdio.h>

int main()
{
    FILE *file;
    char ch;
    int vowel=0, consonant=0;

    file = fopen("text.txt", "r");

   if(file!=NULL)
    {
        while ((ch = fgetc(file)) != EOF)
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                vowel++;
            }
            else if((ch>'a'&&ch<='z')||(ch>'A'&&ch<='Z'))
            {
                consonant++;
            }

        }
        printf("\nNo. of Vowels: %d",vowel);
        printf("\nNo. of Consonants: %d",consonant);

    }


    fclose(file);

    return 0;
}
