#include<iostream>
using namespace std;
int main()
{
int a[20],siz,i,j,temp;
cout<<"Enter array size:";
cin>>siz;
cout<<"\n Enter "<<siz<<" value :";
for(i=0;i<siz;i++)
{
    cin>>a[i];
}
for(i=0;i<siz;i++)
{
    temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
cout<<"\nArray after insertion sort:\n";
for(i=0;i<siz;i++)
{
    cout<<" "<<a[i];
}
return 0;
}
