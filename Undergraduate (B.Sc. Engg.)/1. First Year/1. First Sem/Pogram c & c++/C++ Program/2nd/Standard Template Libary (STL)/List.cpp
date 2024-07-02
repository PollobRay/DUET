#include<iostream>
#include<list>
using namespace std;
int main()
{

    list<int>l1{11,22,33};
    list<string>l2{"India","Dhaka","Bogra"};
    // Iterator
    list<string>::iterator p=l2.begin();
    while(p!=l2.end())
    {
        cout<<*p<<"    ";
        p++;
    }
}
/*
function

sort() size() push_back() push_front() pop_back() pop_front()
reverse() remove() clear()

*/
