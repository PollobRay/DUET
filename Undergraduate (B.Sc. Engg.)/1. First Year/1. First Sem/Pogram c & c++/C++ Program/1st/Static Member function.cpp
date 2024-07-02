#include<iostream>
using namespace std;
class test
{
    int no;
    static int count;
public:
    void setno(void);
    void disno(void);
    static void dispcount(void);
};
void test::setno(void)
{
    no=++count;
}
void test::disno(void)
{
    cout<<"\nObject number :"<<no;
}
void test::dispcount(void)
{
    cout<<"\nCounter :"<<count;
}
int test::count;
int main()
{
test t1,t2;
t1.setno();
t2.setno();
test::dispcount();//call
test t3;
t3.setno();
test::dispcount();
t1.disno();
t2.disno();
t3.disno();
return 0;
}
