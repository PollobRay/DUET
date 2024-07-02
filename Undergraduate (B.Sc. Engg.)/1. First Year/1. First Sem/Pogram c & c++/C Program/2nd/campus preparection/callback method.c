void A1()
{
    printf("\n you are in A1");
}
void A2()
{
    printf("\n you are in A2");
}
void B(void (*p)())
{
    (*p)();
}
main()
{
    B(& A1);
    B(& A2);
}
