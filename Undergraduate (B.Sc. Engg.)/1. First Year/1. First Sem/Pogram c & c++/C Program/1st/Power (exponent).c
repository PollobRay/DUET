#include<stdio.h>
#include<math.h>
main()
{
    int a=3,c,b=10,d;

    c=pow(a,3);// using pow() function
    printf("%d",c);

    // with out using Pow() function
    int l=0;
    d=b;
    while(l<d)
    {
        b=b*d;

        l++;
    }
    printf("%d",b);

}
