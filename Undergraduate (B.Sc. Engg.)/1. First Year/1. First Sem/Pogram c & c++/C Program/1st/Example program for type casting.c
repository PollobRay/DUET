#include<stdio.h>
main()
{
    int a=5,b=2;
    float c;
    c=a/b;
    printf("Value of c %f",c);
    c=(float)a/b; //maKE a & b integer to float (Type custing)
    printf("\nValue of c after type custing c: %f",c);
}
