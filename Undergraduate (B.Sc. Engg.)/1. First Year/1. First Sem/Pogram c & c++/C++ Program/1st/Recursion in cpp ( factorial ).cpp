#include<iostream>
using namespace std;
long fact(int);
int main()
{
int no;
cout<<"Enter a number:";
cin>>no;
cout<<"\nFactorial of : "<<no<<" is :"<<fact(no);
return 0;
}
long fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    return (x*fact(x-1));
}
