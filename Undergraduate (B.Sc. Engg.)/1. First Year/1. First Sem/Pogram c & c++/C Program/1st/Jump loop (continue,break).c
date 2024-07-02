#include<stdio.h>
main()
{
    int i;
    for(i=1;i<=10;i++)
    {

        if(i==3)
        {
            continue; // tis loop is be continue & exit from blow statement
        }
        if(i==5)
        {
            break;// this loop exit from here
        }
        printf("\n%d",i);

    }
}
