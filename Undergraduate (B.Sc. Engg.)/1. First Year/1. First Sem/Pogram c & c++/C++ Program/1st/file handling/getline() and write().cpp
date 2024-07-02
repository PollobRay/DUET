#include<iostream>
using namespace std;
int main()
{
char name[20];
cout<<"Enter your name:";
cin.getline(name,15);//getline(veriable,size)
cout<<"\n name:";
cout.write(name,10);
cout<<"\nName :"<<name;

return 0;
}
