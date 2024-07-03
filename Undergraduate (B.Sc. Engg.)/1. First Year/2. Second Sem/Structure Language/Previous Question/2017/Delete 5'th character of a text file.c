//
// Created by Ray on 8/16/2021.
//

/*
#include<stdio.h>

int main()
{

    char ch;
    FILE *file;

    if((file=fopen("Text1.txt","w"))!=NULL)
    {
        while ((ch=getchar())!='X')
        {
            fputc(ch,file);
        }

        fclose(file);

    }

    if ((file=fopen("Text1.txt","r+"))!=NULL)
    {

        while ((ch=fgetc(file))!=EOF)
        {
            if (ftell(file)%5==0)
            {
                printf("In here c: %c\n",ch);
                fseek(file,-1,SEEK_CUR);
                fputc('-',file);
                fseek(file,1,SEEK_CUR);
            }
        }

        fclose(file);
    }

    if((file=fopen("Text1.txt","r"))!=NULL)
    {
        while ((ch=getc(file))!=EOF)
        {
            putchar(ch);
        }

        fclose(file);

    }

    return 0;
}*/
