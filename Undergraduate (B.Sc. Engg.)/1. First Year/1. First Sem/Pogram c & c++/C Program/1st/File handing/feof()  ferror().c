#include<stdio.h>
main()
{
    FILE *fp;
    char str[10];
    fp=fopen("Pollob2.txt","r");
    fgets(str,10,fp);
    printf("text is: %s",str);
    if(feof(fp)!=0)
    {
        printf("\nEnd of file");
    }
    if(ferror(fp)!=0)
    {
        printf("\nHave Error");
    }
    fclose(fp);

    //feof()!=0   end of file
    //ferror()!=0    check error
}
