// map is assosiative array
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>customer;

    customer[100]="Pollob";
    customer[200]="Roy";
    customer[300]="PCR";
  // same as
  /*
  map<int,string>customer{
  {100,"pollob"},{200,"roy"},{300,"PCR"}
  };
  */
  cout<<customer[100]<<endl;//polloob

  map<int,string>::iterator p=customer.begin();
  while(p!=customer.end())
  {
      cout<<p->first<<"   "<<p->second<<endl;
      p++;
  }

}
