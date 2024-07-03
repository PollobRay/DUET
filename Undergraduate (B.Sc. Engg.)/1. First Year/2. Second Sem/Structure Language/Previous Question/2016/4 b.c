//
// Created by Ray on 8/16/2021.
//
// read name of student from name.txt if len(name)>=5 store big.txt else store small.txt

#include <stdio.h>

int len(char *s)
{
    int i;
    for(i=0;s[i]!='\0';i++);

    return i;
}
/*
int main()
{
    FILE *fp,*fp1,*fp2;
    char name[100];

    //write
    fp=fopen("name.txt","w");
    fprintf(fp,"%s","Department of CSE, DUET Gazipur");
    fclose(fp);


    fp=fopen("name.txt","r");
    fp1=fopen("big.txt","w");
    fp2=fopen("small.txt","w");

    //read
    while (fscanf(fp,"%s",name)==1)//means data read successfully
    {
        if (len(name)>=5)
            fprintf(fp1,"%s ",name);
        else
            fprintf(fp2,"%s ",name);
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    fp1=fopen("big.txt","r");
    fp2=fopen("small.txt","r");

    printf("\nFrom big.txt\n");
    while (fscanf(fp1,"%s",name)==1)
        printf("%s ",name);

    printf("\nFrom small.txt\n");
    while (fscanf(fp2,"%s",name)==1)
        printf("%s ",name);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
 */