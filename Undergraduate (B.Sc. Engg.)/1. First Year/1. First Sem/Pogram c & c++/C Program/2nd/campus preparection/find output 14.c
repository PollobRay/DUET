void fun(int *p);
main()
{
    int x=5;
    fun(&x);
    printf("%d",x);//6
}
void fun(int *p)
{
    ++*p;
}
