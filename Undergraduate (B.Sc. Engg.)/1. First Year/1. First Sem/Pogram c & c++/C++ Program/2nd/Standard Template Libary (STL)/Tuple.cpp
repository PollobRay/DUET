// Tuple
/*
tuple is like to pair but it is hold more values

*/
#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<string,int,int>t;

    t=make_tuple("Pollob",15,30);
    cout<<"\n Name:"<<get<0>(t);
    cout<<"\n Roll:"<<get<1>(t);
    cout<<"\n Mark:"<<get<2>(t);
    return 0;
}
