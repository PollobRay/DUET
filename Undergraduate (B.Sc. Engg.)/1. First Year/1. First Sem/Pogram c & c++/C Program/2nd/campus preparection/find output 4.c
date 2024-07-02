main()
{
    int x=0,y=0;
    if(++x && y++) // its flase

        /*
        x=0 y=0
        0=false 1=true
        if(++x && y++)
                       here if (true && false)

        flase


        its true ++x is execute x=1 and y++ is false but its executes  y=1

        */
        printf("X=%d  Y=%d",x,y);
    else
         printf("Y=%d  X=%d",y,x);//true
}

