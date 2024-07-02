#include<iostream>
using namespace std;
main()
{
    int a,b;
    char v[100],d;
    string p,s;
    s="";
    cout<<"Enter a Value:";
    cin>>v;
    for(a=0;v[a];a++);
    for(b=0;b<a;b++)
    {
    switch(v[b])
    {
    case 'c':
        {
        p="C";

        }
    case 'a':
        {
        p="A";

        }
    case'b':
        {
        p="B";

        }
    case else
        {
        p="0";
        }
        s=s+p;
    }
    cout<<s;
    }
}
