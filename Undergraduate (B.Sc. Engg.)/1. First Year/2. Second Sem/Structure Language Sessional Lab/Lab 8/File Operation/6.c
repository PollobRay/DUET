#include<stdio.h>
struct person
{
    char name[50];
    char date[50];
    int salary;

};
void write(char c[],FILE *f)
{
    int i;
    for(i=0;c[i]!='\0';i++)
        putc(c[i],f);
}
int main()
{
    struct person p;
    FILE *file;
    file=fopen("person.txt","w");

    printf("Enter name:");
    gets(p.name);
    printf("Enter date of joining:");
    gets(p.date);
    printf("Enter salary:");
    scanf("%d",&p.salary);


    write(p.name,file);
    putc('\n',file);
    write(p.date,file);
    putc('\n',file);
    putw(p.salary,file);

    fclose(file);




    return 0;
}
