//
// Created by Ray on 2/16/2022.
//
/*
#include<iostream>
#include<cmath>
using namespace std;

double f1(double x) // 1st function
{
    return sqrt(4+(x*x*x)); //f(x)
}

double f2(double x) // 2nd function
{
    return sin(M_PI*x)*sin(M_PI*x); // sin^2(Pi*x)
}


double trapeziodalRule(double (*f)(double),int a,int b,int n)// function address, lower limit, upper limit, number of block
{
    float h=(float)(b-a)/n;
    double x=a;
    double result=0;

    //printing
    cout<<"\n using trapeziodal rule: \n";
    cout<<"\tx: ";
    for (int i = 1; i <=n+1 ; ++i)
    {

      cout<<"\t"<<x;
      x=x+h;
    }
    cout<<"\n\tf(x): ";
    x=a;
    for (int i = 1; i <=n+1 ; ++i)
    {
        cout<<"\t"<<f(x);
        x=x+h;
    }
    cout<<"\n";
    // end printing

    //calculation
    x=a;
    for (int i = 1; i <=n+1; ++i)
    {
        if(i==1||i==n+1)
            result=result+ f(x);
        else
            result=result+2*f(x);
        x=x+h;
    }
    result=result*(h/2.0);

    return result;
}

double simpsons1_3Rule(double (*f)(double),int a,int b,int n)// function address, lower limit, upper limit, number of block
{
    float h=(float)(b-a)/n;
    double x=a;
    double result=0;

    //printing
    cout<<"\n using Simposon's 1/3 rule: \n";
    cout<<"\tx: ";
    for (int i = 1; i <=n+1 ; ++i)
    {

        cout<<"\t"<<x;
        x=x+h;
    }
    cout<<"\n\tf(x): ";
    x=a;
    for (int i = 1; i <=n+1 ; ++i)
    {
        cout<<"\t"<<f(x);
        x=x+h;
    }
    cout<<"\n";
    // end printing

    x=a;
    //calculation
    for (int i = 0; i <=n; ++i)
    {
        if(i==0||i==n)//if x is lower limit or upper limit
            result=result+ f(x);
        else if(i & 1)//if i is odd
            result=result+4*f(x);
        else//if i is and even point
            result=result+2*f(x);
        x=x+h;
    }
    result=result*(h/3);

    return result;
}

double simpsons3_8Rule(double (*f)(double),int a,int b,int n)// function address, lower limit, upper limit, number of block
{
    float h=(float)(b-a)/n;
    double x=a;
    double result=0;

    //printing
    cout<<"\n using Simposon's 3/8 rule: \n";
    cout<<"\tx: ";
    for (int i = 1; i <=n+1 ; ++i)
    {

        cout<<"\t"<<x;
        x=x+h;
    }
    cout<<"\n\tf(x): ";
    x=a;
    for (int i = 1; i <=n+1 ; ++i)
    {
        cout<<"\t"<<f(x);
        x=x+h;
    }
    cout<<"\n";
    // end printing

    x=a;
    //calculation
    for (int i = 0; i <=n; ++i)
    {
        if(i==0||i==n)//if x is lower limit or upper limit
            result=result+ f(x);
        else if(i % 3==0)//if i is divisible by 3
            result=result+2*f(x);
        else
            result=result+3*f(x);
        x=x+h;
    }
    result=result*(h*3.0/8.0);

    return result;
}
int main()
{
    double tr,s1r,s3r;
    double actual;//actual result

    //for 1st function
    // integrate sqrt(4+x^3) from 0 to 3
    cout<<"\n1st function\n";
    cout<<"integrate sqrt(4+x^3) from 0 to 3 & number of division 6\n";

    tr=trapeziodalRule(f1,0,3,6); //address of function, lower limit, upper limit, number of division
    cout<<"Result: "<<tr<<endl;

    s1r=simpsons1_3Rule(f1,0,3,6);//address of function, lower limit, upper limit, number of division
    cout<<"Result: "<<s1r<<endl;

    s3r=simpsons3_8Rule(f1,0,3,6);//address of function, lower limit, upper limit, number of division
    cout<<"Result: "<<s3r<<endl<<endl;

    actual=9.27972;//actual result
    cout<<"Actual result: "<<actual<<endl;
    cout<<"Error in trapezoidal rule :"<<abs(actual-tr)<<endl;
    cout<<"Error in simpson's 1/3 rule :"<<abs(actual-s1r)<<endl;
    cout<<"Error in simpson's 3/8 rule :"<<abs(actual-s3r)<<endl<<endl;


    //2nd function
    cout<<"\n2nd function\n";
    cout<<"integrate (sin(PI*x))^2 from 0 to 1 & number of division 3\n";

    tr=trapeziodalRule(f2,0,1,3);//address of function, lower limit, upper limit, number of division
    cout<<"Result: "<<tr<<endl;

    s1r=simpsons1_3Rule(f2,0,1,3);//address of function, lower limit, upper limit, number of division
    cout<<"Result: "<<s1r<<endl;

    s3r=simpsons3_8Rule(f2,0,1,3);//address of function, lower limit, upper limit, number of division
    cout<<"Result: "<<s3r<<endl<<endl;

    actual=0.5;//actual result
    cout<<"Actual result: "<<actual<<endl;
    cout<<"Error in trapezoidal rule :"<<abs(actual-tr)<<endl;
    cout<<"Error in simpson's 1/3 rule :"<<abs(actual-s1r)<<endl;
    cout<<"Error in simpson's 3/8 rule :"<<abs(actual-s3r)<<endl<<endl;


    return 0;
}
*/