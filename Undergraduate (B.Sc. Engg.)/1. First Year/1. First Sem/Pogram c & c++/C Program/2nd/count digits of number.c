main()
{

    int count=0,x;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("\nToatal digits: %d",count);
}
