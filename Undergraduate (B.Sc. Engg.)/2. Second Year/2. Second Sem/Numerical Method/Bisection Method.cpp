//
// Created by Ray on 12/6/2021.
//

/*
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
    return (x*x-3);
}

int main()
{
    double a,b,x;

    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    cout<<endl<<left<<fixed<<setw(12)<<"Iteration"<<setw(8)<<"a"<<setw(8)<<"b"<<setw(12)<<"F(a)"<<setw(12)<<"F(b)"<<setw(8)<<"x"<<setw(12)<<"F(x)"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    for (int i = 0; i <1000; ++i)
    {
        x=(a+b)/2;

        cout<<setprecision(4)<<left<<fixed<<setw(12)<<i+1<<setw(8)<<a<<setw(8)<<b<<setw(12)<<f(a)<<setw(12)<<f(b)<<setw(8)<<x<<setw(12)<<f(x)<<endl;

        if(abs(f(x))<=0.0001)
        {
            break;
        }
        else if(f(a)*f(x)<0)
        {
            b=x;
        }
        else
        {
            a=x;
        }
    }

    cout<<endl<<"Root: "<<setprecision(5)<<x<<endl;

    return 0;
}*/
