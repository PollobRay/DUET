#include<iostream>
using namespace std;
int main()
{
int a[20],siz,i,j,temp,swa;
cout<<"Enter the size of array element:";
cin>>siz;
cout<<"\nEnter"<<siz<<"Value of array element:";
for(i=0;i<siz;i++)
{
    cin>>a[i];
}
for(i=0;i<(siz-1);i++)
{
    swa=0;
    for(j=0;j<((siz-i)-1);j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            swa=1;
        }
    }
    if(swa==0)
    {
        break;
    }
}
cout<<"\n array element after bubble sort\n";
for(i=0;i<siz;i++)
{
    cout<<" "<<a[i];
}

return 0;
}
