main()
{
    int x=0,y=0;
    if(x++ && y++) // its flase

        /*
        x=0 y=0
        0=false 1=true
        if(x++ && y++)
                       here if (false && false)

        flase


        its false but x++ is execute and x=1

        */
        printf("X=%d  Y=%d",x,y);
    else
         printf("Y=%d  X=%d",y,x);//true
}
