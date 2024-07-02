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
 time t;
 t.settime(4,100,100);
 t.showtime();
 t.normalize();
 t.showtime();
}
