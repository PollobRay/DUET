 void convert (int num, int base)
{
    int rem = num%base;

    if(num==0)
        return;
        printf("%d\n",rem);
    convert(num/base, base);

    if(rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem-10+'A' );
}
int main()
{
int i;
convert(15,8);
 /*for(i=0; i<=16; i++)
    {
        printf("\nBinary number :: ");
        convert(i, 2);
        printf("\t");
        printf("\nOctal number :: ");
        convert(i, 8);
        printf("\t");
        printf("\nHexadecimal number :: ");
        convert(i, 16);
        printf("\n");
    }*/
}
