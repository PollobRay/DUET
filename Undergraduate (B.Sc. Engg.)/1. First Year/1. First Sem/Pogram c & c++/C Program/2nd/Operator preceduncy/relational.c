main()
{
    int x;
    x=3>4;// false =0
    //relatioal operator is work first then assigment
    printf("%d ",x);//0
    x=4!=3;// here x=(4!=3)  it's true =1
    printf("%d ",x);//1
    x=5>4>3;//here it's work left to right  mens 5>4>3 1>3 false 0
    printf("%d ",x);//0
}
