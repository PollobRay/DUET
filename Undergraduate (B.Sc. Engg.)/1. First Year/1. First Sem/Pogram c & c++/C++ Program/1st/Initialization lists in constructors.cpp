#include<iostream>
using namespace std;
class Base
{
    int a;
public:
    Base(int x)
    {
        a=x;
    }
    void dispa(void)
    {
        cout<<"\Value of a:"<<a;
    }
};
class derived:public Base
{
    int b;
public:
    derived(int x,int y):Base(x),b(y)//here base.a=x y=b
    {
        cout<<"\nDerived class constructor";
    }
    void disp(void)
    {
        cout<<"\nValue of b:"<<b;
    }
};
int main()
{
derived obj(10,20);
obj.dispa();
obj.disp();
return 0;
}
