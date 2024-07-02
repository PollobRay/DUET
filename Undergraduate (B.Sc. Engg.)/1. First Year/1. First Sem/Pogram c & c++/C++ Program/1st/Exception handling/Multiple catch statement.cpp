#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x>0)
        {
            throw x;
        }
        else
        {
            throw 'x';
        }
    }
    catch(int no)
    {
        cout<<"\nCougth a character"<<no;
    }
    catch (char ch)
    {
        cout<<"Cought a character "<<ch;
    }
}
int main()
{
cout<<"Multiple catch statement";
cout<<"\n x is greater than 0";
test(5);
cout<<"\n X is less then 0";
test(-3);
return 0;
}
