#include<iostream>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    void settime(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
    void showtime()
    {
        cout<<"\n"<<h<<":"<<m<<":"<<s;
    }
    int operator >(time t)
    {
        if(h>t.h)
            return(1);
        else if(h<t.h)
            return 0;
        else if(m>t.m)
        return(1);
        else if(m<t.m);
        else if(s>t.s)
            return (1);
        else
            return(0);
    }
};
int main()
{
    time t1,t2;
    t1.settime(2,30,15);
    t2.settime(3,15,10);
    if(t1>t2)
        t1.showtime();
    else
        t2.showtime();
return 0;
}
