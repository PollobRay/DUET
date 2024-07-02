#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter 2 number :";
cin>>a>>b;
int x=(a-b);
try
{
    if(x!=0)
    {
        cout<<"\nResult :"<<(a/(a-b));
    }
    else
    {
        throw(x);//send to catch(i)
    }
}
    catch(int i)
    {
        cout<<"\ndivision by zero";
    }
    cout<<"\nNest statement";


return 0;
}
