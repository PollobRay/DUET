#include<stdio.h>
main()
{
    int marks[3]={10,20,30},i;
    int* point[3];
    for(i=0;i<3;i++)
    {
        printf("\n%d",marks[i]);
      point[i]=&marks[i];
    }
    printf("\nPointer veriable value:");
    for(i=0;i<3;i++)
    {
        printf("\n%d",*point[i]);
    }
}
