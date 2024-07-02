int f1(int);
main()
{
    int (*p)(int);
    p=f1;
    printf("%d",p(5));

}
int f1(int x)
{
    printf("\n %d",x);
    return(x+1);
}
