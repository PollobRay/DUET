#include<iostream>
using namespace std;
class test
{
static int cot;
public:
    test()
    {
        cot++;
        cout<<cot<<"\nObject created";
    }
    ~test() //Destructor
    {
        cout<<cot<<"\nObject Destroyed";
        cot--;
    }

};
int main()
{
cout<<"\n main block";
test t1;
{
    cout<<"\nBlock 1";
        test t2,t3;
}
cout<<"\nExit from main block";
return 0;
}
