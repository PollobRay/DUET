#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void getval_a(int);
    int get_a();
};
class B:public A
{
    int b,c;
public:
    void getval_b(int);
    void add();
    void dispval();
};
void A::getval_a(int x)
{
    a=x;
}
int A::get_a()
{
    return a;
}
void B::getval_b(int x)
{
    b=x;
}
void B::add()
{
    c=get_a();
    c=c+a;
}
void B::dispval()
{
    cout<<"\nValue of A:"<<get_a();
    cout<<"\nValue of B:"<<b;
    cout<<"\nValue of C:"<<c;
}
int main()
{
B obj;
obj.getval_a(100);
obj.getval_b(200);
obj.add();
obj.dispval();
return 0;
}
