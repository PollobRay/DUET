// pair
/*
pair is a template class in standand Template Library
pair is not a part of container
*/
#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
public:
    void setstudent(string s,int a)
    {
        name=s;
        age=a;
    }
    void showstudent()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};

int main()
{
    pair <string,int>p1;
    pair <string,string>p2;
    pair <string,float>p3;
    pair <string,student>p4;

    p1=make_pair("Pollob",46); // insert vlue
    p2=make_pair("Pollob","Roy");
    p3=make_pair("c++",35.5f);

    student s;
    s.setstudent("Pr",18);

    p4=make_pair(1,s);

    cout<<"Pair 1";
    cout<<"\n "<<p1.first<<"  "<<p1.second;
    cout<<"\nPair 2";
    cout<<"\n "<<p2.first<<"  "<<p2.second;
    cout<<"\nPair 3";
    cout<<"\n "<<p3.first<<"  "<<p3.second;
    cout<<"\nPair 4";
    cout<<"\n "<<p4.first<<"  ";
    student s1=p4.second;
    s1.showstudent();
    return 0;


}
