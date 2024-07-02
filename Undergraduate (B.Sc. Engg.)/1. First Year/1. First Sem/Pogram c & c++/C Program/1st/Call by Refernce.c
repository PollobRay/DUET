#include<stdio.h>
void dsp(int* x);
main()
{
    int a=100;
    dsp(&a);
    printf("Value of a : %d",a);//300

}
void dsp(int* x)
{

    *x=*x+200;
    return;
}
