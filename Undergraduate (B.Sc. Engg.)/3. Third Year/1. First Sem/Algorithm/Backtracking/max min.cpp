//
// Created by Ray on 8/2/2022.
//

/*
#include <iostream>
using namespace std;

int a[500];

void MaxMin(int i,int j,int &max,int &min)
{
    if(i==j)
        max=min=a[i];
    else if(i==j-1)
    {
        if(a[i]<a[j])
        {
            max=a[j];
            min=a[i];
        }
        else
        {
            max=a[i];
            min=a[j];
        }
    }
    else
    {
        int mid=(i+j)/2;

        int max1;
        int min1;

        MaxMin(i,mid,max,min);
        MaxMin(mid+1,j,max1,min1);

        if(max<max1)
            max=max1;
        if(min>min1)
            min=min1;
    }
}

int main()
{

    int n;
    int max,min;

    cin>>n;

    for (int i = 1; i <=n ; ++i)
    {
        cin>>a[i];
    }

    MaxMin(1,n,max,min);

    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;

    return 0;
}*/
