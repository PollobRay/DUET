//
// Created by Ray on 12/20/2021.
//

/*
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
    return (27*x*x*x-3*x+1);
}

int main()
{
    double x1,x0,x;

    cout<<"x0: ";
    cin>>x0;
    cout<<"x1: ";
    cin>>x1;

    cout<<endl<<left<<fixed<<setw(12)<<"Iteration"<<setw(8)<<"x0"<<setw(8)<<"x1"<<setw(12)<<"F(x0)"<<setw(12)<<"F(x1)"<<setw(8)<<"x"<<setw(12)<<"F(x)"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    for (int i = 0; i <1000; ++i)
    {
        if(f(x1)==f(x0))
        {
            cout<<"Error "<<endl;
            exit(1);
        }
        x=x1-((f(x1)*(x1-x0))/(f(x1)-f(x0)));

        cout<<setprecision(4)<<left<<fixed<<setw(12)<<i+1<<setw(8)<<x0<<setw(8)<<x1<<setw(12)<<f(x0)<<setw(12)<<f(x1)<<setw(8)<<x<<setw(12)<<f(x)<<endl;

        if(abs(f(x))<=0.0001)
        {
            break;
        }
        x0=x1;
        x1=x;
    }

    cout<<endl<<"Root: "<<setprecision(5)<<x<<endl;

    return 0;
}
*/
