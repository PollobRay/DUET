#include<stdio.h>
int main()
{
    FILE *f,*f1,*f2;
    int i;
    f=fopen("number.txt","r");
    f1=fopen("odd.txt","w");
    f2=fopen("even.txt","w");

    while((i=getw(f))!=EOF)
    {
        if(i%2==0)
            putw(i,f2);
        else
            putw(i,f1);
    }

    fclose(f);
    fclose(f1);
    fclose(f2);
    return 0;
}
