/*

1.unary   +,-,++,--,sizeof()
2.arithmetic
3.bitwise
4.logical
6.conditional
7.assigment

*/

main()
{
    int x=3,y;
    y=x++;//y=3  x=4 here fist initilize then increse
    y=++x;//y=4 x=4 here increce first then initilize

    int a,b;
    a=sizeof(float);//8
    printf("%d",a);//8
    b=sizeof(34);//4
    b=sizeof(3.35);//16  here compiler think ti is a double value
    b=sizeof('a');//4 character
    /*
    * / % first
    ++ second
    */
    int d,e;
    d=3+4;// 7
    d=3.0/4; //0.75 compiler think it is float number
    d=3/4.0;//0.75
    d=3.0/4.0;//0.75
}
