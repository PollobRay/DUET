#include<iostream>
using namespace std;
class test
{
    int no;
    static int count;
public:
    void getdata(int);
    void dispcount(void);
};
void test::getdata(int x)
{
    no=x;
    cout<<"\nNumber :"<<no;
    count++;
}
void test::dispcount(void)
{
    cout<<"\nCounter :"<<count;
}
int test::count;
int main()
{
test t1,t2,t3;
t1.dispcount();
t2.dispcount();
t3.dispcount();
t1.getdata(100);
t2.getdata(200);
t3.getdata(300);
t1.dispcount();
t2.dispcount();
t3.dispcount();
return 0;
}
