#include<iostream>
using namespace std;
int sum=100;
int main()
{
int sum=50;
cout<<"Value of sum"<<sum;
cout<<"\nValue of global verable"<<::sum;//global veriable
return 0;
}
