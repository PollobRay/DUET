// writing and reading of text as string
#include<stdio.h>
int main()
{
    char str[50];
    FILE *fptr;

    fptr=fopen("test4.txt","w");
    while(gets(str)!=NULL)// ^z (ctrl+z) for exit
    {
        fputs(str,fptr); // store data into file
        fputs("\n",fptr);
    }
    fclose(fptr);

    fptr=fopen("test4.txt","r");
    printf("\nPrinting data from file...\n");

    while(fgets(str,50,fptr)!=NULL)// here 10 is maximum byte which you want to retrieve at once
    {
            puts(str);
    }


    return 0;
}
