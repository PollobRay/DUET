#include<iostream>
using namespace std;

template <class x> // x is place holder  here that value pass it's behaive like this value
x big(x a,x b)
{
    if(a>b)
        return(a);
    else
        return(b);
}
int main()
{
    cout<<big(8,9)<<endl;// here its work integer type
    cout<<big(5.6,3.2)<<endl;//here it's work float type
}
