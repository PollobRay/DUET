#include<iostream>
using namespace std;
class base
{
public:
    virtual void disp()=0;//pure virtual class
};
class D:public base{
public:
void disp(void)
{
    cout<<"\nDerived class";

}
};
int main()
{
D obj;
obj.disp();
return 0;
}
