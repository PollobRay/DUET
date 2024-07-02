#include<stdio.h>

int main()
{
    float celcius,farenheight;
    printf("Enter celcius temperature:");
    scanf("%f",&celcius);
    farenheight=((celcius*9)/5)+32;

    printf("Farenheight temparature is :%.2f",farenheight);

    printf("\nEnter farenheight temperature :");
    scanf("%f",&farenheight);
    celcius=(farenheight-32)*5/9;
    printf("Celcius temperature is: %.2f",celcius);

    // -40 degree temperature is same on celtigrate and farenheight

    return 0;
}
