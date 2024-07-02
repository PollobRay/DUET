#include<iostream>
using namespace std;
inline int max(int x,int y)
{
    return ((x>y)?x:y);
}
int main()
{
int a,b;
cout<<"Enter two values:";
cin>>a>>b;
cout<<"\nGreater value is :"<<max(a,b);
return 0;
}
