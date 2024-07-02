#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a value:";
    cin>>x;
    string a,b;
    a="-";
    while (x!=1)
    {
    cout<<"\n"<<a<<"_______";
    a=a+"-";
     x=x-1;
    }
    return 0;
}
