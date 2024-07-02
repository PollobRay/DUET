#include<iostream>
using namespace std;
class Base
{
protected:
    int b;
public:
    void setb(int x)
    {
        b=x;
    }
    void disp(void)
    {
        cout<<"\nBase class";
        cout<<"\nValue of b:"<<b;


    }
};
class Derived:public Base

{
    int d;
public:
    void setd(int y)
    {
        d=y;
    }
    void disp()
    {
        cout<<"\nDerived class:";
        cout<<"\nVlaue of d:"<<d;
        cout<<"\nVlaue of b:"<<b;
    }
};
int main()
{
Base *bp;
Base b;
bp=&b;
bp->setb(100);
cout<<"\n B points to base obj";
bp->disp();
Derived d;
bp=&d;
bp->setb(500);
cout<<"\b point derived";
Derived *dp;
dp=&d;
dp->disp();

dp->setd(500);
cout<<"\nDerived type pointer";
dp->disp();
((Derived*)bp)->disp();
((Derived*)bp)->setd(300);
((Derived*)bp)->disp();
return 0;
}
