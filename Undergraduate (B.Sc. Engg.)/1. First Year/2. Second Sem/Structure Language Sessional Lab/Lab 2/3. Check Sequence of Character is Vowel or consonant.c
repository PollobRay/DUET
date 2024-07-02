#include<stdio.h>

int main()
{
    char ch;

    do{
        if(ch!='\n')
            printf("\nEnter a character:");
        scanf("%c",&ch);
        if(ch=='\n')
            continue;

        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                printf("\nThe character is vowel");
            }
            else
                printf("\nThe character is consonant");
        }
        else if(ch>='0'&&ch<='9')
            printf("\nThe character is number");
        else
            printf("\nThe character is not alphabet or number");
    }while(ch!='#');
}
