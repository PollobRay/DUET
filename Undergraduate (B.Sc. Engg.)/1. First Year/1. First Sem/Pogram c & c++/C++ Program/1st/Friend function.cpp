#include<iostream>
using namespace std;
class A;
class B
{
    int b;
public:
    void getval(int x)
    {
        b=x;
    }
    void putval(void)
    {
        cout<<"\nvalue of B :"<<b;

    }
    friend void add(A,B);
};
class A
{
    int a;
public:
    void getval(int x)
    {
        a=x;
    }
    void putval(void)
    {
        cout<<"\nValue of A :"<<a;
    }
    friend void add(A,B);
};
void add (A obj1,B obj2)
{
    cout<<"\nAdition of A & B:"<<obj1.a+obj2.b;
}
int main()
{
A a;
B b;
a.getval(100);
b.getval(200);
a.putval();
b.putval();
add(a,b);
return 0;
}
