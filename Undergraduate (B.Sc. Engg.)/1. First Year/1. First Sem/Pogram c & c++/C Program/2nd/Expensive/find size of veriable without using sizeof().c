main()
{
    int x;
    printf("size of x is: %d",(char*)(&x+1)-(char*)&x);
}
