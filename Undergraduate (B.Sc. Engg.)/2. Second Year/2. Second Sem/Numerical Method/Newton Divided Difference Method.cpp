//
// Created by Ray on 1/27/2022.
//


/*
#include<iostream>
using namespace std;

int main()
{
    int m; // number of point
    float x[100];// to store value of x
    float y[100];// to store value of f(x)
    float yy[100];//to store temporary y
    float D[100];// to store divided difference
    float px; //point to find f(x)
    double py; // desired y
    double factor=1;// multiplication factor

    //getting input
    cout<<"Number of points: ";
    cin>>m;
    for (int i = 1; i <=m ; ++i)
    {
        cout<<"x"<<i-1<<" : ";
        cin>>x[i];
        cout<<"f(x"<<i-1<<") : ";
        cin>>y[i];
    }
    cout<<"X :";
    cin>>px; //desired point

    py=y[1]; //initially store first value of y or f(x0)

    //calculate divided difference
    for (int i = 1; i <m ; ++i)
    {
        for (int j = 1; j <=m-i ; ++j)
        {
            yy[j]=(y[j+1]-y[j])/(x[i+j]-x[j]);
        }
        D[i]=yy[1]; //getting divided difference
        copy(yy+1,yy+m+1,y+1);//copy values of yy to y
    }

    //calculate y
    for (int i = 1; i <m ; ++i)
    {
        factor=factor*(px-x[i]); //factor represent (x-x0)(x-x1)
        py=py+factor*D[i]; //summation
    }

    cout<<"Y : "<<py<<endl;

    return 0;
}
*/

