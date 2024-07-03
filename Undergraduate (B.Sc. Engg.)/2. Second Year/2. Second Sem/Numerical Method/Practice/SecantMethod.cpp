//
// Created by pollob on 4/23/2021.
//

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

/*
int a,b,c;


double f(double x)
{
    return (a*x*x)+(b*x)+c;
}

void printDotedLine()
{
    for (int i = 0; i <77; ++i)
    {
        cout<<"-";
    }
    cout<<endl;
}

int main()
{
    double x1,x2,x3,fx1,fx2,xm;
    int step=1;
    char chX2[20],chX3[20];

    //input
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"x1: ";
    cin>>x1;
    cout<<"x2: ";
    cin>>x2;
    //end input

    //print header
    printDotedLine();
    printf("%11s","| Step No |");
    printf("%13s"," x1 |");
    printf("%13s"," f(x1) |");
    printf("%13s"," x2 |");
    printf("%13s"," f(x2) |");
    printf("%13s"," x3 |\n");

    printDotedLine();
    //end header
    while (step<=50)
    {

        fx1=f(x1);
        fx2=f(x2);

        x3=((fx2*x1)-(fx1*x2))/(fx2-fx1);

        sprintf(chX2,"%.3lf",x2);
        sprintf(chX3,"%.3lf",x3);

        //printing data
        printf("%2s","| ");
        printf("%7d",step);
        printf("%2s"," |");

        printf("%11.4lf",x1);
        printf("%2s"," |");

        printf("%11.4lf",fx1);
        printf("%2s"," |");

        printf("%11.4lf",x2);
        printf("%2s"," |");

        printf("%11.4lf",fx2);
        printf("%2s"," |");

        printf("%11.4lf",x3);
        printf("%2s"," |\n");

        //printing end

        printDotedLine();


        x1=x2;
        x2=x3;

        //
        xm=((fx2*x1)-(fx1*x2))/(fx2-fx1);
        if (fabs(xm-x3)<0.0001)
            break;
        //
        step++;
    }
    cout<<endl<<endl<<"Approximate Root: "<<chX3;



    return 0;
}
*/


