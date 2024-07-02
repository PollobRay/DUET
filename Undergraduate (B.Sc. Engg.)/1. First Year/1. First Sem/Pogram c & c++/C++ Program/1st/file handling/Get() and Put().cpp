#include<iostream>
using namespace std;
int main()
{
int count=0;
char ch;
cout<<"Input text ";
while(ch!='\n')
{
    cin.get(ch);//for one chareacter getting input
    cout.put(ch);//read one character
    count++;
}
cout<<"\nNumber of character"<<(count-1);
return 0;
}
