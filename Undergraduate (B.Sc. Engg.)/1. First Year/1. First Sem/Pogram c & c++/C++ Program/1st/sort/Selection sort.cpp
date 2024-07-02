#include<iostream>
using namespace std;
int main()
{
int ar[20],i,j,sie,temp,loc,mn;
cout<<"Enter array size:";
cin>>sie;
cout<<"\nEnter array "<<sie<<" element";
for(i=0;i<sie;i++)
{
    cin>>ar[i];
}
for(i=0;i<(sie-1);i++)
{
    mn=ar[i];
    loc=i;
    for(j=(i+1);j<sie;j++)
    {
        if(ar[j]<mn)
        {
            mn=ar[j];
            loc=j;
        }
    }
    temp=ar[i];
    ar[i]=ar[loc];
    ar[loc]=temp;
    cout<<"\nArray after selection sort";
    for(i=0;i<sie;i++)
    {
        cout<<ar[i]<<" ";
    }
}

return 0;
}
