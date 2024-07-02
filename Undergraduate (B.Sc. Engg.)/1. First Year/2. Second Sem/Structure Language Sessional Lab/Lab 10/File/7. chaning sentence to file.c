#include<stdio.h>
int main()
{
    FILE *fp;
    char c;

    fp=fopen("test7.txt","w");

    fputs("This is C programming course",fp);// here C is at 8
    // changing
    fseek(fp,7,SEEK_SET);// set pinter after 7 bytes that means in 'C'
    fputs(" Java programming course",fp);
    fclose(fp);

    fp=fopen("test7.txt","r");
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)//if(feof(fp))
        {
            break;
        }
        printf("%c",c);
    }
    fclose(fp);

    return 0;
}
