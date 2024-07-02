#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char name[20];
int cost;
ofstream pollob;
pollob.open("pollob1.txt");
pollob<<"Keyboard\n";//write
pollob<<350<<"\n";
pollob.close();

ifstream roy;//read
roy.open("pollob1.txt");
roy>>name;
roy>>cost;
cout<<"\n\n item name :"<<name;
cout<<"\nitem price :"<<cost;
return 0;
}
