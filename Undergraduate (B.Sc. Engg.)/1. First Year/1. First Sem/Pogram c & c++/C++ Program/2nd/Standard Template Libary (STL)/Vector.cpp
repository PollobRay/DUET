// vector
/*
vector is like to Array
but there not give size
there do initilize value as like wise
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    vector<char>v2(4);// here 4 is size initilize
    vector<int>v3(5,10);// here 10 initilize be address 5
    vector<string>v4(3,"Hello");
    vector<int>v5{10,20,30,40};

    for(int i=0;i<4;i++)
        cout<<v5[i]<<endl;

    cout<<"Capacity of vector v1 is:"<<v1.capacity();//0

    //insert value
    v1.push_back(10);//here 10 value insert into v1
    cout<<"\nNow capacity of v1 is:"<<v1.capacity();//01
    v1.push_back(20);
    cout<<"\nNow capacity of v1 is:"<<v1.capacity();//2
v1.push_back(30);
    cout<<"\nNow capacity of v1 is:"<<v1.capacity();//4

    // delete
    v1.pop_back();// here last value is delete
    cout<<"\nNow capacity of v1 is after delete:"<<v1.capacity();//4

    v1.pop_back();
    cout<<"\nNow capacity of v1 is after delete:"<<v1.capacity();//2

    cout<<"\n Total element of vector v1 are:"<<v1.size();

    cout<<"\n Element are:\n";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;

    v1.clear();// delete all value

    cout<<"\n Value at index 1 is:"<<v5.at(1);//20
    cout<<"\n first value of vector v5 is:"<<v5.front();
    cout<<"\n last value of vector v5 is:"<<v5.back();

    // Iterator
    vector<int>::iterator it=v5.begin();
    v1.insert(it+1,100);//here value will be initilize

    return 0;
}
