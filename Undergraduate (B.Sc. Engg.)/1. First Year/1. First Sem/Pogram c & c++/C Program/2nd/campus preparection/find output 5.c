main()
{
    int a=1,b=1;
    if(a-- || b-- && ++a)
        /*
    here
    if(a-- || b-- && ++a)
        |   |
    true    not check from here and not execute

        */
        printf("%d   %d",a,b);//true
    else
        printf("%d   %d",b,a);
}
