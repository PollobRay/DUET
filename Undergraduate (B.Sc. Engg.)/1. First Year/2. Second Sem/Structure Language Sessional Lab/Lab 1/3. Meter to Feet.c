#include<stdio.h>

int main()
{
    float meter,feet,inch;
    printf("Enter length in meter: ");
    scanf("%f",&meter);

    inch=meter*39.37;
    feet=(int)inch/12;
    inch=inch-(feet*12);

    printf("Feet=%.2f inch= %.2f",feet,inch);

    return 0;
}
