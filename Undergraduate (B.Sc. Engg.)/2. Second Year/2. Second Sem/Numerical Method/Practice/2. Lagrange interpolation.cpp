//
// Created by pollo on 5/26/2021.
//


/*
#include <stdio.h>

struct point
{
    double xi;
    double fxi;
};


int main()
{
    struct point p[100];
    int i,j,termsNo;
    double x,fx=0;
    double term;


    printf("Enter the number of terms of the table: ");
    scanf("%d",&termsNo);

    printf("Enter the respective value of x & f(x)\n");
    for (i = 0; i <termsNo ; ++i)
    {
        printf("x%d: ",i);
        scanf("%lf",&p[i].xi);
        printf("f(x%d): ",i);
        scanf("%lf",&p[i].fxi);
    }
    printf("\nEnter interpolation point (x): ");
    scanf("%lf",&x);

    for (i = 0; i <termsNo ; ++i)
    {
        term=p[i].fxi;
        for (j = 0; j <termsNo ; ++j)
        {
            if (i==j)
            {

            }
            else
            {
                term=term*((x-p[j].xi)/(p[i].xi-p[j].xi));
            }
        }

        fx=fx+term;
    }

    printf("\nInterpolated value at (x): %.4lf ",x);
    printf("is f(x): %.8lf\n",fx);


    return 0;
}
*/
