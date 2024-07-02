#include<iostream>
using namespace std;
class A
{
public:
    virtual void disp()=0;

};
class B:public A
{
    int val1;
public:
    B(int x)
    {
        val1=x;
    }
    void disp()
    {
        cout<<"\nval1 of class B"<<val1;
    }
};
class C:public A
{
    int val2;
public:
    C(int x)
    {
        val2=x;
    }
    void disp()
    {
        cout<<"\nval2 of class c"<<val2;
    }
};
int main()
{
A*bp[2];
B objb(100);
C objc(200);
bp[0]=&objb;
bp[1]=&objc;
bp[0]->disp();
bp[1]->disp();
return 0;
}
