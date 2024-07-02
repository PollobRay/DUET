#include<stdio.h>
struct student
{
    int roll;
    char name[10];
    struct std_mark
    {
        char sub[10];
        int m;
    }mark;
};
main()
{
struct student std;
printf("\nEnter Roll no:");
scanf("%d",&std.roll);
printf("\nEnter Name:");
scanf("%s",&std.name);
printf("\nEnter subject name:");
scanf("%s",&std.mark.sub);
printf("\nEnter nark :");
scanf("%d",&std.mark.m);

printf("\nStudent Detail :");
printf("\nRoll no :%d",std.roll);
printf("\nName :%s",std.name);
printf("\nsubject Name :%s",std.mark.sub);
printf("\nmark :%d",std.mark.m);

}
