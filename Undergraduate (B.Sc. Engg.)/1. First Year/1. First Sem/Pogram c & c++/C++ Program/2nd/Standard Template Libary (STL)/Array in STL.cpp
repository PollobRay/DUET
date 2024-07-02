#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>data_array1={11,22,33,44,55};
    array <int,5>data_array2={1,2,3,4,5};

    data_array1.swap(data_array2);

    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<" "<<data_array1[i];

    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<" "<<data_array2[i];

    array<int,5>data_array={5,4,3,2,1};

    cout<<"\n size of data array is: "<<data_array.size();
}
