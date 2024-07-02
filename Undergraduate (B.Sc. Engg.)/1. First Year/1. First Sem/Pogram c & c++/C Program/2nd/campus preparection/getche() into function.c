char f1(char ch);
main()
{
    printf("%c",f1(getche()));
}
char f1(char ch)
{
    if(ch==32)//space=32
        return ('\n');
    printf("%c",f1(getche()));
    return(ch);
}
