#include<stdio.h>
main()
{
    FILE *fp;//file type pointer
    char ch;
    fp=fopen("pollob.txt","w");
    printf("Input line and Press EOF\n");
    while((ch=getchar())!=EOF) //  ctrl+z   press to exit loop
    {
        putc(ch,fp);

    }
    printf("output\n");
    fp=fopen("pollob.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
        fclose(fp);
    }

}
