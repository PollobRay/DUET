#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
int a,b;
cout<<"Enter the value of a & b:";
cin>>a>>b;
cout<<"\nbefore swaping"<<"\nA:"<<a<<"\nB:"<<b;
swap(a,b);
cout<<"\nAfter swapping:";
cout<<"\nA:"<<a<<"\nB:"<<b;
return 0;
}
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
