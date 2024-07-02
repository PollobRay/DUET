#include<stdio.h>
int main()
{
    int hours,minits,totalminits;
    printf("Enter hours: ");
    scanf("%d",&hours);
    printf("\nEnter Minitis");
    scanf("%d",&minits);
    totalminits=minits+hours*60;
    printf("Total mintis: %d",totalminits);

    return 0;
}
