#include<stdio.h>
int main()
{
    float a,b,c,x,x1,x2,D,ai,iD;
    printf("Enter value a,b,c:");
    scanf("%f %f %f",&a,&b,&c);

    if(a==0&&b==0)
        printf("No solution");//
    else if(a==0)
    {//becomes linear equation
        x=c/b;
        printf("Root: %.2f",x);
    }
    else
    {
        D=(b*b)-(4*a*c);
        if(D==0)
        {
            //one root
            x=-b/(2*a);
        }
        else if(D<0)
        {
            printf("Roots are imaginary");
            D*=-1;
            printf("\n\(%.2f + i%.2f\)/ %.2f",-b,sqrt(D),2*a);
            printf("\n\(%.2f - i%.2f\)/ %.2f",-b,sqrt(D),2*a);

        }
        else
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            printf("\nX1= %.2f  x2= %.2f",x1,x2);
        }
    }
}
