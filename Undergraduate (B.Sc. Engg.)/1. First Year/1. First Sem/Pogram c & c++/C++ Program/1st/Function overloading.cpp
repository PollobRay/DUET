#include<iostream>
using namespace std;
int cal(int);
int cal(int,int);
int main()
{
int s,a,b;
cout<<"Enter a number :";
cin>>s;
cout<<"\nSquare of : "<<s<<" is: "<<cal(s);
cout<<"\nEnter two number :";
cin>>a>>b;
cout<<"\nAddition is:"<<cal(a,b);
return 0;
}
int cal(int x)
{
    return(x*x);
}
int cal(int x,int y)
{
    return (x+y);
}
