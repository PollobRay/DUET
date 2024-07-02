#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    void getval(int x,int y)
    {
        a=x;
        b=y;
    }
    friend test sum(test,test);//return type & argument is objectsd here

    void display(test);
};
test sum(test t1,test t2)
{
    test t;
    t.a=t1.a+t2.a;
    t.b=t1.b+t2.b;
    return t;
}
void test::display(test t)
{
    cout<<"\n Value of A :"<<t.a;
    cout<<"\n Value of B :"<<t.b;
}
int main()
{
test A,B,C;
A.getval(10,20);
B.getval(30,40);
C=sum(A,B);
A.display(A);
B.display(B);
C.display(C);
return 0;
}
