#include<iostream>
#include<string.h>
using namespace std;
class student
{protected:
    int roll;
    char name[10];
    public:
    void getdata(int x,char y[])
    {
        roll=x;
        strcpy(name,y);
    }
    void putdata()
    {
        cout<<"\nStudent name:"<<name;
        cout<<"\nRoll no:"<<roll;
    }
};

int main()
{
student obj;
student *p;
p=&obj;
p->getdata(101,"Pollob");
p->putdata();
return 0;
}
