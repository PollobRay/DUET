#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<"   "<<b;
    }
    operator int()
    {
        return(a);
    }

};
int main()
{
    complex c;
    c.setdata(3,4);
    c.showdata();
    int x;
    x=c;
    cout<<"\nx:"<<x;
    return 0;
}
