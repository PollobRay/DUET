#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char name[20];
float cost;
ofstream outf("pollob.txt");//outf is objects  & ofstream
//ofstream of write
cout<<"Enter item name  :";
cin>>name;
cout<<"\nEnter item cost  :";
cin>>cost;
outf<<name<<"\n";
outf<<cost<<"\n";
outf.close();

ifstream inf("pollob.txt");
//ifstream for write
inf>>name;
inf>>cost;
cout<<"\nItem name:"<<name;
cout<<"\nitem cost"<<cost;
inf.close();
return 0;
}
