void area(int l,int b,void (*p)());
void unit();
main()
{
    area(20,10,unit());
}
void unit()
{
    printf("sp cm");
}
void area(int l,int b,void(*p)())
{
    int a;
    a=l*b;
    printf("Area of rectangle is : %d",a)//200
    p();
}
