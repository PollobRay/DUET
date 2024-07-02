#include<iostream>
using namespace std;
class base
{
public:
    void disp(void)
    {
        cout<<"Base class";
    }
    virtual void show(void)
    {
        cout<<"\nBase class show";
    }
};
class derived:public base
{
    //public:
    void disp(void)
    {
        cout<<"\nDerived class disp";
    }
    void show(void)
    {
        cout<<"\nDerived class show";
    }
};
int main()
{
base *p;
base objb;
derived objd;
p=&objb;
p->disp();
p->show();
p=&objd;
p->disp();
p->show();
return 0;
}
