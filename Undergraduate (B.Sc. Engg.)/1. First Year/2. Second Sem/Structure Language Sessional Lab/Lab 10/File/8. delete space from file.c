// delete all space from file
#include<stdio.h>
int main()
{
    char c1,c2;
    long pos;
    FILE *fp;

    fp=fopen("message.txt","r+");

    while((c1=fgetc(fp))!=EOF)
    {

        if(c1==' ')
        {
            pos=ftell(fp);
            while((c2=fgetc(fp))!=EOF)
            {
                printf("d: %c Position: %d\n",c2,ftell(fp));
                fseek(fp,ftell(fp)-2,SEEK_SET);
                fputc(c2,fp);
                 printf("d: %c Position: %d\n",c2,ftell(fp));
                fseek(fp,ftell(fp)+3,SEEK_SET);
            }
            fseek(fp,pos-1,SEEK_SET);
            printf("Set next\n\n");
        }
    }
    fclose(fp);
    return 0;
}
