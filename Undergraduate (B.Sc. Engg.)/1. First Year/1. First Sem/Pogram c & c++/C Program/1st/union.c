#include<stdio.h>
union student
{
    int roll;
    char name[10];
};
main()
{
union student std;
printf("Enter Roll no:");
scanf("%d",&std.roll);
printf("\nEnter Student name:");
scanf("%d",&std.name);
printf("\nStudent Detail");
printf("Roll No: %d",std.roll);
printf("\nName : %s",std.name);
}
