#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("test.txt","w");
    char ch;
    if(f!=NULL)
    {
        printf("\nFile created successfully..\n");
        do{
            ch=getche();
            fprintf(f,"%c",ch);
        }while(ch!=13);

        fclose();
    }
    else
        printf("\nFile not create..");

    return 0;
}
