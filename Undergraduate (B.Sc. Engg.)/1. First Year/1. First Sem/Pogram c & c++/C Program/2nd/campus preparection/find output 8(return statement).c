int max(int a,int b);
main()
{
    printf("%d",max(5,6));
}
int max(int a,int b)
{
    a>b?return(a):return(b);//have error
    /*
    here
    return(a>b?a:b);  it is right
    */
}

