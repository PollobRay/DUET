#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no,val,re,binary=0,i=1;
    string pr;
    pr=" ";
    cout<<"Enter Decimal Value:";
    cin>>no;
    val=no;
     cout<<"\n\t 2 | "<<no<<"\n";
    while(no!=0)
    {
        cout<<"\t"<<pr<<"   ---------------\n";
        re=no%2;
        no=no/2;
        if (no==0)
        {
         cout<<"\t     "<<pr<<no<<" -- "<<re;
        }
        else
        {
        cout<<"\t "<<pr<<"2 | "<<no<<" -- "<<re<<"\n";
        }
        pr=pr+" ";
        binary=binary+(re*i);
        i=i*10;

    }
    cout<<"\n\n\t     "<<pr<<"= "<<binary;
    cout<<"\n\n\n"<<"Your Decimal Value is: "<<val<<"\n\nBinary value is: "<<binary<<"\n\n\n";
    cout<<"\tThank You .......   For Using This Software\n\n\n";
    cout<<"\t\t\t\tCreated by........\n\n"<<"\t\t\t\t\t\tPollob Roy"<<"\n\t\t\t\t\t  >>>>>>>>>>--<<<<<<<<<<"<<"\n\n\n\n  ";
    getch();
}
