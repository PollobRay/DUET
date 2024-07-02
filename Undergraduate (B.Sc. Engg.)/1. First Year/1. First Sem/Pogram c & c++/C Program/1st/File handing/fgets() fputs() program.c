#include<stdio.h>
main()
{
    FILE *fp;
    char str[20];
    fp=fopen("Pollob1.txt","w");
    fputs("This is c program",fp);
    fclose(fp);
    fp=fopen("Pollob1.txt","r");
    fgets(str,10,fp);
    printf("\ntext is\n");
    printf("%s",str);
    fclose(fp);
    getch();
}
