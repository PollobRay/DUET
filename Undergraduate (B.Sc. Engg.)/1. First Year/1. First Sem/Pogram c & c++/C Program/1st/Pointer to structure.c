#include<stdio.h>
struct student
{
   char name[20];
   int roll;
};
int main()
{
    struct student std;// structure veriable created
    struct student *p;
    p=&std;
    printf("Enter student name :");
    scanf("%s",&p->name);
    printf("\nEnter Student Roll :");
    scanf("%d",&p->roll);
    printf("\nStudent roll No: %d",(*p).roll);
    printf("\nStudent roll No: %s",(*p).name);
    return 0;
}
