#include<iostream>
using namespace std;
class sum
{
int a,b,t;
public:
    void getdata(void);
    void putdata(void);
};
void sum::getdata(void)
{
    cout<<"Enter the values of A & B:";
    cin>>a>>b;
}
void sum::putdata(void)
{
    t=a+b;
    cout<<"\nEAdition of a&b:"<<t;
    cin>>a>>b;
}
int main()
{
sum obj;
obj.getdata();
obj.putdata();
return 0;
}
