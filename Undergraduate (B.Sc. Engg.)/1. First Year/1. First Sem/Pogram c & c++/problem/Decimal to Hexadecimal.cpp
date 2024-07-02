#include <iostream>
#include <conio.h>

using namespace std;

main(){

	int n,number,sum=0,dcml;
	string st,pr;
	st="";
	cout<<"Enter number:";
	cin>>number;
	dcml=number;
	while(number>0)
	{

        n=number%16;
        number=number/16;

	    switch (n)
	    {
	        case (0):
	        {
	            pr="0";
	            break;
	        }
	        case (1):
	        {
	            pr="1";
	            break;
	        }
	        case (2):
	        {
	            pr="2";
	            break;
	        }
	        case (3):
	        {
	            pr="3";
	            break;
	        }
	        case (4):
	        {
	            pr="4";
	            break;
	        }
	        case (5):
	        {
	            pr="5";
	            break;
	        }

	        case (6):
	        {
	            pr="6";
	            break;
	        }
	        case (7):
	        {
	            pr="7";
	            break;
	        }
	        case (8):
	        {
	            pr="8";
	            break;
	        }
	        case (9):
	        {
	            pr="9";
	            break;
	        }
	        case (10):
	        {
	            pr="A";
	            break;
	        }
	        case (11):
	        {
	            pr="B";
	            break;
	        }
	        case (12):
	        {
	            pr="C";
	            break;
	        }
	        case (13):
	        {
	            pr="D";
	            break;
	        }
	        case (14):
	        {
	            pr="E";
	            break;
	        }
	        case (15):
	        {
	            pr="F";
	            break;
	        }
	    }


	    st=pr+st;
	}
	cout<<"\n\t= "<<st;
cout<<"\n\n\n"<<"Your Decimal Value is: "<<dcml<<"\n\nHexadecimal value is: "<<st<<"\n\n\n";
    cout<<"\tThank You .......   For Using This Software\n\n\n";
    cout<<"\t\t\t\tCreated by........\n\n"<<"\t\t\t\t\t\tPollob Roy"<<"\n\t\t\t\t\t  >>>>>>>>>>--<<<<<<<<<<"<<"\n\n\n\n  ";
getch();
}
