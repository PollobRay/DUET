#include<iostream>
using namespace std;
int add(int x=10,int y=20,int z=30)
{
    return(x+y+z);
}
int main()
{
cout<<"Addition:"<<add();//60
cout<<"\nAddition:"<<add(100);//150
cout<<"\nAddition:"<<add(100,50);//180
cout<<"\nAddition:"<<add(100,100,100);//3000

return 0;
}
