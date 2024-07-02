#include<iostream>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    void settime(int,int,int);
    void showtime();
    void normalize();
    time add(time t)
    {
        time temp;
        temp.s=s+t.s;
        temp.m=m+t.m;
        temp.h=h+t.h;
        temp.normalize();
        return(temp);
    }
};
void time::settime(int hr,int mr,int sr)
{
    h=hr;
    m=mr;
    s=sr;
}
void time::showtime()
{
    cout<<endl<<h<<" : "<<m<<" : "<<s;
}
void time::normalize()
{
    m=m+s/60;
    s=s%60;
    h=h+m/60;
    m=m%60;
}
int main()
{
 time t1,t2,t3;
 t1.settime(4,35,26);
 t2.settime(3,50,45);
 t3=t1.add(t2);// same as t3=t1+t2
 t1.showtime();

 t2.showtime();
 t3.showtime();
}

