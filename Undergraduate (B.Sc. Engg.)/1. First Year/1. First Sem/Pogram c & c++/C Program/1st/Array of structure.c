#include<stdio.h>
struct student
{
    int roll;
    char name[10];
};
main()
{
struct student std[5];
int i;
printf("Enter Detail for Five student");
for(i=0;i<5;i++)
{
    printf("\nEnter roll no for %d student :",i+1);
    scanf("%d",&std[i].roll);
    printf("\nEnter name for  %d  student :",i+1);
    scanf("%s",&std[i].name);
}
printf("Detail for student");
for(i=0;i<5;i++)
{
    printf("\nDetail %d student",i+1);
    printf("\nRoll No :%d",std[i].roll);
    printf("\nName : %s",std[i].name);
}

}
