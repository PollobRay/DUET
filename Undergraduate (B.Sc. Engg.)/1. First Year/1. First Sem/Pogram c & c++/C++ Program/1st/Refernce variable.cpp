#include<iostream>
using namespace std;
int main()
{
int a=100;
int *ref=&a;
cout<<"Value of A:"<<a;
cout<<"\nValue of ref:"<<ref;
cout<<"\nAddress of A:"<<&a;
cout<<"\nAddress of ref:"<<&ref;
return 0;
}
