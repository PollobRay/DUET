#include<stdio.h>
struct student
{
int roll;
int mark[5];
char name[10];
};
main()
{
struct student std;
int i,sum=0;
printf("Enter Roll No :");
scanf("%d",&std.roll);
printf("\nEnter Subject Name :");
scanf("%s",&std.name);
printf("\n Enter mark for five subject :");
for(i=0;i<5;i++)
{
scanf("%d",&std.mark[i]);
sum=sum+std.mark[i];
}

printf("\nRoll no: %d",std.roll);
printf("\nsubject Name: %s",std.name);
printf("\n Total marks :%d",sum);
}
