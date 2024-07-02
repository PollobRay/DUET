main()
{
    void *p;
    int x=5;
    p=&x;
    printf("%d",*(int *)p);//type cust int from void
}
