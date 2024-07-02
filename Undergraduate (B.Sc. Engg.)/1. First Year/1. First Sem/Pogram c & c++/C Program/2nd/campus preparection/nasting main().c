main()
{
    static int x;
    if(x++<2)
    {
        printf("%d",x);//12
        main();
    }
}
