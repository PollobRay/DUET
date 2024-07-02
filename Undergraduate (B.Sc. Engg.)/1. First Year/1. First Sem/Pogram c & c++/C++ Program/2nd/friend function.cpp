#include<iostream>
using namespace std;
class B;
class A
{
private:
    int a=10;
public:
    friend void fun(A,B);//declare
};
class B
{
private:
    int b=20;
public:
    friend void fun(A,B);//declare
};
void fun(A o1,B o2)//define
{
    cout<<"\n sun is:"<<o1.a+o2.b;
}
int main()
{
A obj1;
B obj2;
fun(obj1,obj2);//call
return 0;
}
