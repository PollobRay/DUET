
//newton divided difference method


#include<iostream>
using namespace std;

int main()
{
    int m;
    float x[100];
    float y[100];
    float tempy[100];
    float Df[100];
    float px;
    double py;
    double factor=1;


    cout<<"m : ";
    cin>>m;
    for (int i = 1; i <=m ; ++i)
    {
        cout<<"x"<<i-1<<" : ";
        cin>>x[i];
        cout<<"f(x"<<i-1<<") : ";
        cin>>y[i];
    }
    cout<<"X :";
    cin>>px;

    py=y[1];


    for (int i = 1; i <m ; ++i)
    {
        for (int j = 1; j <=m-i ; ++j)
        {
            tempy[j]=(y[j+1]-y[j])/(x[i+j]-x[j]);
        }
        Df[i]=tempy[1];

        for (int j = 1; j <=m ; ++j)
        {
            y[j]=tempy[j];
        }
    }

   //root calculate
    for (int i = 1; i <m ; ++i)
    {
        factor=factor*(px-x[i]);
        py=py+factor*Df[i];
    }

    cout<<"Y : "<<py<<endl;

    return 0;
}
