#include<iostream>
using namespace std;
class A
{
    protected:
    int no;
public:
    void getno()
    {
        cout<<"\nEnter a number:";
        cin>>no;
    }
};
class B:public A
{
public:
    void square()
    {
        cout<<"\nSquare of the number:";
        cout<<(no*no);
    }
};
class C:public A
{
public:
    void cube()
    {
        cout<<"\nCobe of the number:"<<(no*no*no);
    }
};
int main()
{
B bobj;
C cobj;
bobj.getno();
bobj.square();
cobj.getno();
cobj.cube();
return 0;
}
