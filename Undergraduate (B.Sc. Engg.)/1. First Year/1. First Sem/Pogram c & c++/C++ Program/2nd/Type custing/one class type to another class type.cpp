#include<iostream>
using namespace std;
class product;
class item
{
private:
    int a,b;
public:
    void showdata()
    {
        cout<<"  "<<a<<b;
    }
    item(product p)
    {
        a=p.getm();
        b=p.getn();
    }
    item()
    {

    }
};
class product
{
private:
    int m,n;
public:
     void setdata(int x,int y)
     {
         m=x;
         n=y;
     }
     int getm()
     {
         return(m);
     }
     int getn()
     {
         return (n);
     }
};
int main()
{
    product p;
    item i;

    p.setdata(3,4);
    i=p;
    i.showdata();
}
