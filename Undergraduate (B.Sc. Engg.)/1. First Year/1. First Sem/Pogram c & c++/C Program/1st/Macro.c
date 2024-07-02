#include<stdio.h>
#define value1 10 //macro declare
#define value2(x) (x*x) // Macro with 1 argument
#define value3(x,y) (x+y) // Macro with 2 argument
main()
{
    printf("%d",value1);
    printf("\n");

    printf("%d",value2(10));

    printf("\n");
    printf("%d",value3(20,30));

}
