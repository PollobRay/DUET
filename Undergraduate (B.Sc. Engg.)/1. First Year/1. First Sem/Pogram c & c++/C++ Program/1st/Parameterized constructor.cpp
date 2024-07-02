#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    void disp(void)
    {
        cout<<"\nValue of A:"<<a;
        cout<<"\nValue of B:"<<b;
    }
};
int main()
{
test t(100,200);//call constructor
t.disp();
return 0;
}
