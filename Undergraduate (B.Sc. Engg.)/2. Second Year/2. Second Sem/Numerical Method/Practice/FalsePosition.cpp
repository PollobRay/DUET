//
// Created by pollob on 4/22/2021.
//


#include <iostream>
#include <cstring>
using namespace std;
/*
int a,b,c;

double f(double x)
{
    return (a*x*x)+(b*x)+c;
}

void printDotedLine()
{
    for (int i = 0; i <75; ++i)
    {
        cout<<"-";
    }
    cout<<endl;
}

int main()
{
    double x1,x2,x0,fx1,fx2,fx0;
    int step=1;
    char chFX0[20],chFX0n[20];

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
    printf("%8s","|StepNo|");
    printf("%9s"," x1 |");
    printf("%9s"," f(x1) |");
    printf("%9s"," x2 |");
    printf("%9s"," f(x2) |");
    printf("%13s","x0=(x1+x2)/2|");
    printf("%9s"," f(x0) |");
    printf("%9s","Dissicon|\n");
    printDotedLine();
    //end header
    while (step<=50)
    {

        fx1=f(x1);
        fx2=f(x2);
       // x0=x1-((fx1*(x2-x1))/(fx2-fx1));
        x0=(x1*fx2-x2*fx1)/(fx2-fx1);
        fx0=f(x0);

        sprintf(chFX0,"%.3lf",fx0);
        sprintf(chFX0n,"%.4lf",fx0);

        //printing data
        printf("%2s","| ");
        printf("%4d",step);
        printf("%2s"," |");

        printf("%7.4lf",x1);
        printf("%2s"," |");

        printf("%7.4lf",fx1);
        printf("%2s"," |");

        printf("%7.4lf",x2);
        printf("%2s"," |");

        printf("%7.4lf",fx2);
        printf("%2s"," |");

        printf("%11.4lf",x0);
        printf("%2s"," |");

        printf("%7.4lf",fx0);
        printf("%2s"," |");

        //printing end
        //if((strcmp(chFX0,"0.000")==0)||(strcmp(chFX0n,"-0.0000")==0))
       // {
       //     cout<<endl;
       //     printDotedLine();
       //     break;
       // }
        if (fx0*fx1<0)
        {
            x2=x0;

            printf("%7s","x2=x0");
            printf("%2s"," |\n");
        }
        else
        {
            x1=x0;

            printf("%7s","x1=x0");
            printf("%2s"," |\n");
        }
        //
        if (fx0==0.0)
            break;
        //
        printDotedLine();

        step++;
    }
    cout<<endl<<endl<<"Approximate Root: ";
    printf("%7.4lf\n",x0);

    return 0;
}
*/