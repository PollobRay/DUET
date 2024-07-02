main()
{
    int x=010;//here compiler think it is octal value     decimal 010=8 octal and initilize 8
    for(x-1;x>0;x-=2)
    /*   |
    compiler ignore it

    */
        printf("%d   ",x);
}
