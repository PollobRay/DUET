#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;

main(){

	int n,number,binary=0,p,num,dec,ex,power;
	ex=0;
	cout<<"Enter number:";
	cin>>number;
	while(number>0)
	{
	    n=number%10;
	    binary=(binary*10)+n;
	    number=number/10;

	}
cout<<"\n"<<binary<<"\n\n\n\n\n";
while(binary>0)
{
    p=binary%10;
    cout<<p<<"*2+";
    power=pow(2,ex);
    dec=dec+(p*power);
    binary=binary/10;
    ex=ex+1;
}
cout<<"\n\nPower is"<<dec;
getch();
}
