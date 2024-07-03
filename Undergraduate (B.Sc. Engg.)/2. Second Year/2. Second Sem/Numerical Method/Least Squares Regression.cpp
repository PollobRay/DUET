//
// Created by Ray on 2/3/2022.
//


/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N; //number of data set
    float x[200];
    float y[200];
    float Sx=0;// summation of x
    float Sy=0;// summation of x
    float Sxx=0;// summation of x*x
    float Sxy=0;// summation of x*y
    float m; //slope
    float b; //intercept
    float x1;// point of x where to find value
    float y1;//desired value of y

    cout<<"Enter number of values : ";
    cin>>N;

    //getting input of x and y
    cout<<"Enter values of x and y"<<endl;

    for (int i = 0; i <N; ++i)
    {
        cout<<"X"<<i+1<<" : ";
        cin>>x[i];
        cout<<"Y"<<i+1<<" : ";
        cin>>y[i];
    }

    //printing values
    cout<<"\n\n"<<setw(20)<<"X"<<setw(15)<<"Y"<<setw(15)<<"X*X"<<setw(15)<<"X*Y"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    for (int i = 0; i <N ; ++i)
    {
        cout<<setw(20)<<x[i]<<setw(15)<<y[i]<<setw(15)<<x[i]*x[i]<<setw(15)<<x[i]*y[i]<<endl;
        Sx=Sx+x[i];
        Sy=Sy+y[i];
        Sxx=Sxx+(x[i]*x[i]);
        Sxy=Sxy+(x[i]*y[i]);
    }
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<setw(13)<<"Summation = "<<setw(7)<<Sx<<setw(15)<<Sy<<setw(15)<<Sxx<<setw(15)<<Sxy<<endl;

    m=((Sxy*N)-(Sx*Sy))/((N*Sxx)-(Sx*Sx));

    b=(Sy-(m*Sx))/N;

    cout<<"\n\n"<<"m : "<<m;
    cout<<"\n"<<"b : "<<b<<endl;

    cout<<"\nX : ";
    cin>>x1;

    y1=(m*x1)+b;

    cout<<"Y : "<<y1<<endl;


    return 0;
}
*/


