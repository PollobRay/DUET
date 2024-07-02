#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main()
{
int a,b;
cout<<"Enter two number:";
cin>>a>>b;
cout<<"\nBefore swaping:";
cout<<"A:"<<a<<"\nB:"<<b;
swap(&a,&b);
cout<<"\nAfter swapping:";
cout<<"\nA:"<<a<<"\nB:"<<b;

return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
