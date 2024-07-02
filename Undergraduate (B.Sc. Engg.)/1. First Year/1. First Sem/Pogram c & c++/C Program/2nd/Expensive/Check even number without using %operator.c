main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    if(x&1)//& its bitwise and
        /*
        bit    x=4=0000 0000 0000 0000 0000 0000 0000 0100
        its check x veriable last bit 1 or not
        if last bit=1 then its odd number
        else
        its even number
        */
    {
        printf("\nIts odd number");
    }
    else
        printf("\n Its even number");
}
