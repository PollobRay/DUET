//conversion
#include<stdio.h>
long int binary(int);
long int octal(int);
char* hexadecimal(int);
int main()
{
    int i;

    printf("%15s%-12s%-12s%-12s%-12s","","Decimal","Binary","Octal","Hexadecimal");
    printf("\n%15s%-12s%-12s%-12s%-12s","","Number","Number","Number","Number");
   for(i=1;i<=16;i++)
    {
         printf("\n%15s%-12d%-12ld%-12ld%-12s","",i,binary(i),octal(i),hexadecimal(i));
    }


}

long int binary(int number)
{
    int i=1,rem;
    long int binary=0;
    while(number!=0)
    {
        rem=number%2;
        binary=(rem*i)+binary;
        number/=2;
        i*=10;
    }
    return binary;
}
long int octal(int number)
{
    int i=1,rem;
    long int octal=0;
    while(number!=0)
    {
        rem=number%8;
        octal=(rem*i)+octal;
        number/=8;
        i*=10;
    }
    return octal;
}
char* hexadecimal(int n)
{
    int i=1,rem;
    char c,ch[3],*p=ch;
    *p=' ';
    while(n!=0)
    {
        rem=n%16;
        n=n/16;
        switch(rem)
        {
        case 1:
            c='1';
            break;
        case 2:
            c='2';
            break;
        case 3:
            c='3';
            break;
        case 4:
            c='4';
            break;
        case 5:
            c='5';
            break;
        case 6:
            c='6';
            break;
        case 7:
            c='7';
            break;
        case 8:
            c='8';
            break;
        case 9:
            c='9';
            break;
        case 10:
            c='A';
            break;
        case 11:
            c='B';
            break;
        case 12:
            c='C';
            break;
        case 13:
            c='D';
            break;
        case 14:
            c='E';
            break;
        case 15:
            c='F';
            break;
        default:
            c='0';
        }
        *(p+i--)=c;

    }
    *(p+2)='\0';
    return p;
}
