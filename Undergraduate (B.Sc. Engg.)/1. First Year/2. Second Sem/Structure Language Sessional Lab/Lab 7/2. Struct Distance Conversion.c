#include<Stdio.h>

struct distance
{
    int feet;
    int inch;

};

int main()
{
    struct distance d1,d2;
    int totalFeet,totalInch;
    printf("Enter first distance: ");
    scanf("%d %d",&d1.feet,&d1.inch);
    printf("Enter second distance: ");
    scanf("%d %d",&d2.feet,&d2.inch);

    totalFeet=d1.feet+d2.feet;
    totalInch=d1.inch+d2.inch;

    totalFeet+=totalInch/12;
    totalInch=totalInch%12;

    printf("\nSummation of %d feet %d inch & %d feet %d inch is: %d feet %d inch",d1.feet,d1.inch,d2.feet,d2.inch,totalFeet,totalInch);

    return 0;
}
