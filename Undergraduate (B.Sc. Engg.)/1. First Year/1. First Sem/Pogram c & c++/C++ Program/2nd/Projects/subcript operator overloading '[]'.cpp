#include<iostream>
using namespace std;
class Array{
private:
    int a[10];
public:
    void insertindex(int index,int vlaue)
    {
        a[index]=vlaue;
    }
    int operator[](int index)
    {
        return(a[index]);
    }

};
int main()
{
    Array obj;
    int i;
    for(i=0;i<=9;i++)
        obj.insertindex(i,10*(i+1));
    for(i=0;i<=9;i++)
        cout<<obj[i]<<"  ";
    return 0;
}
