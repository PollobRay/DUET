#include<iostream>
using namespace std;
class test{
int a,b,c;
public:
    void getdata(int x,int y,int z);
    void operator+();
    void disp();

};
void test::getdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void test::operator+()
{
    a=-a;
    b=-b;
    c=-c;
}
void test::disp()
{
    cout<<"\nVlaue of A:"<<a;
    cout<<"\nvalue of B:"<<b;
    cout<<"\nValue of c:"<<c;
}
int main()
{
test obj;
obj.getdata(-10,20,30);
obj.disp();
obj.operator+();
obj.disp();
return 0;
}
