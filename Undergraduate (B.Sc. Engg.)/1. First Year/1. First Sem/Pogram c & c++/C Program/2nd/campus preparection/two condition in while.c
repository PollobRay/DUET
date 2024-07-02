main()
{
    int a=1,b=0,c=0;
    while(a>b>c)

        /*
        here
        a>b>c
        a>b
        1>0
        1>c
        1>0
        1
        and true


        */
        b=(a+b+c);
    ++a;
    printf("%d   %d %d",a,b,c);
}
