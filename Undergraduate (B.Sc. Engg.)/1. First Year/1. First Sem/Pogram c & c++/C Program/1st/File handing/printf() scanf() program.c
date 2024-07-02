#include<stdio.h>
main()
{
    FILE *fp;
    int roll;
    char name[10];
    fp=fopen("Pollob2.txt","w");
    printf("Enter roll:");
    scanf("%d",&roll);

    printf("\nEnter Name:");
    scanf("%s",&name);
    fprintf(fp,"%d%s",roll,name);
    fclose(fp);
    fp=fopen("Pollob2.txt","r");
    fscanf(fp,"%d%s",&roll,name);
    fclose(fp);
}
