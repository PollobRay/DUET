#include<iostream>
using namespace std;
void function1(int x,int y)
{
    cout<<"\n Inside function";
    try
    {
        if(y==0)
        {
            throw y;
        }
        else{

            cout<<"\nDivision"<<(x/y);
        }
    }
    catch(int i)
    {
        cout<<"\n Cougth integer inside function"<<i;
    }
    cout<<"\nEnd function";

}
int main()
{
cout<<"\n inside main function";
try
{
    function1(10,5);
}
catch(int no)
{
    cout<<"\nCought num:"<<no;
    }
cout<<"\n end main";
return 0;
}
