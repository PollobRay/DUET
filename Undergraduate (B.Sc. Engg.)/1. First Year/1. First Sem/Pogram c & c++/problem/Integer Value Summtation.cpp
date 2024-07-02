#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int n,number,sum=0;
	cout<<"Enter number:";
	cin>>number;
	while(number>0)
	{
	    n=number%10;
	    number=number/10;
	    sum=sum+n;

	}
cout<<"\n"<<sum<<"\n\n\n\n\n";
getch();
}
