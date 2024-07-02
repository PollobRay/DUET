main()
{

    int x,y,p=1,i;
    printf("Enter s number & power:");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("Result is:%d",p);
}
