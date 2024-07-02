#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x)//constructor
    {
        a=x;
        cout<<"\nA class constroctor";
    }
    void dispa(void)
    {
        cout<<"Value of a:"<<a;
    }
};
class B
{
    int b;
public:
    B(int y)
    {
        b=y;
        cout<<"\n B Class constructor";
    }
    void dispb(void)
    {
        cout<<"\nValue of b:"<<b;
    }
};
class C:public B,public A
{
    int m;
public:
    C(int x,int y,int z):A(x),B(y)//here x=A.x y=B.y initilize
    {
        m=z;
        cout<<"\nclass c constructor";
    }
    void sidpm()
    {
        cout<<"value of m:"<<m;
    }
};
int main()
{
C obj(10,20,30);
obj.dispa();
obj.dispb();
obj.sidpm();
return 0;
}
