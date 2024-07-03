//
// Created by pollo on 4/7/2021.
//
// finding GCD & LCM of multiple numbers
/*

#include<iostream>
using namespace std;

long long gcd(long long n1,long long n2)
{
    if(n2==0)
        return n1;
    else
        return gcd(n2,n1%n2);
}

long long lcm(long long n1,long long n2)
{
    return (n1*n2)/gcd(n1,n2);
}

int main()
{
    long long lcm1,gcd1;
    int arr[]={2,3,4,6};//divisor of 12

    lcm1=gcd1=arr[0];

    for (int i = 1; i <4 ; ++i)
    {
        lcm1=lcm(arr[i],lcm1);
        gcd1=gcd(arr[i],gcd1);
    }
    cout<<"Lcm: "<<lcm1<<" GCD: "<<gcd1<<" number is: "<<lcm1*gcd1<<endl;
    return 0;
}
 */