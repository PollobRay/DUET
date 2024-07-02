// writing and reading character from file and to file
#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr=fopen("test3.txt","w");

    printf("enter character: \n");

    while((ch=getchar())!=EOF)// EOF is ^z (ctrl+z)
    {
        fputc(ch,fptr);// here we not storing any space because character us one byte so
    }
    fclose(fptr);

    fptr=fopen("test3.txt","r");

    while((ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}
